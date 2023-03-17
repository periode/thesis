# todo

- deal with inline quotes properly (using the `dirtytalk` package)

add this to examples, from the rust parser example i forked, as an example of how people assign quality to proper scale naming:

```rust
// Level-change Operator (what a stupid name)
operator_level = { operator_exp | operator_subscript |
                   operator_exp ~ operator_subscript |
                   operator_subscript ~ operator_exp
}
```

include somehow:

```text
struct

Brenda Baker undertook her Fortan-to-Ratfor converter against the advice of her department head--me. I thought it would likely produce an ad hoc reordering of the orginal, freed of statement numbers, but otherwise no more readable than a properly indented Fortran program. Brenda proved me wrong. She discovered that every Fortran program has a canonically structured form. Programmers preferred the canonicalized form to what they had originally written.
https://web.archive.org/web/20200315093052/https://minnie.tuhs.org/pipermail/tuhs/2020-March/020664.html
```

## meeting with nick - 28.12.2022

- for each of the aesthetic domains (lit, arch, eng, math), add source code examples to show what is similar, and what is different in source code vs. original domains -> __INTERTWINE!__
- my approach to metaphors should be more systematic: that is, I should look into how metaphors can represent a SYSTEM (for instance, `symlink` is a limitation when it comes to the files and folder metaphor)
  - e.g. how does step in a debugger relate to code as terrain, or surface coverage for tests? e.g. how does build and architecture related to code as structure?
  - ask "why does the metaphor work?" -> how do they (a) combine (b) extend (c) question?
  - look at all the metaphors that fit together (in the lit domain, the arch domain, etc.)
  - metaphor of the `macro` (implies scale), of `scope`, of `global`, implies scale as well. `libraries` is also a metaphor that is literary.

- fictionality: creates a model of the world. while i make the distinction between fiction and non-fiction, i should focus on why it is fiction that acts as a simulation (i.e. jerome pelletier, nelson goodman, marie laure ryan "textual actual worlds") -> essentially show that fiction might be as relevant as non-fiction in source code

- __case studies__
  - choose the case-studies in the way that is the most illustrative of my point. doesn't have to be huge.
  - i should definitely have a more comparative approach: multiple code-bases, with aesthetics which are tied to __LANGUAGE__, __COMMUNITY__ and __PROBLEM__ (question of the idiomatic). this is better than having one case study after another, completely discontinued.
  - find similar problems in different programs, see how they deal with it
  - find specific cases where the cognitive load is high
  - again, __DO IT IN PARALLEL__ as a comparative studies.

_side note: are metaphors related to space because it's hard for us to think in terms of time?_

## chap 4

- should it be about programming languages? or about programming semantics? or wait until i know really what it is about, and why it;s needed?
- allamanis, using ML for code generation and analysis, and mattt (as we may code) highlights the need for such a thing (quoting: What if, instead of lowering source code down for the purpose of execution, we raised source code for the purpose of understanding?)
- include \citep{dexter_embodied_2011}
- [ ] literature: acknowledge that narrativity and authorship aren't so much a thing here.
- [ ] literature: include a section about poetry: <https://jacket2.org/commentary/poetry-executable-code> / <https://volltext.net/texte/cornelia-travnicek-code-poetry/>
- [ ] literature: include that code is not literature: <https://gigamonkeys.com/code-reading/>

## chap 3

