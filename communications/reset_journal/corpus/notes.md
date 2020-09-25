# corpora

---

if having a style guide most commonly seen as something good, why is the process to get there so damn complicated?

three approaches:

- how the style guides present themselves
- how people discuss them/fork them on github (issues, tagged as enhancement)
- how it compares across projects and what it says about the development of open source projects, the justification against personal style

they use the word "opinionated" a lot. **the interesting thing is that there are not objectively correct answers but questions of style, even though these questions are approached as if they are** > open-source as objectifying the subjective

["it is about personal pride and prestige"](https://www.freebsd.org/doc/en/books/faq/misc.html#bikeshed-painting)

there might also be *radical difference* (style wars, tabs vs. space) as well as *incremental difference* (e.g. "making this change, in combination with AirBnB's style guide..." etc.)

also issues of bugs! you need to hack the config when a bug makes it necessary (more actor-network theory) -> to what extent is style used/linked/intricated with a tool?

## categories

1. personal pride, prestige and preference
2. technical argument (negative: tool not supporting X, etc. **or** positive: [prettier is the only fully automated style guide](https://prettier.io/docs/en/why-prettier.html))
3. social argument

categories 1. uses the pronoun "i", first person singular, the 3. uses "we": hints at the relationship between organizations (while at the same time being for interoperability)

---
---
---

in Standard, the tool *is* the convention: most of it is about functional as well as aesthetic (they are intertwined)

in Airbnb, the organization is the convention: the discourse is didactic, explain to the users why they do something, and providing the users with explanations AND alternatives to the code they post

in Prettier, the opinion is the convention?

## [prettier](https://prettier.io/docs/en/why-prettier.html)

---

stats: 37k stars, 2.5k forks

---

the core principle is "fully automatic"; on their website, they acknowledge that there are multiple reasons why one would want to use Prettier, and they list the different categories

one of the main devs is confused that there are so little forks, because the issue is a `technical argument` rather than a `personal one` [src](https://github.com/prettier/prettier/issues/3101#issuecomment-606764384). as it turns out, it's actually a different kind of `technical`, because forking perttier involves forking other plugins/files which come with it (you can fork a project, and it's more difficult to fork an ecosystem)

> it's annoying until you don't notice anymore
[src](https://github.com/prettier/prettier/issues/3101#issuecomment-674176352)

> many people have seen the value of "team" over "individual"
[src](https://github.com/prettier/prettier/issues/3101#issuecomment-683836592)

at the end of issue 3101, it just gets redirected to [a fork](https://github.com/brodybits/prettierx), and it is also the closing argumentation of [this](https://github.com/prettier/prettier/issues/8507) (funny, cause this fork of prettier actually uses **standardJS** as some style inspiration)

[interesting example of when a maintainer is angry, and a contributor rational](https://github.com/prettier/prettier/issues/8507)

> The requests for configuration are vocal. The requests to stay simple are often silent.
[src](https://github.com/prettier/prettier/issues/40)

### open issues

component props being each on their own line

### closed issues

tabs v space, semis (solved by having options)

---
---

## [standardJS](https://github.com/standard/standard/)

---

stats: 24k stars, 1.8k forks

---

the core principle is "no configuration", "automatically format code", "catch style issues" )(save you time) [src from founder](https://github.com/standard/standard/issues/1356)

### issues

this guys wants to hack a config, understands why he shouldn't do it, argues that it's because the linter currently doesn't support his request: [link](https://github.com/standard/standard/issues/1500)

"based on ESLint"

> There is a new set of ts plugins in town
good metaphor of the JS ecosystem [link](https://github.com/standard/standard/pull/1101)

### [the website](https://standardjs.com/#why-should-i-use-javascript-standard-style)

"i disagree, can i change it?" answer is NO

the point is to save **time** and give an answer to unsolved (unsolvable?) debates. therefore, it is seen as "not an actual, real problem".

the point of *standard* is that it is both an indicator of *standard of quality* and basis for a *style standard*

justification from the founder: [link](https://feross.org/never-use-semicolons/), it is about technical, about "being kept safe"

the first comment is "sorry, this doesn't make sense to me"

response in support of "no semi-colon", user "Chipotle"
> "the simplest approach is the one with fewer rules and characters"

response against, user "Heheh"
> "The people are divided on those who are real programmer (they are use semicolons). And hobbysts who have never programmed in another language."

## eslint

---

stats: 17k, forks 3k

---

this one is the base on which all others are setup

## airbnb

### commentaries

[medium post](https://medium.com/docon/airbnb-javascript-style-guide-key-takeaways-ffd0370c053)

- [freecodecamp](https://www.freecodecamp.org/news/adding-some-air-to-the-airbnb-style-guide-3df40e31c57a/)

it's about productivity and maintainability

javascript has a lot of tools and everything else (and it's typical of javascript)

aesthetics is the prime justification of the author: breathing some air, making it lighter, nicer
> indentation is one of the rules that breathes more “air” into AirBnB’s default style guide. As a result, your code doesn’t crowd on the left side of editor so badly.

call to personal judgment
> I encourage you to give them a try. I think you’ll quickly experience what a difference this makes.

## [ruby style guide](https://rubystyle.guide/)

## [golint](https://github.com/golang/lint)

## [black - python](https://github.com/psf/black/)

very nice and polite discussion: [https://github.com/psf/black/issues/51]

the big difference is PEP-8. indeed, even google just builds on top of it
