# The Aesthetics of Source Code - Pierre Depaz

## Further definition of topic and future outline of work

### 10.06.2020

#### main report

##### catch-up

At the beginnning of the Spring semester 2020, I had established a clear research direction, directed at what role aesthetics have in the process of understanding source code. While the definition of aesthetics upon which this research relies is based on *aesthetics as a physical manifestation which can be grasped by the senses*. The limitation of this starting point is justified mainly by the object of this study. By approaching source code as an object (or, rather, as multiplicity of objects, "texts" written and read), rather than as a concept, I therefore put its graspable aspects in the foreground. While the social, cultural, intellectual and emotional components are still significant in the appreciation of beauty in source code, the comparative lack of close examination of *how* code is written is the justification for such a definition of aesthetics.

What still needed to be defined, however, was the meaning of "understanding". The work conducted this semester has therefore focused on the gathering and examination of the corpus of source code texts, along with the accompanying explanations, justifications and overall meta-texts, in order to find out how are references to "beauty" and "understanding" made. Amongst the vast majority of the corpus elements, practicioners tend to present or discuss a piece of source code which they consider "beatiful", "aesthetically pleasing", and accompany this presentation with justifications about *how* to make a piece of code beautiful and/or *why* make a piece of code beautiful, and it is these discourses that are used to elaborate on what source code aesthetics look like *in practice*, as well as what kind of role they play in the life of source code text.
This process has also led to the constitution of an initial set of aesthetic properties that are repeatedly highlighted by a certain sub-set of practictioners. In effect, the group of those who write and read source code is far from being homogeneous, and can actually be grouped into at least three distinct categories: computer science, computational science and software development (Brian Hayes [^1]). While additional sources establish their own distinctions[^2][^3][^4], the multiplicity of contexts within which code is written leaves litte doubt. Leaving aside a thorough defintion of each of these, I've identified five main categories of individuals writing and reading source code, which I group under the umbrella term *code practicioners*. These categories include: computer scientist, software engineer, hacker, amateur/student and artist. These categories intend to provide heuristics, rather than strict definitions, and each of these categories can overlap within one individual or group of individuals.
The sub-sets of practicioners examined so far include software engineers and artists—and thanks to the aforementioned overlap of categories, I am making the hypothesis that the initial findings made through the comparison of how aesthetics are conceived of by engineers and artists will be reinforced and further qualified during the examination of how the remaining categories (scientists, hackers, amateurs).
This approach also allows me to requalify our definition of aesthetics: building on Rancière and Goodman, aesthetics can also be understood as a relationship to the human. In the midst of this tension between individual and group, I intend to leave room for individual aesthetics, and group aesthetics.

##### established software engineering practices

  - explain why this is: most important aspect of writing in code so far
    - programmers have been saying, both implicitly and explicitly, that aesthetics is *for* something (beautiful code: "beauty that you can *use*)
    - where that really shines though is also in the "unexpected" in saying you care about one thing, but you also display something else (i.e. the phenomenon of "coming across")
    - "aesthetics alleviate cognitive pain" (from: the art of readable code)
  
##### sum up those aesthetic standards

  - **structures**
    - *conceptual distancing* everything is close to each other in a semantic way (having variables together, then functions together). there seems to be a first, superficial level of beautiful code as beautifully laid out code (it is an indicator, at least, somehow a requirement? but only for larger code bases), but then the deeper beauty is when that layout actually reflects the conceptual structure of the code because, before the code, there is the data.
      - regarding layout vs. structure: it's an *indicator* but not a *proof*.
    - *clean* structure is a structure in which only one intent can and should be perceived. all the statements relate to only one task (but they relate *to*, which implies transitivity) **how does that conflict with paloque berges' double-meaning?**
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

  - knowing **how**, knowing **what** and knowing **why**
  - there could actually be multiple kinds of writing, which can all differ and relate to each other (craft vs. engineering vs. literary)

##### highlighted code's uncertainty as a literary object, and rather as a crafting resource

- code never lies (craft), comments do (literature)

##### next steps

- establish textbook aesthetics (relation to mathematics)
- leave room for language aesthetics
- esolangs and code poetry additional
- hardware aesthetics?
- the difference between the act of reading and the act of writing
- "experientialism" / experiential realism -> the use of metaphors to make sense of the world. **to what extent is a programming language, a piece of source code, a metaphor?**

these understandings could be the interplay between theoretical, craft and literature

[^1]:
https://www.americanscientist.org/article/cultures-of-code

[^2]:
https://josephg.com/blog/3-tribes/

[^3]:
https://blog.codinghorror.com/the-two-types-of-programmers/

[^4]:
https://mkdev.me/en/posts/the-three-types-of-programmers

---

#### keep in mind

giving up the understanding in order to understand better (cognitive noise is related to the level of skill)
a problem of a lot of research is **inventing a new language without inventing new ideas**

#### questions that i need help with

- am i reinventing the wheel at any point?
  - e.g. surface vs. depth, syntax as beauty for the unexperienced and semantics for the experienced

**words as problem solvers**
(in reference to the book pat found, where the author states that programming is treated as a management problem, and not a mathematical one: but in both cases, we're still talking about source code (and to what extent is it always the "same" source code?), a unique object/practice/paradigm which enables us to solve problems (and now, to what extent are these problems dependent on source code? or is it because source code (as computation) can solve theoretically any problem? and is that beautiful in itself?))

### notes from xcoax

while it's nice to have an overview of humanities at the beginning, it would be interesting to have reconciliation/reconsideration of those views by the end of this paper

- notion of beauty in non-artistic contexts
  - perhaps there is an underlying common process? (degree of complexitiy/satisfaction? to be happy about it?)
  - confusion vs. beauty **YES** (almost presupposed by this thesis)
  - ~~brain scans?~~ **NO** (but programmer psychology yes)
  - ~~address the node-based programming environments?~~ **NO**

relationship to art? **yes, but tangential question**
question to the understanding of beauty? **yes, but tangential question**

~~apparent symmetry vs. assymetry of reading vs. writing~~ taken into account, see above

information *is* value, or information *has* value? (just because you have it, or because you know how to use it?)