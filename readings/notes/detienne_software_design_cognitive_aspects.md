# software design: cognitive aspects

## francoise detienne

### springer media, 2012

---

an overview of the current research in psychology of programming: the most interesting aspects is the concepts used as theoretical frameworks and the fact that the mental model hypothesis is gaining traction.

useful concepts:

- program text
- surface structure vs. deep structure
- mental model (based on personal heuristics and goals)
- beacons (like patterns, but with roles)

---

#### 1 - theoretical foundations

The starting points is a borrowing of cognitive (task-oriented) concepts

> Mental activities construct representations and operate on them

within a given *context*, *elements* are being *perceived*, processed through existing *knowledge schemas* in order to extract *meaning*.

representations are circumstancial constructions, in a context, and for specific ends. they are determined by tasks, functions, goals, etc. p.7 (knowledge builds on this but it is more of a long-term process)

**question**: if it is task-oriented, what's the relationship with aesthetics (passive contemplation)?

working with the computer is comprised of the *prescriptive* (what the computer should) to the *effective* (what the computer actually does)

categories of software psychology:

- categorization
- understanding of text (**kintsch & van dijk**)
- learning
- modelling of knowledge (schema theory, Soloway)
- problem solving

this particular field is concerned with the relationship between (1) human representation and (2) the formal systems supporting this representation

#### 2 - representations of computer programs

data + algorithms (wirth)

the interesting concept is drawn from chomsky: *surface-structure* (textual) vs. *deep-structure* (conceptual)

there is a strange thing about linearity in programming: it is strictly linear but nonetheless jumps all over the place making it seemingly/effectively non-linear.

- programs vs. narrative texts

-> there is an entanglement of the plan, of the arc, of the tension (not so often in narrative text)

-> program texts are dynamic, procedural texts (exhibiting complex causal relations between states and events)

-> the understanding of program text is a *general* one, not applied specifically to a particular situation

- PL vs. natural languages

they are *unambiguous*, while NL are *anaphoric* (variable names are, here, an overlap). software documentation and pseudo-code stands as a hybrid.

#### 3 - software design

the first obstacle is that problems in programming are "ill-defined", and that the *types* of problems affect the heuristics deployed by the individuals (e.g. data-heavy, procedure-heavy, varying requirements, etc.) and so there are 3 hypothetical approaches as to how to solve these problems:

- knowledge
  - pre-existing schemas
- strategy
  - either bottom-up, top-down, breadth-first, depth-first, etc.)
- organization
  - a bit more meta, setting up heuristics in terms of hierarchy, or opportunity, practice, inquiry

**the activity of designing programs consists in activating schemas**

there's a mutually-influencing triad of understanding the problem, researching it and implementing it.

the work of programming is the reconciliation of 2 domains:

- application/problem/business domain
- computing domain

**theory of schemas**

there are multiple kinds of knowledge: *synctatic*, *semantic* and *schematic*. it's also known as a frame, taken from the AI field, so it's broader than a pattern. a schema is then a mental model, different from a ready-made solution plan, which would tend to be too precise.

the difference between experts and novices is that experts have more meta, broader mental models. interestingly, the super expert is one who deploys more breadth than depth (what that means is that being able to bridge domains is more important!)

cf. design patterns (i have that book)

**Aesthetics in code is visualizing patterns through text**

#### 6 - understanding software

starting with the fact that "understanding is constructing [useful] representations", do we understand either as *text* or as *problem*?

in any case, the sources of information are: the text, the self and the environment (you could say is actually situated, within the text). once we have these sources, there is a process of *inference* between pieces that lead to understanding.

- **functional model**
  - information is integrated into pre-existing schemas (such as in narrative texts)

- **structured model**
  - understanding as means of relations (sometimes based on story grammars, PL grammars)
  - looking out for *roles* (or *goals*)
  - made of propositions (first morphemes, then syntax, then semantics by constructing connections, and reducing extraneous information) connected by links
  - this relies on "referential coherence", in which textual elements are linked together

- **mental model**
  - situated surface representation, constructing and conceptual
  - microstructure (loops, control) and macrostructure (routines)
  - identifying *static* and *dynamic* parts of a program

---

**WHICH OF THE RULES OF PROGRAMMING DISCOURSE IS BEAUTIFUL?**

**WHICH ONE ISN'T?**

---

the most probable model is the last one, the mental model, with a highlight on [beacons](https://www.sciencedirect.com/science/article/abs/pii/S0020737383800315), as thematic organizers, and a difference of experts in adding *situational* models.

-> program comprehension as problem-solving

p.101

the problem-solving approach focuses on the *goal-oriented* reading (i.e. given a text, we don't understand the same thing/don't have the same mental model if we have different goals) -> this seems to be the most dominating now [mit study on reading code, neither as math or as language](https://news.mit.edu/2020/brain-reading-computer-code-1215)

main question: **how is surface structure transformed into deep structure?**

finally, difficulties for understanding:

- referential discontinuities (aka local incoherence)
- ordering principle (when it is mentioned is when it is used)
- delocalization (being scattered)
- reconciling the three dimensions in a mental model:
- - temporal
- - spatial
- - causal