# the elements of programming style
## brian w. kernighan, p.j. plauger
### mcgraw-hill, new york, 1978

#### summary
*keep in mind that much of this is based on fortran programming*

this book is definitely dated, and some of those recommendations are highly time-sensitive (e.g. "reading input until `EOF` or marker). it also moves from aesthetics (first couple of chapters on expressions and control flows) towards higher-level heuristics (input/output and general comments).

still, it is interesting for its laying out the standard, and dispelling myths about efficiency (not machine-based, but human-based)

---

"after years of producting `write-only` code, students, teachers and professionals are realizing the benefit of `readable` code"


the second edition includes a whole new chapter on structure: is structure on the aesthetics side or on the poetics side? is it a bridge between both? (cf. structured programming)

the constant interplay of reading and writing

**the assumption here is that "the principles of style [...] are applicable in all languages, even in assembly**

a direct correlation is made with *The Elements of Style*, by W. Strunk and E.B. White (look up!)

---

#### chap 1 - intro

**write clearly - don't be too clever**

*example of the identity matrix*

you can write it in a clever way, but then it's not actually readable *and not even be as fast!*. one of the first differences is *writing a comment*. "It is more important to make the code unmistakable than to display virtuosity", because a "too clever program may not say what you thought it said".

*real programs are like prose—they often violate simultaneously a number of rules of good practice.*


**the size of a program only reflects a need for improvement**

there is style that is language-independent and style that is language-dependent

also, a clear code doesn't prevent it from being wrong, so *cleanliness is necessary but not sufficient*. as a corollary, a correct code doesn't guarantee that it is right

chap.3 announces the relationship between clean control-flow and clean data structure

---

#### chap 2 - expression

**say what you mean, simply and directly**

difference between what the program does and what the program *should* do (difference between human understanding and machine understanding)

**BROAD QUESTION** what else could one be trying to do other than getting the job done?

"Particular modes of expression often arise out of attempts to write 'efficient' code" (in the 1970s, this criteria for efficiency means knowing the compiler) > cf. notes.md#materiality

**avoid temporary variables** (?? -disagree, since temp var allow for better understanding of the operations? there is a limit/balance. also the reason they give for that is that it might thwart the compiler)

**let the machine do the dirty work** > this is the root of DRY; but also this is followed at the conclusion of the chapter by "don't build *all* of your own tools", which means that the process of tool building is also one that is integral to writing code) > in chap.4, it phrases it in terms of placing the burden on the compiler rather than the programmer.

which is then logically followed by **replace repetitive expressions by calls to a common function**

in naming, **parenthesize to avoid ambiguity**, make variable names *pronounceable*, be *consistent* (discussed further in chap. 8)


>> statements should be understood in *relative isolation*: what are the criteria for such isolation? (again, cf. goodman?)

**avoid unnecessary branches**, and **don't use conditional branches as a substitute for a logical expression** >>> LINEARITY IS KEY

("a `null ELSE` serves no purpose whatosever")

the "telephone test": if someone can understand your code while read aloud on the telephone, then it's clear enough **ORALITY AS UNIQUE TO HUMANS** (cf. Ong)

code aesthetics is also about **taking into account that programs evolve**

---

#### chap 3 - control structure

**use indenting to delimit groups of statements** (statement grouping)

