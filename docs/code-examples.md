# Code Snippet Examples

## Line highlighting

```reason{3,6-11}
[@react.component]
let make = () => {
  let (counter, setCounter) = React.useState(() => 0);

  <div
    style={ReactDOMStyle.make(
      ~padding="1em",
      ~display="flex",
      ~gridGap="1em",
      (),
    )}>
    <button onClick={_evt => setCounter(v => v - 1)}>
      {React.string("-")}
    </button>
    <span> {counter |> Int.to_string |> React.string} </span>
    <button onClick={_evt => setCounter(v => v + 1)}>
      {React.string("+")}
    </button>
  </div>;
};
```

## Import from file

<<< @/../src/CelsiusConverter.re

## Import region from file

Just the sandwich region and nothing else

<<< @/../src/Order.re#sandwich