- [ ] include elgin's paper: from knowledge to understanding, in order to buttress our definition of understanding.
- [ ] make it clear that we're focusing on two sorts of knowledge: formal, or contextual.
- [ ] in the hardware existence of software, talk about memory management
- [ ] in the discussion of what understanding means, at some point, provide the down to earth definition from: [Towards a theory of the comprehension of computer programs](https://www.sciencedirect.com/science/article/abs/pii/S0020737383800315), by Ruven Brooks
- [ ] [this](https://www.sciencedirect.com/science/article/abs/pii/0010028581900128) is actually showing that, the more expert a programmer becomes, the less they resort to metaphors, and rather shift to the programming-specific concepts.
- [ ] add [the initial stages of program comprehension](https://sci-hub.mksa.top/10.1016/s0020-7373(05)80090-2) on __beacons__ (detienne).
- [ ] add [a conceptual model of cognitive complexity](https://www.sciencedirect.com/science/article/pii/095058499591491H) (chunking, tracing)
- [ ] add to the programmer expertise <https://books.google.de/books?hl=en&lr=&id=rMmxq8q0CGYC&oi=fnd&pg=PA8-IA6&dq=L.M.+Berlin>,+%E2%80%9CBeyond+Program+Understanding,%E2%80%9D+A+Look+at+Programming+Expertise+in+Industry,+Empirical+Studies+of+Programmers,+Fifth+Workshop,+pp.+6-25,+1993.&ots=gO-IgzpVOE&sig=ozpfd-DluQ3k4IE7TBnCix0TT7I&redir_esc=y#v=onepage&q&f=false __also__ <http://scholar.google.com/scholar?hl=en&q=J.+Koenemann+and+S.P.+Robertson%2C+%E2%80%9CExpert+Problem+Solving+Strategies+for+Program+Comprehension%2C%E2%80%9D+Proc.+Conf.+Human+Factors+and+Computing+Systems%2C+pp.+125-130%2C+1991>.
- [ ] at the end of the psychology section, mention the skills needed by a programmer (see below) and this will help us in the followig cognitive tools section to prove that tools indeed help with some of these.
- [ ] in terms of metaphors, make clear that programmer-facing metaphors are not more complex than user-facing metaphors, or that it's a different kind of cognitive work, but rather that they are referring to a different kind of concept (streams, pipes, volatile memory, etc.)! For instance, mention how there are files/folders for users, and these are manipulated differently on GUI and CLI (CLI -> bash script: "loops", "labels", "wildcards"). these show that the metaphors at work in programming are a combination of different concepts, drawing on different fields of knowledge.
- [ ] add to means of understanding and IDEs deciding how we write: <https://thorstenball.com/blog/2020/02/04/how-much-do-we-bend-to-the-will-of-our-tools/>

Also, Fuller's taxonomy, derived from Bloom's taxonomy. It is represented by two semi-independent dimensions, Producing and Interpreting. Each dimension defines hierarchical linear levels where a deeper level requires the competencies from the previous ones. Producing has three levels (None, Apply, and Create) and Interpreting has four (Remember, Understand,  Analyze, and Evaluate). \citep{fuller_developing_2007}

intrinsic characteristics of cs:

- problem solving
- domain modelling
- knowledge representation
- efficiency in problem solving
- abstraction/modularity
- novelty/creativity

## chap 2

- [ ] add marielle macé to a bit of conclusion on the styles of programmers (maybe once the part about simmel is extracted from the craft)
- [ ] add a reference to MOONBIT in the ideals or in the lit review

## chap 1

- [ ] refine our definition of aesthetics by adding the fact that `it enables an  evaluative appraisal of objects`
- [ ] add this section to the introduction, making sure i frame aesthetic vs. beautiful vs. artistic

> There is also a broad definition of what aesthetic is, and is different from beautiful, which also elicits an emotional response, or gut feeling, and can be implied in definitions of what is artistic. so i don't talk about beauty, but about code which exhbitis positive aesthetic properties—finding beautiful code in an art history sense has not been achieved.

- [ ] add this in the literature review: <https://lectoraatchangemanagement.files.wordpress.com/2020/01/beauty_in_code.pdf> specifically mentioning that there are two kinds of aesthetics (low-level, clear ones, and high-level, more diffuse, subjective, beautiful)

- [ ] add this to the software architecture section: books about open source architecture, edited by greg wilson
<https://aosabook.org/en/index.html> -<https://aosabook.org/en/zeromq.html>

## structure notes

- [ ] And then spread out in the ideals to make each section less heavy

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
  - - continuous processing
  - - non-linear editing
  - - dependency analysis and caching
- <https://dl.acm.org/doi/abs/10.1145/1806799.1806866> concept of __code bubbles__
- "These observations suggest a new model of program understanding grounded in theories of _information foraging_" <https://dl.acm.org/doi/10.1109/TSE.2006.116>
- designing an IDE specifically with OOP in mind, or with [signal processing](https://ieeexplore.ieee.org/abstract/document/287018)
- demo of how this IDEs can help from the 90s <https://dl.acm.org/doi/abs/10.1145/64140.65020>
- more history for the MESA programming environment: <https://dl.acm.org/doi/abs/10.1145/17919.806843>
- __EMACS__ documentation: <https://chrismennie.ca/EMACS-Conceptual-Architecture.pdf>

## meeting with nick 4.11.2022

- is it clear why i'm addressing definitions of understanding first, and then the actual object of understanding?
- is it more about understanding, or knowledge communication/knowledge reception?
- in general, i'm a bit unsure about how clear my approach to understanding is. i know it's necessary to clarify what i mean, and the intent is to provide background for this "dual nature" of software.

## meeting with nick

- [ ] pare down!
  - - [ ] in the listings, extend the caption to show the relevance of the snippet (e.g. for listing 8, neither is said about APL or about Game of Life: how should readers know this is relevant?)
  - - [ ] for stats comparing different software (windows2000, wp, kirby), use a chart to make the point much quicker
  - - [ ] justify the comparison between win2000 and kirby (differences in size, date of creation)
  - - [ ] also explain a bit more fast sqrt (greg walsh must have had a deep knowledge of ieee floating points standards)
  - - [ ] fig. 10: original is color coded, but also too hard to comprehend. [magmarize](https://demozoo.org/productions/305589/) would be a better example
  - - [ ] move listing 10 to understanding computers
  - - [ ] one liner: monostiche
  - - [ ] since the chapter is too long, paraphrase code, rather than quote it
  - - [ ] listing #2, not style but voices
  - - [ ] black perl is still in old mode
  - - [ ] explain listing 13
- [ ] table of listings: this is what the work is about (variety, meaningful, captioned; the caption is also for me cause it shows i am able to express concisely why the example is there)

## chap 2

- [ ] include the hacker dictionary definition of elegance <http://www.catb.org/~esr/jargon/html/E/elegant.html>

## chap 1

- [ ] make the connection between abstract code beauty (the doxa) and the mathematical sublime of Kant
- [ ] a sentence or two on a fundamental connection between architecture and programming, related to how architecture must connect form and function as other arts are not required to do
- [ ] If you want to exhibit the difference between a (reasonably) high-level language, assembly, and machine code, you could contrive an example yourself by writing something very short in C and compiling it in gcc. The GNU Assembler, as, is what is used as part of the gcc toolchain, so if you were to write the corresponding assembly and confirm that it assembles to the same machine code ... you have your example. And you might do it in a half-page of C, a similar amount of assembly, and 32 bytes of machine code.
- [ ] make a __clear__ distinction between `source code` (the medium) and `program text` (the instance)

## general

- [ ] add all the refernces in the intro footnotes
- [ ] add [pressman - software engineering: a practicioner's approach](../readings/notes/pressman_software_engineering_practicioners_approach.md)
- [x] rewrite my definition of aesthetics to include more the aesthetics of everyday life?
  - [x] drawing from mckenzie, rewrite his part to include the fact that he puts a lot of lines of code in his book, but that it's still a mostly social/anthropological interpretation of said code
  - [x] specify that the term _software engineering_ appeared in 1968 at a conference [[wirth_history_software_engineering]]. but actually it's fuzzy, some people say it was around 1967 [src](https://www.princeton.edu/~hos/mike/articles/hcht.pdf)
- [x] ideals
  - [x] add the dope case study <https://queue.acm.org/detail.cfm?id=1039535> also this <http://denninginstitute.com/pjd/GP/gp_summary_toplevel.html>
  - [x] re read hacker examples part to check for spoilers
  - [x] add research software engineers to data scientists <https://www.nature.com/articles/d41586-022-01516-2>
  - [x] tone down on methodology?
  - [x] add stats about corpus after methodology.
  - [x] add section on leslie vaillant in the elegance section <https://dl.acm.org/doi/abs/10.1145/1953122.1953131>
  - [x] add knuth details on elegance (see [notes](../readings/notes/fuller_software_elegance.md))
  - [x] add section on robin hill on elegance <https://cacm.acm.org/blogs/blog-cacm/208547-what-makes-a-program-elegant/fulltext>
  - [x] include some further discussion of programming based on [hapoc 21 presentation](https://hapoc2021.sciencesconf.org/data/pages/_Toscano_Intentionalities_of_code_presentation.pdf)
  - [ ] add a bit more meat to the section on scientific beauty
  - [ ] deal with frames and page breaks on minted; <https://tex.stackexchange.com/questions/433192/breaking-pages-in-minted-package>
  - [x] add "hacking perl" and live code in the artists section <https://www.perl.com/pub/2004/08/31/livecode.html/>
  - [x] everytime i quote SO, add the specifics of the survey details

~~look into the pdf "program text, style, laber" by brian lennon to address comments in microsoft windows source code~~

~~yullil - code art brutalism refers the _HACKMEM_ document from 1972 MIT, related to architecture.~~

~~communautés épistémiques et communautés de pratique (Cohendet et al., 2001) -> Cohendet, Patrick, Creplet, Frederic & Dupouet, Olivier. « Organisational innovation, communities of practice and epistemic communities : the case of Linux ». In Economics with heterogeneous interacting agents~~
