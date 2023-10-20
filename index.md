---
# https://vitepress.dev/reference/default-theme-home-page
layout: home

hero:
  name: "Melange for React Devs"
  text: "A project-based, guided introduction to Melange and its ecosystem for React developers"
  actions:
    - theme: brand
      text: Markdown Examples
      link: /markdown-examples
    - theme: alt
      text: API Examples
      link: /api-examples

features:
  - title: Feature A
    details: Lorem ipsum dolor sit amet, consectetur adipiscing elit
  - title: Feature B
    details: Lorem ipsum dolor sit amet, consectetur adipiscing elit
  - title: Feature C
    details: Lorem ipsum dolor sit amet, consectetur adipiscing elit
---

Hello World!

What're you looking at?

"Oh no"---is this even working?

```reason
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