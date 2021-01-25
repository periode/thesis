# understanding computers and cognition: a new foundation for design

## terry winograd and fernando flores

### ablex corp, norwood NJ, 1985

---

winograd is one of the founders of the HCI lab at stanford and has worked on trying to make language understood to computers.

---

approach through *design* (the interaction between creating and understanding), and mostly about developing a theory of language

> the computer is a device for creating, manipulating and transmitting symbolic (i.e. linguistic) objects.

"every questioning grows out of a tradition" -> what is the tradition of this thesis? (also, meaning is relative to what is understood through the tradition)

#### chapter 5 - language, listening and commitment (pp.56-64)

combination of hermeneutics with speech act theory (meaningful acts in situations of shared activity)

mathematical language is, by definition, *context-free*.

> Meaning is created by an active reading, in which the linguistic form triggers interpretation, rather than conveying information.

> That which is not obvious is made manifest through language

austin has *five fundamental illocutionary points**:

- assertive: says whether that is the case or not
- directive: attempt to get the hearer to do sth (questions/commands)
- commissive: commit the speaker to some future action
- expressive: express a psychological state about X (apologizing, praising, forgiving)
- declarative: brings about the correspondence between the propositional content of the speech act and reality

(each of these points can have different forms)

theoretical language (rational) vs. practical (situated)

> Language and cognition are fundamentally social (p.61).

structural coupling (skills) with a consensual domain (piece of source code) is how an autopoeitic structure emerges (self-sustained attention? aesthetic experience?)

there are **three basic kinds of grounding**:

- experiential (an observation to verify)
- formal (a logical language-game to verify)
- social (relying on what others said to verify)

#### chapter 6 - towards a new orientation (pp.70-80)

summarization of concerns

- cognition as embeded/*dasein* (structural coupling)
- **cognition viewed not as activity in some mental realm, but as a pattern of behaviour that is relevant to the functioning to the person or organism in its world**
- disagrees with "knowledge is a storehouse of representations, which can be called upon for use in reasoning and which can be translated into language" -> the problem is that "things" do not have independent properties. heidegger: "things" emerge when they breakdown, when they become a matter of concern, when they become distinct (already skill?).
- corresponding representation hypothesis: the assumption that cognition rests on the manipulation of symbolic representations that can be understood as referring to objects and properties in the world.

> The essence of computation lies in the correspondence between the manipulation of formal tokens and the attributions of a meaning to those tokens as representing elements in worlds of some kind. (p.74)

pre-understanding and background are important for meaning-making (fluency). knowledge is *always* the result of interpretation, which in turn depends on the entire previous experience of the interpreter and on situadness in a tradition.

their approach to language is not that language is transmission of information, but rather that is a form of human social action, with mutual orientation (but i don't see those as mutually exclusive)

#### chapter 7 - computers and representation

focusing on the fundamental issues of language and rationality that are the background for designing and programming computers.

##### 7.1 -  programming as representation

> The first and most obvious point is that whenever someone writes a program, it is a program about something.

(called the subject domain; interesting how it switched to being called problem-domain in software engineering)

the programmer has a systematic correspondence between the symbols contained in storage cells and how they represent objects and relationships in the subject domain.

> Success in programming depends on designing a representation and set of operations that are both *veridical* [produce results that are correct] and *effective* [they are usable].

most important parts of a formal system (e.g. a programming language):

- there is a structure of formal symbols which can be manipulated according to precisely-defined and well-understood rules.
- there is a mapping through which the relevant properties of the domain can be represented by symbol structures
- there are operations that manipulate the symbols in such a way as to produce veridical results (derive new structures, which are still veridical)

the problem is that representation is in the mind of the beholder: in no way do programming languages depend on the fact that they represent something (at least, sth too concrete; because they do have pointers, registers, etc., which represent something tangible).

cf. Newell & Simon, 1976, "Computer Science as Empirical Enquiry" -> for the ability of computers to refer to themselves

##### 7.2 levels of representation

computers have **levels of representation** (abstraction?)

- physical machine (components and copper)
- logical machine (boole, circuits, gates)
- abstract machine (assembly, pointers, instruction sets)
- higher-level languages (cobol, fortran, lisp) - this requires compilers or interpreters
- a representation scheme for "facts" (which we would call data today), like linked open data, relational, etc.

> the subject domain is always the next higher level itself (p. 89)

##### 7.3 can computers do more than told?

some issues, though:

- breakdown (some levels might not operate as anticipated)
- resource use (some things described are only relevant at a lower level) -> depends on the **implementation** (about process more than result)
- accidental representation: mismatch between machine realization and programmer intention (e.g. glitch, hacks) -> one could say that some structures of the machine do not represent the results it outputs (like hacking a display to render a heart on a TI calculator)