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

- [x] i talk only about the naming, but I should really should be getting deeper, since this is the only way out. Rather, talk also about the structure, about what survives once it's compiled, etc. for instance, the xchrad; book, where it's assembled or disassembled. This would be a good example to show the aspects of the program that survive after you have taken off names/labels/etc. (e.g. Snippet 0x31, gray code and its visualization)
- [x] expand on the section on metaphors. essentially, we've shown that there are these domains that are used to refer to programming: in the end, _what do they tell us?_ specificlaly, have a section on what is the overlap of math/arch/lit?
- [x] then, follow with the overlap:conclude on what the metaphors teach us: it is explicitly intellectual, it is not time-based (i.e. persistent, static), it is linear, it requires a certain depth of engagement, etc.
- [x]  and then both separately: showing that they might be compensating for one another (e.g. architecture introduces the notion of craft)
- [ ] add a footnote about Brenda : Brenda Baker undertook her Fortan-to-Ratfor converter against the advice of her department head--me. I thought it would likely produce an ad hoc reordering of the orginal, freed of statement numbers, but otherwise no more readable than a properly indented Fortran program. Brenda proved me wrong. She discovered that every Fortran program has a canonically structured form. Programmers preferred the canonicalized form to what they had originally written. [source](https://web.archive.org/web/20200315093052/https://minnie.tuhs.org/pipermail/tuhs/2020-March/020664.html)

## chap 4 - programming

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

### meeting with nick 14.14

- in philosophy section or in mathematics section, inckude iverson_notation_as_tool_for_thought, beardsley: cognitive gratification under ideal circumstances

Include Gordon Graham - Philosophy of Art and Aesthetics

overall, I should keep in mind that I do not have a technical audience, and I should rework/remove a lot of the examples, and add extensive discussions and rationale as to why those examples are there

For Languages of Art, two things about exemplification vs. implementation:

- different implementations of a concept are necessary but not sufficient for aesthetic judgment. programs exemplify because different implementations exist
- an implementation does not necessarily exemplify: it needs (amongst other things?) CONTEXT.

In architecture, highlight the fact that the _detail_ is the point of interaction between the human and the structure.

In literature, include rousset: forme et signification

Include the fact that aesthetics help compress, and by compressing, people can hold more things in short term memory

- p.218, clarify and enumerate what those 5 requirements of the language of art are.
- p.220, make it clear that `var auth_level` is actually two different tokens, one by the designer, one by the programmer
- listing 35, if i'm talking about OOP use a more oop language (java, python)
- p. 221 when i talk about source code showing properties of an object. objects only have properties through the fact that they are being modelled: source code is a model of the world in which objects have properties. from a philosophical perspective, objects do not always have properties, but the program's concept of the world GIVES IT properties.
- p. 223: match the 5 criteria as they were mentioned in the first bullet point
- p.243: when discussing the god example: again, highlight the ontology of markup: inside and outside. There are differences between conceptual spatialization, layout spatialization (the most obvious that we see), and disk fragmentation. The cartesian view of space is different from the one listing 40 (space in 40 is different from a map).
- Listing 40: make it expliciti that it is presented in such a way that highlights the indented/contained nature of markup (indentation)
- Listing 41: no line numbers and most importantly, NOT CLEAR THAT THIS IS RELATED TO SPATIALITY. might be related to SSD/virtual memory/start addresses, but find a better example. maybe start with python, and indentation, related to semantics.
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
- [ ] literature: acknowledge that narrativity and authorship aren't so much a thing here.
- [ ] literature: include a section about poetry: <https://jacket2.org/commentary/poetry-executable-code> / <https://volltext.net/texte/cornelia-travnicek-code-poetry/>
- [ ] add meles and UNIX
- [ ] literature: include that code is not literature: <https://gigamonkeys.com/code-reading/>
- [ ] mathematics: add a discussion of dijkstra's shortest path algorithm?

### meeting with nick - 28.12.2022

- for each of the aesthetic domains (lit, arch, eng, math), add source code examples to show what is similar, and what is different in source code vs. original domains -> __INTERTWINE!__
- my approach to metaphors should be more systematic: that is, I should look into how metaphors can represent a SYSTEM (for instance, `symlink` is a limitation when it comes to the files and folder metaphor)
- e.g. how does step in a debugger relate to code as terrain, or surface coverage for tests? e.g. how does build and architecture related to code as structure?
- ask "why does the metaphor work?" -> how do they (a) combine (b) extend (c) question?
- look at all the metaphors that fit together (in the lit domain, the arch domain, etc.)
- metaphor of the `macro` (implies scale), of `scope`, of `global`, implies scale as well. `libraries` is also a metaphor that is literary.
- add knuth on dijkstra, simple program, complex proof (knuth, simple, 1990)
- add wallen_form_1990 with his argument that mathematics rely on the fact that sight is our most developed sense

- fictionality: creates a model of the world. while i make the distinction between fiction and non-fiction, i should focus on why it is fiction that acts as a simulation (i.e. jerome pelletier, nelson goodman, marie laure ryan "textual actual worlds") -> essentially show that fiction might be as relevant as non-fiction in source code

- mathematics: Barker, John, 2009, “Mathematical Beauty”, Sztuka i Filozofia, 35: 65–74. (A powerful defence of the claim that mathematical and logical proofs have aesthetic properties.)

- __case studies__
  - choose the case-studies in the way that is the most illustrative of my point. doesn't have to be huge.
  - i should definitely have a more comparative approach: multiple code-bases, with aesthetics which are tied to __LANGUAGE__, __COMMUNITY__ and __PROBLEM__ (question of the idiomatic). this is better than having one case study after another, completely discontinued.
  - find similar problems in different programs, see how they deal with it
  - find specific cases where the cognitive load is high
  - again, __DO IT IN PARALLEL__ as a comparative studies.

_side note: are metaphors related to space because it's hard for us to think in terms of time?_

## chap 2 - understanding

- deal with the characters: ϕ!^x
- make the three levels (C, ASM, bytecode)

- [ ] __psychology__ Peter G. Neumann. Psychosocial implications of computer software development and use: Zen and the art of computing. quote from peter neumann: "these techniques may have enormous value in providing nontrivial assurances that the system might actually do what is expected of it . " - "There are many problems arising in complex systems that must be thoroughly comprehended, but that once understood can be structured in a way that conceptually simplifies the design" > _no
- [ ] __psychology__ add a reference and discussion of Fedorenko (fedorenko_language_2019) in terms of cognitive mapping: "Understanding the interdependencies among different requirements and among the different layers is both an important step for, on one hand, representing it formally, as well as, on the other hand, one of the goals to be grasped by the reader." this coudl be a nice connection with the levels of software
- [ ] __psychology__ : Beyond Program understanding: A Look at Programmer expertise in the Industry, Lucy M. Berlin __also__ [EXPERT PROBLEM SOLVING STRATEGIES FOR ABSTRACT PROGRAM COMPREHENSION](https://dl.acm.org/doi/pdf/10.1145/108844.108863)
- [ ] __psychology__ when mentionning détienne, also mention her framework: _elements_ inside a _context_ are being _perceived_ and _knowledge_ is extracted from it, to be turned into _meaning_
- [ ] __psychology__ _VERY IMPORTANT_: include the methodology from [detienne's analysis of kintsch & von dijk](https://arxiv.org/pdf/cs/0612004.pdf) (check [this one](https://link.springer.com/chapter/10.1007/978-1-4471-0111-6_2) also)
- [ ] __psychology__ at the end, mention the skills needed by a programmer (see below) and this will help us in the followig cognitive tools section to prove that tools indeed help with some of these.
- [ ] __psychology__ add [the initial stages of program comprehension](https://sci-hub.mksa.top/10.1016/s0020-7373(05)80090-2) on __beacons__ (detienne).
- [ ] __psychology__ add [a conceptual model of cognitive complexity](https://www.sciencedirect.com/science/article/pii/095058499591491H) (chunking, tracing)
- [ ] recs from guido, neuropsychologists who might be interested: stanislas dehaene and christophe paillier
- [ ] __knowing-how__ include dexter, embodied aesthetics of code to discuss spatiality, knowing how knowledge and metaphor, as a transition to the concrete means

- [ ] __introduction of means of understanding__ intrinsic characteristics of cs: problem solving / domain modelling / knowledge representation / efficiency in problem solving / abstraction/modularity / novelty/creativity (fuller's taxonomy)

- [ ] __metaphors__, make clear that programmer-facing metaphors are not more complex than user-facing metaphors, or that it's a different kind of cognitive work, but rather that they are referring to a different kind of concept (streams, pipes, volatile memory, etc.)! For instance, mention how there are files/folders for users, and these are manipulated differently on GUI and CLI (CLI -> bash script: "loops", "labels", "wildcards"). these show that the metaphors at work in programming are a combination of different concepts, drawing on different fields of knowledge.
- [ ] __metaphors__ [this](https://www.sciencedirect.com/science/article/abs/pii/0010028581900128) is actually showing that, the more expert a programmer becomes, the less they resort to metaphors, and rather shift to the programming-specific concepts.

- [ ] __tools__ add to means of understanding and IDEs deciding how we write: <https://thorstenball.com/blog/2020/02/04/how-much-do-we-bend-to-the-will-of-our-tools/>

### ide notes

- __overall__ computer-aided software engineering <https://en.wikipedia.org/wiki/Computer-aided_software_engineering> (history is interesting, started with [Lisa Workshop](https://www.applefritter.com/content/lisa-workshop-info) for Apple, IBM was also important, and in the 90s there was a peak of software, [Programmer's Workshop](https://archive.org/details/Macintosh_Programmers_Workshop_missing_735736/mode/2up))
- __good social typology__ <https://academiccommons.columbia.edu/doi/10.7916/D81261G0>
- ___IDE work framed with activity theory__ <https://link.springer.com/article/10.1023/A:1015299228170>
- __important__: [meta study of IDEs](https://www.sciencedirect.com/science/article/pii/S1071581905001102), and [typology](https://dl.acm.org/doi/abs/10.1145/358506.358512)
- __study of tool usage__ <https://ieeexplore.ieee.org/abstract/document/4222616>
- <https://dl.acm.org/doi/abs/10.1145/2047196.2047215> IDEs can help alleviate some of the complexities (connected, parallel computing), but there are still issues. (collaborative code also [here](https://dl.acm.org/doi/abs/10.1145/1384271.1384315))
- <https://ieeexplore.ieee.org/abstract/document/1463097> history of eclipse, comparison with visual studio .NET "It is inexpensive to use and makes it much easier to integrate their tools with one another." (more about eclipse here: <https://ieeexplore.ieee.org/abstract/document/1657944>, how it helps to integrate other tools [here](https://ieeexplore.ieee.org/abstract/document/5386785) and how programmers use it [here](https://dl.acm.org/doi/10.1109/MS.2006.105))
- it looks like eclipse exists since at least 1985
- eclipse quick fix: <https://dl.acm.org/doi/abs/10.1145/2398857.2384665> mentions the complexities of checking complex changes
- things that are important for IDEs (<https://arxiv.org/pdf/1404.6602.pdf>):
  - continuous processing
  - non-linear editing
  - dependency analysis and caching
- <https://dl.acm.org/doi/abs/10.1145/1806799.1806866> concept of __code bubbles__
- "These observations suggest a new model of program understanding grounded in theories of _information foraging_" <https://dl.acm.org/doi/10.1109/TSE.2006.116>
- designing an IDE specifically with OOP in mind, or with [signal processing](https://ieeexplore.ieee.org/abstract/document/287018)
- demo of how this IDEs can help from the 90s <https://dl.acm.org/doi/abs/10.1145/64140.65020>
- more history for the MESA programming environment: <https://dl.acm.org/doi/abs/10.1145/17919.806843>
- __EMACS__ documentation: <https://chrismennie.ca/EMACS-Conceptual-Architecture.pdf>

- [x] __types of complexity__ méles: temps et activité selon UNIX
- [x] __levels of software__ in the hardware existence of software, talk about memory management
- [x] __introduction of software complexity__ wirth: "the computer interprets, i wanted to understand" in beauty is our business, drawing raster lines
- [x] __introduction to software complexity__ in the discussion of what understanding means, at some point, provide the down to earth definition from: [Towards a theory of the comprehension of computer programs](https://www.sciencedirect.com/science/article/abs/pii/S0020737383800315), by Ruven Brooks
- [x] __introduction__ add a quote from Ershov, 1972 "We understand what we are able to program."
- [x] __levels of software__ If you want to exhibit the difference between a (reasonably) high-level language, assembly, and machine code, you could contrive an example yourself by writing something very short in C and compiling it in gcc. The GNU Assembler, as, is what is used as part of the gcc toolchain, so if you were to write the corresponding assembly and confirm that it assembles to the same machine code ... you have your example. And you might do it in a half-page of C, a similar amount of assembly, and 32 bytes of machine code.
- [x] __conclusion of formal and contextual__ include elgin's paper: from knowledge to understanding, in order to buttress our definition of understanding.

## chap 1 - ideals

- [ ]  add a subsubsec on verbosity?

- [ ] add [pressman - software engineering: a practicioner's approach](../readings/notes/pressman_software_engineering_practicioners_approach.md) in the part about software developers

## introduction

done

## general

- [ ] deal with frames and page breaks on minted; <https://tex.stackexchange.com/questions/433192/breaking-pages-in-minted-package>