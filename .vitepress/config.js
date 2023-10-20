import { readFileSync } from "fs"
import { defineConfig } from 'vitepress'
import markdownItFootnote from 'markdown-it-footnote'

const reasonGrammar = JSON.parse(readFileSync("./reason.json"))

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Melange for React Devs",
  description: "A project-based, guided introduction to Melange and its ecosystem for React developers",
  themeConfig: {
    // https://vitepress.dev/reference/default-theme-config
    nav: [
      { text: 'Home', link: '/' },
      { text: "Examples", link: '/code-examples' },
    ],

    sidebar: [
      {
        text: 'Examples',
        items: [
          { text: 'Code Snippet Examples', link: '/code-examples' },
          { text: 'Markdown Examples', link: '/markdown-examples' },
          { text: 'Runtime API Examples', link: '/api-examples' }
        ]
      }
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/melange-re/melange-for-react-devs-book' }
    ],
  },
  markdown: {
    config: (md) => {
      md.set({ typographer: true })
      md.use(markdownItFootnote)
    },
    languages: [
      {
        id: "reason",
        scopeName: "source.reason",
        displayName: "Reason",
        grammar: reasonGrammar,
        aliases: ["re", "rei"],
      },
    ],
  },
})
