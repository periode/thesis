# todo

## format

- [ ] deal with frames and page breaks on minted; <https://tex.stackexchange.com/questions/433192/breaking-pages-in-minted-package>
- deal with inline quotes properly (using the `dirtytalk` package)
- harmonize spacers
- add index
- harmonize spacer and spacersmall

## conclusion

- [ ] add a footnote about Brenda : Brenda Baker undertook her Fortan-to-Ratfor converter against the advice of her department head--me. I thought it would likely produce an ad hoc reordering of the orginal, freed of statement numbers, but otherwise no more readable than a properly indented Fortran program. Brenda proved me wrong. She discovered that every Fortran program has a canonically structured form. Programmers preferred the canonicalized form to what they had originally written. [source](https://web.archive.org/web/20200315093052/https://minnie.tuhs.org/pipermail/tuhs/2020-March/020664.html)

## chap 4 - programming

- __case studies__
  - choose the case-studies in the way that is the most illustrative of my point. doesn't have to be huge.
  - i should definitely have a more comparative approach: multiple code-bases, with aesthetics which are tied to __LANGUAGE__, __COMMUNITY__ and __PROBLEM__ (question of the idiomatic). this is better than having one case study after another, completely discontinued.
  - find similar problems in different programs, see how they deal with it
  - find specific cases where the cognitive load is high
  - again, __DO IT IN PARALLEL__ as a comparative studies.

### programming languages

- in language design section, inckude iverson_notation_as_tool_for_thought, beardsley: cognitive gratification under ideal circumstances

### styles

- [ ] add marielle macé to a bit of conclusion on the styles of programmers (maybe once the part about simmel is extracted from the craft)
- [ ] add if hemingway wrote javascript as an example of styles

- [ ] include the concept of interface by matthew kirschenbaum <https://www.researchgate.net/profile/Nancy-Ide/publication/229666751_Preparation_and_Analysis_of_Linguistic_Corpora/links/5a75ec770f7e9b41dbd04d97/Preparation-and-Analysis-of-Linguistic-Corpora.pdf#page=550>
- [ ] proofread subsec between human and machines
- [ ] there is no example of iterating in 5.1.2
- [ ] all figures (especially fig. 51, 52) need to be very much explicited: "we need to be lead into why that is even an issue" / define reasonable examples for each / show different return types in fig. 51
- [ ] for the threads, first define what a `process` is so that we can understand what a `thread` is, also show the non-threaded version? explain how the sequential outcome is bouleversé?
- [ ] look into why we can't return `[]int` in c
- [ ] in golang, the `_` identifiers are not about the error, but about ignoring things. show that it differs in JS or Python
- for fig. 62, step through a computer interpretation of the process, before giving a literary interpretation of the process.
- for the code poems, I need to be able to articulate their relevance when looking at different domains. they're not just related to literature, but also architecture (follies, pavillions) or math (pure math), while other source code (linux kernel) might also be a sort of literature (legal code). but also make it explicit that i talk about the ones that can run, not the code poems that are not executable
- [ ] rather than having 5.3 as this total disconnect, maybe start by writing a monolith to avoid the pitfalls of structure. particularly because at this point i need to synthesize. rather work on _connections and disconnections_ between the social and the functional?
- in the case of list comprehension in Python, it is both a technical and social environment

#### emotions and functionality

- [ ] literature: include a section about poetry: <https://jacket2.org/commentary/poetry-executable-code>:

> Implied in the design of the Source Code Poetry competition is the idea that the writing of code is an artistic enterprise. Indeed, "real" programmers are the ones whose code itself is poetry in motion. The emphasis on executable code reveals aesthetic possibilities of programming languages that blend form and function. Such poems are fascinating because they are variably accessible and inaccessible to readers, a function of their readers' knowledge of programming languages and facility with poetry. They also provide means of expression in multiple ways: the visual aesthetics of the code on the page, an aural dimension if read aloud, and the output rendered by the code when compiled. Their possibilities for interpretation, then, are fragmentary, requiring negotiation on these many fronts to appreciate and understand.

in the last section, 5.3

- [ ] functions need to be made clearer. there are three levels (1) syntactical/formal validity, (2) what the program down (operational semantics) and (3) what the program should do (intentional semantics). THIS SHOULD BE DISCUSSED AT THE BEGINNING RATHER THAN JUST THE LAME INTRO ON LAMBDA CALCULUS. then start from those to discuss the function/meaning of computer programs
- [ ] i talk about "_syntactic meaning_" but this makes no sense, meaning is only semantic
- [ ] again, shorten the code snippets and __explain them__
- [ ] re-quote hayles and her regime of computation (surface, depth, etc.) when i also talk about paloque berges et. al.
- [ ] add this quote from The Embodied Aesthetics of Code, quoted in [Sy Brand](https://www.youtube.com/watch?v=CkGqINHZit0): "an object is 'functionally beautiful' to the extent that its aesthetic properties contribute to its overall performance---the functional beauty of an object enhances its fulfilling its primary function" and, in this case, the primary function is not to be executed, but to be understood.
- [ ] from sy brand talk, gabrielle starr, feeling beauty: the neuroaesthetics of the experience: "Aesthetic response enables the comparison and integration of novel kinds of reward in a process that opens possibilities for new knowledge, or new ways of negotiating the world. The perceptions, images, and emotions we find through our experience of poetry, painting and music put ideas and events into relation with one another that would rarely, if ever, be possible outside the arts."

## chap 3 - beauty

overall, I should keep in mind that I do not have a technical audience, and I should rework/remove a lot of the examples, and add extensive discussions and rationale as to why those examples are there

### aesthetics

- mention that knowledge influences how we perceive things (brandy, mathematical beauty)

### literature

- In literature, include rousset: forme et signification
- remove god and xml example?

### architecture

- add more code examples (check the architecture of open source applications? redis?)

### mathematics

- mathematics: add a discussion of dijkstra's shortest path algorithm?
- add knuth on dijkstra, simple program, complex proof (knuth, simple, 1990)

## chap 2 - understanding

- [ ] recs from guido, neuropsychologists who might be interested: stanislas dehaene and christophe paillier
- [ ] __levels of software__ ([as we may code](https://nshipster.com/as-we-may-code/)) highlights the need for such a thing (quoting: What if, instead of lowering source code down for the purpose of execution, we raised source code for the purpose of understanding?)
- [ ] __tools__ add to means of understanding and IDEs deciding how we write: <https://thorstenball.com/blog/2020/02/04/how-much-do-we-bend-to-the-will-of-our-tools/>
- [ ] __tools__ including a discussion of how does step in a debugger relate to code as terrain, or surface coverage for tests? e.g. how does build and architecture related to code as structure?
- [ ] __programmer metaphors__ my approach to metaphors should be more systematic: that is, I should look into how metaphors can represent a SYSTEM (for instance, `symlink` is a limitation when it comes to the files and folder metaphor)
- [ ] __programmer metaphors__ metaphor of the `macro` (implies scale), of `scope`, of `global`, implies scale as well. `libraries` is also a metaphor that is literary.
- [ ] __programmer metaphors__ refer to master/slave as a problematic one

## chap 1 - ideals

- [ ]  add a subsubsec on verbosity?
- [ ] harmonize subsubsection (Smells -> smelly?)

- [ ] add [pressman - software engineering: a practicioner's approach](../readings/notes/pressman_software_engineering_practicioners_approach.md) in the part about software developers

## introduction

- explain that beauty might be a metaphor itself of "good" (value judgments, etc.)