he is very happy about being able to group instructions under an `if-statement` (in PL/I it's `DO; END;`), and the fact that Fortran doesn't have that is considered a major failiing

"`ELSE` serving no purpose" implies that *clarity is distinguishability*. **UNIQUENESS**

**use if/else to emphasize that only ONE of multiple actions is being done** (decision-making a.k.a never use a `THEN` immediately after an `IF`, since it immediately increases the output complexity. and then once that decision is made, follow it as closely as possible with the associated *action*)

**make loops explicit with `WHILE`**

**make your programs read from top to bottom** (be human)

**write first in an easy to understand language (PSEUDO-CODE) then write it in whatever language you have to use**

"choosing a better data structure is often an art, which we cannot teach" > the process is to repeat through program designs until computation becomes as easy as possible

clarity > optimizagtion, and regularity > irregularities (does that mean that no beautiful program should have irregularities?)

**DON'T STOP WITH YOUR FIRST DRAFT**


---

#### chap 4 - program structure

**modularize, use subroutines**, which implies that any big enough program should be written *and tested* in small pieces

"optimizing too early in the life of a program can kill its chances for growth"

it must be possible to describe the function as simply as possible, then minimize external relationships, and make those relationships as explicit. aka find the best way to make something explicit

**make the coupling between modules visible**

**each module should do ONE thing well** (UNIX)

**each module should HIDE something**; the hiding means compartmentalizing, abstracting, encapsulating, etc. (terms that didn't exist when the book was written because OOP was still in its infancy (`smalltalk` is developed in 1972, 2 years before the book))

the authors advocate that *program structure is related to the output generated*, which then concludes into **let the data structure the program**.


--- 

#### chap 5 - input and output

the very first lesson is "never trust any data"; which implies that all programs should be self-sufficient. the input data that they get should be some sort of self-fulfilled prophecy (the data i describe is the data i get)

aka **test input for validity and plausibility**, such that bad input is caught and recovered early, and that the input doesn't violate the limits of the program


output (just like the rest of things that programmers have control over), should be *self-explanatory*


some things that might appear like they are inherent to a domain ("garbage in, garbage out"), can actually be sometimes attributed to particular practices in this domain (not sanitizing input)

they talk about the act of sanitizing input, but the *how* to sanitize input implies the "mnemonics" (aka the correct naming of variables)


---

#### chap 6 - common blunders

this section deals more specifically with practices:
- initializa variables
- don't stop at one bug
- know thy audience (e.g. for an electrical engineering program, should the voltage be V (for most people) or E (for engineers)?)
- use debugging compilers (not reinventing the wheel applies to metatools)
- avoid multiple exists from loops (aka limit the branching + not repeating yourself)

labels should be used often as long as they do not imply a jump in the flow of the program

**programming defensively** is the assumption of the worst, and the repair of that worst.


#### chap 7 - efficiency and instrumentation

"efficiency" is the reduction of **overall** cost, not just sub-costs
writing readable code is actually human-efficient >> [be humble](https://www.youtube.com/watch?v=H4RELGc9su8)

another suggestion which is actually a strategy is:
- make it *right* before you make it clear
- make it *clear* before you make it faster

and then: **keep it simple to make it faster**, so there they make a distinction between clear and simple, even though they often overlap. (clear is *what* it does and simple is *how* it does it?)


if you're going to make efficiency changes, make sure that those changes are actually based on *measurements* (i.e. profilers), such that you know WHAT you're aiming to do, and you can then focus on the HOW.

#### chap 8 - documentation

the best documentation for a computer program is a clean structure (it helps if it is well formatted, mnemonics, labels, comments): because **CODE DOES WHAT IT IS** (galloway)

"whenever there exists multiple representations of a program, the chance for discrepancy exists" (understanding is about mental representations)

documentation: what each program is supposed to do, how it is used, how it interacts with other programs, and on what principles is it based (thanks, pseudo-code. as pseudo code gets included in the source code as comments, it looses it's pseudo-ness and becomes source code)

reference to weinberg's *The Psychology of Computer Programming*, about a detail on layout, but interesting that there is a connection between style and psychology

**make sure comments and code agree**

**don't just echo the code with comments—make every comment count** (repeat of DRY lol)

**don't comment bad code - rewrite it**

**formatting is facilitating understanding**: even though a piece of code might be properly formatted, it might not be easily *understood*. understanding comes first and then formatting as sugar. again, control flow and expressions are first and foremost.


---

#### epilogue

*"one excuse for writing an unintelligible program is that it is a private matter"*. code is, more often than not, social

in the end, style is an attitude

---
---

review of the book: [kilobaud magazine](https://archive.org/stream/kilobaudmagazine-1980-01/Kilobaud_Microcomputing_1980_January#page/n7/mode/2up)

> the *real* problem is to have a program do what it is intended to do