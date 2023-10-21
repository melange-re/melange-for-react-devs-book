# Markdown Extension Examples

## Nested lists

- foo
  - seems normal
- bar
  - baz
  - hullo
    - most secret, inner desires

## Tables

| Title  | Summary | Topics covered |
| ------ | ------- | -------------- |
| Counter | Number that can be incremented or decremented | module, Option, pipe last operator, function chaining, switch |
| Melange Playground | Use Melange Playground to explore OCaml’s numeric types | Playground, Int, Float |
| Celsius Converter | Single input that converts from  Celsius to Fahrenheit | polymorphic object, exception handling, ternary expression, if-else expression, labeled argument, partial application |
| Celsius Converter using Option | The same component from the last chapter but replacing exception handling with Option | Option, Option.map, when guard |

## Typographer

What're you looking at?

Gazing at the mirror, she suddenly exclaimed "Oh no!"

The potion---is it even working?

## Footnotes

https://github.com/markdown-it/markdown-it-footnote

Here is a footnote reference,[^1] and another.[^longnote]

[^1]: Here is the footnote.

[^longnote]: Here's one with multiple blocks.

    Subsequent paragraphs are indented to show that they
belong to the previous footnote.


## Syntax Highlighting

VitePress provides Syntax Highlighting powered by [Shiki](https://github.com/shikijs/shiki), with additional features like line-highlighting:

**Input**

````
```js{4}
export default {
  data () {
    return {
      msg: 'Highlighted!'
    }
  }
}
```
````

**Output**

```js{4}
export default {
  data () {
    return {
      msg: 'Highlighted!'
    }
  }
}
```

## Custom Containers

**Input**

```md
::: info
This is an info box.
:::

::: tip
This is a tip.
:::

::: warning
This is a warning.
:::

::: danger
This is a dangerous warning.
:::

::: details
This is a details block.
:::
```

**Output**

::: info
This is an info box.
:::

::: tip
This is a tip.
:::

::: warning
This is a warning.
:::

::: danger
This is a dangerous warning.
:::

::: details
This is a details block.
:::

## More

Check out the documentation for the [full list of markdown extensions](https://vitepress.dev/guide/markdown).
