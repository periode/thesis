# software engineering: a practicioner's approach
## roger s. pressman
### mcgraw-hill, 1997, 4th ed.


a very business approach:

- types of software applications. should they be defined? am i encompassing all software applications? (system, real-time, business, engineering & scientific, embedded, personal, AI)

p.10: *Software is (1) instructions (computer programs) that when executed provide desired function and performance, (2) data structure that enables the program to adequately manipulate information and (3) documents that describe the operation and use of the program*

software quality is *"conformance to explicitly stated functional and performance requirements, explicitly documented development standards, and implicit characteristics that are expected of all professionally developed software"*
- (EXPLICIT) REQUIREMENTS is the basis of quality measurements (i.e. what should the software **do**?) ------ what should it do?
- STANDARDS which define the criteria according to which the software should be developed ------- how should it do it?
- (IMPLICIT) REQUIREMENTS ------- what should it (obviously) include?

---


i like the idea of implicit vs. explicit requirements

---

p. 13:
standard is *reusability*, but how does it relate to source code?

p. 188:
standards are *uniform*, or at least *predictable*, in order to make work more *manageable*.


there is a thing called **software science**, developed by a guy called [Halstead](https://en.wikipedia.org/wiki/Halstead_complexity_measures), which is highly (exclusively) quantitative -> "intriguing" set of metrics at the source code level

operator: built-in names
operands: custom names (knuth's identifiers)

software isn't just software as a compiled binary, it's a *software configuration* (in the author's words), which includes programs, documents, and data. which of those can be included in source code?


- also what's the difference between **good** and **beautiful**?  
- does the *"design process"* in software count as source code? or is it more like poetics. it's more like poetics. or is it another kind of higher-higher-level language?
amongst other requirements, he says that design should be:
- **minimizing the intellectual distance between the software and the problem as it exists in the real world** (that's an interesting approach)
- it should also exhibit **uniformity** and **integration**.
- should be structured to **accommodate change**.
- should **handle errors gracefully/gently**
- **no omissions, ambiguity, inconsistency**

BUT PRINCIPLES

1. data design (related to data structures)
2. architectural design (relation between main components)
3. interface design (any kind of interface, not just *user* interface, but all the *flow* of information)
4. procedural design


AND CONCEPTS

1. abstraction
2. refinement (from abstraction to details), also called elaboration
3. modularity (modular understandability, if the module can be understood as a standalone unit)
4. software architecture (not sure what that section actually does here? doesn't seem like a design concept)
5. structural partitioning (partitioned horizontally and vertically, makes things *"easier"*)
6. data structure (we've seen this before, it's a tricky place in between aesthetics and poetics)
7. software procedure (irrelevant, too high level? it's about order of execution)
8. information hiding (only necessary information, if they have *no need*, it defines *access constraints*)



**effective modular design**

happens through *functional independence*, which is measured using two qualitative criteria: *cohesion* (the relative functional strength of the module, how much it does on its own) and *coupling* (the interdependence on modules).

cohesion follows information hiding (we strive for high cohesion)

LOW END OF COHESION SPECTRUM, if tasks relate to each other loosely|||--coincidental-----------functional----|||HIGH END(if tasks relate to each other closely)

coupling needs to be minimized (and this is why global variables are bad, mkay), also content coupling should be avoided (when one module modifies data within another module)

---

p. 410

[structured programming](https://www.cs.utexas.edu/users/EWD/transcriptions/EWD02xx/EWD268.html) depends on *sequence*, *condition* and *repetition*. **the use of a limited number of logical constructs also contributes to a human understanding process that psychologists call CHUNKING**. *understanding is enhanced when readily recognizable logical forms are encountered*. but then flowcharts show that it can get quite complicated hahaha.

p. 411

apparently pseudocode is also called "structured english" lol

and then there's a whole section on OOP, but it's probably better addressed somwhere else? even though **it would be nice to compare differences between OOP in software engineering and OOP in computer science**.

p. 682

problems of less formal approaches: (i.e. *standards for ugly code?*)
- contradictions
- ambiguities
- vagueness
- incompleteness
- mixed levels of abstraction

requirements/good parts of formal approaches:
- data invariant (always the same)
- state (stored data which the system accesses and alters)
- operation (action in/of the system)
- also *pre-* conditions and *post-* conditions

**clearly associate operations with states, and the relationship to one another**

how are these related when it comes to the actual *writing*!?

[the ten commandments of formal methods](http://selab.csuohio.edu/~nsridhar/teaching/fall09/eec521/readings/10c10yearslater.pdf) - interesting because it does specify what a good method would b, even only some of those methods are related to formal writing (1, 6).

BUT ITS NOT BEAUTIFUL (?). people adhere to what is beautiful, and they are slow to adopt that which is only good, but not beautiful by their standards.


p. 768
**reverese engineering**: what is the process of reading source code?

it has multiple *levels*:
- system
- program
- module
- pattern
- statement



p. 834 - future topics in software engineering

switch in terminology when talking about this field:
- data: no associativity (data processing was the early term)
- information: associativity in one context (information technology)
- knowledge: associativity within multiple contexts (knowledge industry? machine learning? data science?)
- wisdom: creation of generalized principles based on existing knowledge from different sources (the future? inshallah)
---

interestingly, the author is more in love with the process than with the object (he also refers to it as "generating code" rather than "writing code")
