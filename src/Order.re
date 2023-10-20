[%%mel.raw {|import "./order.css"|}];

let sprintf = Printf.sprintf;

// #region sandwich
module Sandwich = {
  type t =
    | Portabello
    | Ham
    | Unicorn;

  let toPrice =
    fun
    | Portabello => 9.
    | Ham => 10.
    | Unicorn => 88.8;

  let toEmoji = t =>
    sprintf(
      "%s(%s)",
      {js|🥪|js},
      switch (t) {
      | Portabello => {js|🍄|js}
      | Ham => {js|🐷|js}
      | Unicorn => {js|🦄|js}
      },
    );
};
// #endregion sandwich

module Burger = {
  type t = {
    tomatoes: bool,
    lettuce: bool,
    bacon: int,
    onions: int,
    cheese: int,
  };

  let toEmoji = ({lettuce, tomatoes, bacon, onions, cheese}) => {
    let multiple = (str, n) =>
      switch (n) {
      | 0 => ""
      | 1 => str
      | n => Printf.sprintf("%s%s%d", str, {js|×|js}, n)
      };

    sprintf(
      "%s{%s}",
      {js|🍔|js},
      [|
        lettuce ? {js|🥬|js} : "",
        tomatoes ? {js|🍅|js} : "",
        multiple({js|🥓|js}, bacon),
        multiple({js|🧅|js}, onions),
        multiple({js|🧀|js}, cheese),
      |]
      |> Js.Array.filter(str => str != "")
      |> Js.Array.joinWith(", "),
    );
  };

  let toPrice = ({bacon, onions, cheese, _}) =>
    15.
    +. float_of_int(bacon)
    *. 0.5
    +. float_of_int(onions)
    *. 0.2
    +. float_of_int(cheese)
    *. 0.1;
};

type t =
  | Hotdog
  | Sandwich(Sandwich.t)
  | Burger(Burger.t);

let toPrice =
  fun
  | Hotdog => 5.
  | Sandwich(s) => Sandwich.toPrice(s)
  | Burger(b) => Burger.toPrice(b);

let toEmoji =
  fun
  | Hotdog => {js|🌭|js}
  | Sandwich(s) => Sandwich.toEmoji(s)
  | Burger(b) => Burger.toEmoji(b);

[@react.component]
let make = (~order: t) =>
  <tr className="order">
    <td className="emoji"> {order |> toEmoji |> React.string} </td>
    <td className="price"> {order |> toPrice |> Format.currency} </td>
  </tr>;
