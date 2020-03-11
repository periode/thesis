# the pragmatic programmer
## andrew hunt, david thomas
### addison-wesley, 1999

---
summary

this is largely a book about the realities of being a programmer in a working-environment (mostly a business, profit-oriented one). still, it's a well-rounded view of the life of software developers
, and a series of *heuristics* which aren't quite worried with the aesthetics/details of it, but rather with *due process*.

yet it also seems like all the code there *is* beautifully working code. some of the variable names is a little clunky, with prefixes. it is indeed *good*, *pleasing* code, almost *beautiful*. it's actually quite a good example of how aesthetics and poetics are interdependent.
---

state that programming is a craft, and is about *doing*, not theories

programmer = listener (capture elusive requirements) + advisor + interpreter (express them so that the machine can do them justice) + dictator

this book is very much about the craft of programming (or so it claims)
- early adopter/fast adapter (experience)
- inquisitive (ask questions)
- critical thinker (cf. above)
- realistic
- jack of all trades


even in business/corporate development, even in large teams, there is room for individuality. **they claim that engineering and craftsmanship can coexist**, this is visible in how emotional they are when talking about tools (p. 96, chap. 3)

*kaizen*: continuously making small improvements

yet another mention of the *broken windows*, coming from the fact that there is software that is just *good enough* (anti-craftsmanship?)

"don't spoil a perfectly good program by overembellishment and over-refinement"

so it looks like the **DRY** acronym has been first presented in this book?

*"no point in duplicating a comment in header and implementation files. put the comment on interface issues in the header file, and put the comment on details, nitty-gritty comment in the implementation files"*

the trick is always about *localization*.

`java`, `c++` allow for accessor functions (e.g. `getX(){ return x};`)

*Yourdon and Constantine* call the value of **cohesion** (self-contained, independent, single-clear-purpose)

**no unknowns**

**no global data**

plain-text: "human-readable forms of data will outlive all other forms of data and the applications that created them" > difference between *human-readable* and *human-understandable*

the IDE is still important as a tool, and def has an impact on style and aesthetics (auto-formatting)

liskov principle: "subclasses must be usable through the base class interface without the need for the user to know the difference"

**poetics**: you can use `semantic invariants` to express inviolate requirements, a kind of "philosophical contract" >> kind of like `idempotency`

the example on page 173 could be solved by a `finally`

---
**the aesthetics of code is that everything is essential without ever being dependent on everything else —on nothing that it doesn't need to know about**
---


*de*coupling is separating as much as possible

beautiful code is both *soft* (accomodates changes) and *hard* (does only one definite thing). being something while at the same time having the *potentiality* of being something else.


**one example of why software is hard: temporal coupling. we don't usually read in a TMEPORAL fashion** so beautiful code is made to help us overcome hurdles such as these


when you're coding, there are actually unexpected decisions that spring up unexpected all the time