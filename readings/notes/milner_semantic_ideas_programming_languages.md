# Semantic Ideas in Computing

## Robin Milner

### Cambridge University Press, 1996

---

a high level reflection of the problem that computing presents: as a discipline, it presents new constructs that do not exist in maths/engineering (e.g. streams, types, powerdomains)

---

starting question: is computing *a science* or *a material*?

programming has moved over time from *prescribing* computers (application domain) to *describing* problems (problem domain), such that we center less and less around the specificity of the computer, and more and more around the specificity of the problem. the *specification* then removes the possibility for any blackbox (the whole internal functions are known, and so must the external environments on which these functions are supposed to operate)

there are two sources for the origin of the computer:

- maths (they do allow us to understand concept in programming, particularly formal logic, but it's just a start)
- practice

programming languages themselves aren't just deriving (partially) from the field of mathematics and formal logic, they're also broadening it.

> every formal expression has a meaning, and this meaning has conceptual content (p.8)

and this meaning can, with great difficulty and clumsiness, be explained, but the conceptual content still eludes the computer, varying from the mundane (e.g. a counter) to the esoteric (e.g. a wish). as such, even the highest-level code, as beautiful as it  is, cannot deal with *new environments* (which would require it to adapt and anticipate).

what he wants to lay out here is "a theory of software dynamics", "a conception of the straight software material"

the central question is **what do (software) formations express?**

these formations can be between:

- the problem domain
- the application domain

and when you work in the application domain (code), are concepts about either math (one side or the world (other side) enough? for instance, when you work with communication systems, what is the concept of *routes*? and when you work with compilers, how does one approach the idea of *exact translation*?

(the diversity of PL comes from a diversity of purposes)

semantics themselves are based on **domains** ([wiki](https://en.wikipedia.org/wiki/Semantic_domain) "a specific place that shares a set of meanings, or a language that holds its meaning, within the given context of the place.")

> partial functions have less meaning than full functions

why is that? a partial function only maps a *subset* of the input to the full output range. a *full* function maps the totality of the input set to the totality of the output set.

concepts in PL that don't exist anywhere else:

- stream (continuity) (but continuity in interactive environments makes it hard to reason about)
- monotonicity
- types
- powerdomains (i.e. domains with random branches)

**states**

a given state is:

```c
STATE: NAMES -> VALUES
```

> to say how much information is needed, and when it is needed, is tantamount to defining the function

**SEQUENTIALITY IS KEY** in understanding the semantics of low-level code (one after the other, always)

but this falls through as we get to higher-levels, as we become more "abstractly human" (expression mine)

the *concrete domains* seem to be a foundation in the semantics of PL ([link](https://www.sciencedirect.com/science/article/pii/030439759390089C)), (and in this paper they say that Christopher Stratchey was the first one to point out semantic issues in lambda-programming.)

anyways, concrete domains, particularly, seem to want to deal with the issue of non-determinism: that is, non-sequentiality

**links**

links are higher-level concepts in programming, they can be:

- pointers
- references
- channels
- variables
- locations
- names
- addresses
- etc.

(what is the equivalent for procedures/calls/methods/routines/etc.?)

---
---

BASICS OF PL

they have basics:

1. data
2. primitive operations
3. sequence control
4. data control
5. storage mgmt
6. operating environment

they have bidings:

- execution time (value)
- translation/compile time (type)
- language/definition (possible types)
- language implementation (constants, properties of operators)