# todo

## format

- deal with inline quotes properly (using the `dirtytalk` package)
- harmonize spacers

add this to examples, from the rust parser example i forked, as an example of how people assign quality to proper scale naming:

```rust
// Level-change Operator (what a stupid name)
operator_level = { operator_exp | operator_subscript |
                   operator_exp ~ operator_subscript |
                   operator_subscript ~ operator_exp
}
```

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

Include Gordon Graham - Philosophy of Art and Aesthetics

### literature

__most important__: give code examples that are not related to poetry

- In literature, include rousset: forme et signification
- p.243: when discussing the god example: again, highlight the ontology of markup: inside and outside. There are differences between conceptual spatialization, layout spatialization (the most obvious that we see), and disk fragmentation. The cartesian view of space is different from the one listing 40 (space in 40 is different from a map).
- Listing 40: make it expliciti that it is presented in such a way that highlights the indented/contained nature of markup (indentation)
- Listing 41: no line numbers and most importantly, NOT CLEAR THAT THIS IS RELATED TO SPATIALITY. might be related to SSD/virtual memory/start addresses, but find a better example. maybe start with python, and indentation, related to semantics.
- [ ] literature: acknowledge that narrativity and authorship aren't so much a thing here.
- [ ] literature: include a section about poetry: <https://jacket2.org/commentary/poetry-executable-code> / <https://volltext.net/texte/cornelia-travnicek-code-poetry/>
- [ ] literature: include that code is not literature: <https://gigamonkeys.com/code-reading/>

- fictionality: creates a model of the world. while i make the distinction between fiction and non-fiction, i should focus on why it is fiction that acts as a simulation (i.e. jerome pelletier, nelson goodman, marie laure ryan "textual actual worlds") -> essentially show that fiction might be as relevant as non-fiction in source code

### architecture

In architecture, highlight the fact that the _detail_ is the point of interaction between the human and the structure.

- p.248: mention what are the specific things in architecture: the main thing in architecture is about sight (develop this in the form/function section). ALSO SITE-SPECIFIC: materials+context. Architecture: building codes and requirements, that is not there in lit or math. architect is neither an engineer nor a fine artist.
- Figure 4.2: the plan and the program are different: this is a plan, and the program is different. the program is equivalent to the system requirements.
- Listing 42: hard to tell what this does, might not be worth keeping, or include an extensive discussion of separation of concerns.
- p.263: nick disagrees, don't say that compression isn't so much a problem in poetry, but rather a different kind of problem.
- Listing 44: again, the point of these examples as an illustration of refactoring is also not clear, should be commented a lot more
- p.280: graphical representation/diagram is not uniquely artistic, it is that it adds choices, and calls for attention. not just because its a circle does it mean its better, but rather because it's a different way to represent the same thing, which I argue implies the possibility for a value judgment.
- Listing 45: maybe give a diagrammatic representation of the linked list? there's an abstract concept, this text is a particular representation of it, and a diagram could be another. strip down the example to the very bare minimum, and include very robust and helpful discussion of that discussion. this is too obscure.
- listing 46: regex matcher:  regex is a formalism for processing text. convey that this is a complex problem, but that you can actually write a fairly simple program to implement it. In general, I should always discuss extensively the listings.
- Listing 47: still write about refactoring, but maybe with a shorter program. use the simplest case that makes my point. make that point with elaboration and extent discussion. BUT ALSO PREFACE IT WITH A PYTHON EXAMPLE. So have two listings in the end.
- allamanis, using ML for code generation and analysis, and mattt (as we may code) highlights the need for such a thing (quoting: What if, instead of lowering source code down for the purpose of execution, we raised source code for the purpose of understanding?)
- include \citep{dexter_embodied_2011}
- [ ] put less code poems in this section, both nick and alexandre disagree, seem like it is a bit of a far-fetched example, because this is about the uselessness. __my counter-argument__ is that while it seems that code poetry is useless in the sense that art is useless, not directed, not productive, etc. it is nonetheless functional from the point of the machine, in that it does complex operations. One can also draw an equivalent with Sol Lewitt, and his sentences on conceptual art, in which the "idea is a machine that makes the art". It functions in the machine sense of the term, perhaps not on the human sense. Conversely, some algorithms function on the machine term, and not on the human term: we address this in section 5.3 (syntactical validity, operational semantics, intended semantics)

### mathematics

- add wallen_form_1990 with his argument that mathematics rely on the fact that sight is our most developed sense
- [ ] mathematics: add a discussion of dijkstra's shortest path algorithm?
- mathematics: Barker, John, 2009, “Mathematical Beauty”, Sztuka i Filozofia, 35: 65–74. (A powerful defence of the claim that mathematical and logical proofs have aesthetic properties.)

### meeting with nick - 28.12.2022

- for each of the aesthetic domains (lit, arch, eng, math), add source code examples to show what is similar, and what is different in source code vs. original domains -> __INTERTWINE!__
- my approach to metaphors should be more systematic: that is, I should look into how metaphors can represent a SYSTEM (for instance, `symlink` is a limitation when it comes to the files and folder metaphor)
- e.g. how does step in a debugger relate to code as terrain, or surface coverage for tests? e.g. how does build and architecture related to code as structure?
- ask "why does the metaphor work?" -> how do they (a) combine (b) extend (c) question?
- look at all the metaphors that fit together (in the lit domain, the arch domain, etc.)
- metaphor of the `macro` (implies scale), of `scope`, of `global`, implies scale as well. `libraries` is also a metaphor that is literary.
- add knuth on dijkstra, simple program, complex proof (knuth, simple, 1990)

## chap 2 - understanding

- [ ] recs from guido, neuropsychologists who might be interested: stanislas dehaene and christophe paillier
- [ ] __tools__ add to means of understanding and IDEs deciding how we write: <https://thorstenball.com/blog/2020/02/04/how-much-do-we-bend-to-the-will-of-our-tools/>

## chap 1 - ideals

- [ ]  add a subsubsec on verbosity?

- [ ] add [pressman - software engineering: a practicioner's approach](../readings/notes/pressman_software_engineering_practicioners_approach.md) in the part about software developers

## introduction

done

## general

- [ ] deal with frames and page breaks on minted; <https://tex.stackexchange.com/questions/433192/breaking-pages-in-minted-package>