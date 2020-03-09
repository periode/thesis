# clean code
## robert c. martin
### prentice hall, pearson education, 2008

the author is one of the main creators of the Agile Manifesto, and a leading figure in professional software development. The book is written with `JAVA`.

software architecture can draw its parallels from japanese 5S:
- seiri ( +- naming, details)
- seiton ( +- putting things where they belong)
- seiso ( +- clean)
- seiketsu ( +- standardization, consistency)
- shutsuke ( +- self-discipline (opposite of emotional programming?))

"we had some back-of-the-enveloped findings indicating that suggested that consistent indentation style was one of the most statistically significant indicators of low-bug density"

style distinguishes excellence from competence, and it is beauty, but *what kind of beauty*? is clean code beautiful code? what is the step to beauty? beauty could/should also be seen as some sort of efficiency. something beautiful is something that is *efficient* at communicating sth (sth = a task, a concept)


why does bad code even exist? lack of experience? external constraints? lack of knowledge (is that the same as lack of experience?)


#### definitions by authors

- bjarne soustrup (c++ creator): "clean code does one thing well" + clean code is efficient, **and pays attention to details**
- grady brooch: "*crisp abstraction*", clean code should be like a fiction, with setting up tensions and clearly solving them into a "a-ha!" moment. **code should be matter of fact rather than speculative** (that's opposed to all the software art field)
- dave thomas: code should be read by others, have minimal dependencies and APIs, and should be literate (cf. kunth - literate programming)
- michael feathers: code that has been cared for: SIMPLE AND ORDERLY
- ron jeffries: no duplication. minimized (and not minified). **expressiveness goes beyond words**
- ward cunningham: "you can call it beautiful code when it looks like the language was made for the problem" > it is not the language that makes the program appear simple, but the programmer that makes the language appear simple


the `@author` field of a Javadoc leaves no doubt as to who is doing what act (writing, for a group of readers)

---

**expressiveness goes beyond words**

---


#### naming

- they should reveal intent
- they should not add **NOISE** (refer to shannon as noise + semantics)
- pronounceable names (human-oriented, which then can enmable conversations)
- do not try to please the compiler (aka change only one letter in a var name to allow for compilation -but there is also clever code, which takes into account the compiler, cf. the perl poem in which the mythical programmer knew the compiler better, except now we don't know compilers so much anymore)
- no artificial encoding (e.g. Hungarian Notation)
- say what you mean, mean what you say
- lexicon can come from the *problem-domain* (real world) or *solution domain* (software engineering world)
- pay attention to context: place variables in the correct context, and if there isn't create such a context (comments)

names require a shared contextual background, rather than program-linguistic background.

#### functions

- do not mix multiple levels of abstraction
- make functions small (verbatim: in a beautiful program, "each told a story")
- functions should have at best 0 arguments. maybe 1, perhaps 2, rarely more.
- kinda disagree about flags in functions (he says we should have no flags and separate functions. how is this not a version of cognitive overload? how are flags not a way to abstraction?)


coupling: degree of dependence between software modules (cna be temporal)

"the art of programming is the art of language design" - to what extent is literature language design?
"the real goal is to tell the story of the system"


---

jump to the conclusion chapter

---

#### heuristics for bad code

- comments:
- - inappropriate information
- - obsolete comment
- - redundant comment
- - poorly written
- - commented-out code (no draft in craft!)

- environment
- - building happens in more than one step
- - testing requires more than one step

- functions
- - too many arguments
- - no output arguments (he says that, if a function should change the state of sth, it should be called on the object it is change >> THAT IS HIGHLY `JAVA` SPECIFIC)
- - flag argument (mixed feelings)
- - dead function (never called)

- general
- - multiple languages per file (no HTML, XML, etc. snippets)
- - obvious behaviour is not implemented (**that's a tricky one, what constitutes an obvious behaviour?**)
- - incorrect behaviour at boundaries
- - overriden safeties
- - duplication (DRY)
- - wrong levels of abstraction
- - base classes depending on their derivatives (`JAVA` specific)
- - too much information
- - dead code
- - vertical separation (geographic distance, loin des yeux, loin du coeur)
- - inconsistency
- - clutter (related to dead code, commented out code) **the word _dead_ is interesting in light of alexander's patterns as life-giving**
- - feature-envy (trying to do more, access more than one's own class `JAVA` specific)
- - selector arguments (essentially flags, he doesn't like flags because they're hard to show at the next abstraction layer -- how do you make it obvious what the flag is when you don't have access to the internal name that the function gives it to?)
- - obscured intent (bad naming)
- - misplaced responsibility (abide by the principle of *least surprise*)
- - inappropriate static (this is `java` specific, but inappropriate keywords are just a subclass of noise, between naming and dead code, aka manage expectations)
- - understanding the algorith (i.e. the sort of *conceptual* data structure)
- - prefer polymorphism to if/else (also `java`)
- - you should follow conventions (which is funny because the book itself is not following the convention it started with (i.e. list the aspects of bad code), cause now it transitioned to listing aspects of good code)
- - be precise
- - favor structure (consistency) over convention
- - encapsulate conditionals (i.e. have a function that checks for those conditions and return true or false)
- - avoid negative conditionals (hinders readability)
- - functions should do one thing
- - if forced to do some temporal couplings, make them obivous and MARK THEIR DEPENDENCIES BY PASSING EACH AS THE ARGUMENT TO OTHERS
- - encapsulate boundary conditions (which then allows you to make them easier to follow)
- - functions should descend only one level of abstraction
- - keep configurable data at high level
- - make sure the modules don't know too much about the overall architecture (soft architecture. hard writing for soft reading)

- java specific (implying some of those before weren't)
- - avoid long lists by using wildcards
- - don't inherit constants
- - use constants instead of enums (this is a time-sensitive comment)

- name
- - be descriptive/unambiguous (re-evaluate as you write) (describe side-effects)
- - choose names at the appropriate level of abstraction
- - use standard nomenclature if possible
- - the length of a name can be proportional to the size of its scope
- - avoid encodings (no hungarian notation)

- tests (this is more structure-oriented)