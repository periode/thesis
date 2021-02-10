# programming languages: constructs and concepts

## ravi sethi

### at&t 1996

---

essentially a fairly technical manual about the theories of programming languages. quite useful in determining the basics of "classical" programming language theory and practice.

---

#### 1 - introduction

First and foremost, the theoretical roots of PL are in maths, in formal notation, while its practical roots are in looming machines. It seems that the main thread that runs through the book (and perhaps PL research altogether?) is *lack of ambiguity*.

PL as notations are compared to English language, since they both have constructs of different types and different scales (sonnet, essay, note, etc.). To what extent are these constructs things that can be considered *patterns*? Because then aesthetic standards could be thought of as very narrow patterns.

On a different note, languages are only meaningful at the interface between the human and the machine (cf. Galloway, Thacker, [Language, life, code](https://onlinelibrary.wiley.com/doi/abs/10.1002/ad.317)). But that still doesn't tell us if machines understand anything at all. The author seems to state that the computer only ever understands binary (quoting Goldstine, 1972).

> The art of programming is the art of organizing complexity (Djikstra)

However, is that only the case for structured programming, and less so for imperative/functional/declarative programming? (Declarative programming looks fckn crazy)

#### 2 - grammars

introduced in 1958 by Algol 58, because they were *dissatisfied with the fact that subtle semantic questions remained unanswered due to a lack of clear description*. it then seems that the basics of PL are **formal syntax** and **informal semantics**

| syntax          | semantics |
| ------          | --------- |
| formal          | informal  |
| explicit        | implicit  |
| use             | value/env |
| doing?          | being?    |
| known           | predicted |
| given           | extrapolated (from environment) |
| data procedures | data structures|

semantics imply how variables and functions "should" behave: the expectation is about the development of an external system (CPUs have, to an extent, already the ability to foresee their internal behaviour, see SPECTRE). there is also some aspect of context, of pre-existing knowledge. as such, each higher layer provides some context for the previous layer (assembly gives meaning to machine code, C gives meaning to assembly, Go gives meaning to C, etc.), and so do we reach a point where the programmer themselves are the context? is this where the magic happens (i.e. in the mind)

(implications of thesis: there is art in everything? or only in programming? that's a longer work to verify **OR** you can only find it beautiful if you can understand it)

#### 13 - semantics

there is grammar to explain the syntax of a PL (e.g. BNF), and then there is English to explain its semantics. semantics in PL consist of **values** and **environments**.

fun fact: at some moment (p.515) they mention *pre*fix notation, *in*fix notation and *post*fix notation. when it doesn't match, they call it *mix*fix notation (just for the sake of being able to categorize it all?)

so each programming language is made up of an abstract tree composed of terminals (tokens, values), non-terminals (procedures, expressions, statements) and production rules (how to get a non-terminal from a bunch of terminals).

`look(x, nil)`, like staring into the abyss.

There are a bunch of ways to attach values to terminals:

- synthesized attributes
- attribute grammars (eg. E.env, E.val)
- operational semantics (e.g. env(E, val(E2)))
- denotational semantics (e.g. [[E]] env == value of E inside environment env)
- natural semantics (sets of logical rules, related to declarative programming)

There are (at least) two different kinds of beauty:

- the beauty that works with Lisp and is featured in clean snippets of code in textbooks
- the beauty of including the error-checking

---

From *Programming Languages: Design and Implementation*, p.508:

> The difference among programming langauges are not quantitative differences in what can be done, by only qualitative differences in how elegantly, easily and effectively things can be done.

Beautiful languages:

- clear semantics and syntactic structure
- natural representation for problem data and algorithms (**related to patterns**)
- ease of ex tension (**related to patterns**)
- efficiency
