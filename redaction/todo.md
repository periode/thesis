# todo

## format

- deal with inline quotes properly (using the `dirtytalk` package)
- add index
- put names of sections in the \ref{} part
- put "listing" as a a prefix for all \ref{} (maybe just global search and replace)

## conclusion

- [ ] add a footnote about Brenda : Brenda Baker undertook her Fortan-to-Ratfor converter against the advice of her department head--me. I thought it would likely produce an ad hoc reordering of the orginal, freed of statement numbers, but otherwise no more readable than a properly indented Fortran program. Brenda proved me wrong. She discovered that every Fortran program has a canonically structured form. Programmers preferred the canonicalized form to what they had originally written. [source](https://web.archive.org/web/20200315093052/https://minnie.tuhs.org/pipermail/tuhs/2020-March/020664.html)
- [ ] add a note concluding on code generation via LLMs
- [x] include a note on Pierre Levy: his analysis of both architect and writer was quite on point

## chap 4 - programming

### nick notes

- rewrite intro of chap once the whole thing is re-read -> semantic compression and spatial navigation, expression and execution

- in the _scales_ part, add that the structure/syntax/vocab framework is the same as dijkstra in "the humble programmer", quoted in <http://digitalhumanities.org/dhq/vol/17/2/000698/000698.html>

- on esolangs, add <http://digitalhumanities.org/dhq/vol/17/2/000698/000698.html>

- __case studies__
  - i should definitely have a more comparative approach: multiple code-bases, with aesthetics which are tied to __LANGUAGE__, __COMMUNITY__ and __PROBLEM__ (question of the idiomatic). this is better than having one case study after another, completely discontinued.
  - find similar problems in different programs, see how they deal with it
  - find specific cases where the cognitive load is high
  - again, __DO IT IN PARALLEL__ as a comparative studies.

### programming languages

### styles

- [ ] add to the idiosyncracies this index of language design <http://rigaux.org/language-study/syntax-across-languages/>
- [ ] gefen wants more on the style part, i agree

### functions

- in the case of list comprehension in Python, it is both a technical and social environment
- [ ] re-quote hayles a\nd her regime of computation (surface, depth, etc.) when i also talk about paloque berges et. al.
- [ ] at this point i need to synthesize. rather work on _connections and disconnections_ between the social and the functional?

## chap 3 - beauty

### aesthetics

- mention that knowledge influences how we perceive things (brandy, mathematical beauty)
- from sy brand talk, gabrielle starr, feeling beauty: the neuroaesthetics of the experience: "Aesthetic response enables the comparison and integration of novel kinds of reward in a process that opens possibilities for new knowledge, or new ways of negotiating the world. The perceptions, images, and emotions we find through our experience of poetry, painting and music put ideas and events into relation with one another that would rarely, if ever, be possible outside the arts."

### literature

- In literature, include rousset: forme et signification
- remove god and xml example?

### architecture

- add more code examples (check the architecture of open source applications? redis?)

### mathematics

- mathematics: add a discussion of dijkstra's shortest path algorithm?
- add knuth on dijkstra, simple program, complex proof (knuth, simple, 1990)
- write a section conclusion for mathematics altogether

## chap 2 - understanding

- [ ] recs from guido, neuropsychologists who might be interested: stanislas dehaene and christophe paillier
- [ ] __tools__ add to means of understanding and IDEs deciding how we write: <https://thorstenball.com/blog/2020/02/04/how-much-do-we-bend-to-the-will-of-our-tools/>
- [ ] __tools__ including a discussion of how does step in a debugger relate to code as terrain, or surface coverage for tests? e.g. how does build and architecture related to code as structure?
- [ ] include the concept of interface by matthew kirschenbaum <https://www.researchgate.net/profile/Nancy-Ide/publication/229666751_Preparation_and_Analysis_of_Linguistic_Corpora/links/5a75ec770f7e9b41dbd04d97/Preparation-and-Analysis-of-Linguistic-Corpora.pdf#page=550>
- [ ] __programmer metaphors__ my approach to metaphors should be more systematic: that is, I should look into how metaphors can represent a SYSTEM (for instance, `symlink` is a limitation when it comes to the files and folder metaphor)
- [ ] __programmer metaphors__ metaphor of the `macro` (implies scale), of `scope`, of `global`, implies scale as well. `libraries` is also a metaphor that is literary.
- [ ] __programmer metaphors__ refer to master/slave as a problematic one

## chap 1 - ideals

- [ ]  add a subsubsec on verbosity?
- [x] harmonize subsubsection (Smells -> smelly?)
- [x] include vadim notes
- [ ] add [pressman - software engineering: a practicioner's approach](../readings/notes/pressman_software_engineering_practicioners_approach.md) in the part about software developers
- [ ] justify code poems: I need to be able to articulate their relevance when looking at different domains. they're not just related to literature, but also architecture (follies, pavillions) or math (pure math), while other source code (linux kernel) might also be a sort of literature (legal code). but also make it explicit that i talk about the ones that can run, not the code poems that are not executable

## introduction

- [x] explain that beauty might be a metaphor itself of "good" (value judgments, etc.)
- [x] [nico notes](https://docs.google.com/document/d/14yxjxl2e6dScNcVElWVn9gSfgtIqVzFa2wAOismtHZ4/edit)
