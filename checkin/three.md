# The Aesthetics of Source Code - Pierre Depaz

## Further definition of topic and future outline of work

### 10.06.2020

#### main report

##### established software engineering practices

  - explain why this is: most important aspect of writing in code so far
    - programmers have been saying, both implicitly and explicitly, that aesthetics is *for* something
    - where that really shines though is also in the "unexpected" in saying you care about one thing, but you also display something else (i.e. the phenomenon of "coming across")
    - "aesthetics alleviate cognitive pain" (from: the art of readable code)
  
##### sum up those aesthetic standards

  - **structures**
    - *conceptual distancing* everything is close to each other in a semantic way (having variables together, then functions together). there seems to be a first, superficial level of beautiful code as beautifully laid out code (it is an indicator, at least, somehow a requirement? but only for larger code bases), but then the deeper beauty is when that layout actually reflects the conceptual structure of the code because, before the code, there is the data.
      - regarding layout vs. structure: it's an *indicator* but not a *proof*.
    - *clean* structure is a structure in which only one intent can and should be perceived. all the statements relate to only one task (but they relate *to*, which implies transitivity)
    - related to the above: minimalism "the code that does the job while using the least amount of different ideas". **restraint** (re: python code guide)
    - separation of concerns
    - code symmetry: using the same constructs for the same tasks
    - linear relationship between the number of lines of code and the amount to be understood (the existence of this + one liners being a thing considered beautiful proves that there are mulitple kinds of beauty)
    - SOLID
      - single responsibility of classes
      - open/close principle
      - liskov substitution
      - interface segregation
      - dependency inversion
    - blank space to show important separate steps (like senett's decisive moment). that, at least has something in common with literatur insofar as they're **paragraphs**
    - when not enforced by the language, *stepdown rule of function declaration* (always have the more general functions at the top, the more specific at the bottom)
    - no input/output rule: everything that happens in locally coherent
  
  - **vocabularies**
    - nouns as variables, verbs as functions, and both replace comments (comments are only acceptable for the "why" of programming logic)
      - variables should answer *why* it exists, *what* it does and *how* it is used (not certain that all of these can be attained at the same time)
    - ways of calling functions *on* objects or calling functions *from* objects (aka no output arguments)
    - requirement of idiomatic usage
    - pronounceable names
    - one word per concept (1:1 relationship), don't try to do multiple things at the same time, unless this is exactly what you would want to do
    - functions don't have too many arguments (< 3)
    - no magic numbers
    - differentiate between *meaning/intention* of a variable and *value* of a variable
     - variable name length can hint at the importance/hierarchy of the variable
     - some vocab in languages is haram (`unless` in perl, `*` in C, etc.)

  - **syntax**
    - cross-referencing language knowledge is a tricky subject. using the idiomaticity of one language into another one (using ideas from C++ into C code is good, but writing ruby the way you write java is not good)
    - do not reference variable name in comments (redundancy, *DRY*)
    - regarding comments, there are no beautiful comments, apparently. does that mean that *ornament is crime*
    - all caps is constant (bringing heuristics from C to more modern languages)
    - natural language flows (ruby can shine at this, because ruby has multiple ways of doing it: `if people.include? person` vs. `if person.in? people`)
    - as similar as possible as natural language while retaining as much as possible the CLARITY of code
    - eliminate nesting (one line instead of three)
    - line alignment/indentation


##### shifted from singular understanding to plural understandings

  - there could actually be multiple kinds of writing, which can all differ and relate to each other (cratt vs. engineering vs. literary)

##### highlighted code's uncertainty as a literary object, and rather as a crafting resource

- code never lies (craft), comments do (literature)

##### next steps

- establish textbook aesthetics (relation to mathematics)
- leave room for language aesthetics
- esolangs and code poetry additional
- hardware aesthetic?

these understandings could be the interplay between theoretical, craft and literature

---

#### keep in mind

giving up the understanding in order to understand better

#### questions that i need help with

- am i reinventing the wheel at any point?
  - e.g. surface vs. depth, syntax as beauty for the unexperienced and semantics for the experienced


**words as problem solvers**
(in reference to the book pat found, where the author states that programming is treated as a management problem, and not a mathematical one: but in both cases, we're still talking about source code (and to what extent is it always the "same" source code?), a unique object/practice/paradigm which enables us to solve problems (and now, to what extent are these problems dependent on source code? or is it because source code (as computation) can solve theoretically any problem? and is that beautiful in itself?))