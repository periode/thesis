# March 2021

## the connection to architecture (and style/structure)


Interestingly, beauty is never a factor, so it's going to be tricky to connect it back to aesthetics—basically the idea is that it can be a hint (e.g. if you have a gobal variable in a message-passing architecture, that should be a trigger that something ugly is going to come)

TURNS OUT MAYBE WE DON'T SEE PATTERNS, BUT WE COULD APPLY THOSE PATTERNS TO LANGUAGES THEMSELVES

---

gabriel: patterns of software / search for beauty

**Simplicity is not the geometrically banal.** Then Gabriel's addition is the focus on *evocative power*, on the possibility of signifying something else.

---

Patterns as Software Design Cannon, Paul Taylor: "The  time  and  effort  invested  in mastering software design alternatives is generally appreciated, but by contrast, architects of the physical worldassume that they can understand and digest canonical works from two-dimensional magazine images and brief commentaries from eloquent observers."

[mofos on stackoverflow:](https://stackoverflow.com/questions/458242/quality-without-a-name-qwan-examples) 

If we are talking about design, then the ability to tweak, expand or redefine the original behaviour with minimal changes would be something that I find appealing. Some, however, would claim that this quality attribute has a name: maintainability.

Still, from a pure abstract perspective of software architecture, I would say that the ability to easily invoke in your mind an isomorphism between the concrete architecture and the intended domain/purpose, is a quality without name.

---

a class within a class [link](https://blog.royalsloth.eu/posts/the-complexity-that-lives-in-the-gui/) is a visual/spatio-mental pattern which means "complexity", "unmaintainability", "unsustainability"

*bad patterns make possible the kind of actions which result in bad patterns?*

---

patterns in arch: **how is surface structure transformed into deep structure?**

## hacking

https://firstmonday.org/ojs/index.php/fm/article/view/647

https://www.tandfonline.com/doi/abs/10.1080/14735780600961809

https://books.google.de/books?hl=en&lr=&id=0FW3DMNhl1EC&oi=fnd&pg=PP13&dq=beauty+hacking&ots=tw-zDSARUw&sig=u-rw1gAEOWr8pXV6iCsVNSfb7QI&redir_esc=y#v=onepage&q=beauty%20hacking&f=false

beauty in inscrutability?

CCC: "you can create art and beauty on a computer"

Hackers -> this redirects to the understanding of the machine (e.g. trying to reduce character counts for one-liners)

https://linusakesson.net/scene/a-mind-is-born/

is hacking considered beautiful because it's:

- simple
- tight

**and the intent is clear**

## beautiful languages (PL theory/research)

winograd:

- there is a structure of formal symbols which can be manipulated according to precisely-defined and well-understood rules.
- there is a mapping through which the relevant properties of the domain can be represented by symbol structures <- **metaphors**
- there are operations that manipulate the symbols in such a way as to produce veridical results (derive new structures, which are still veridical)

**a special kind of symbol system**

PL as notations are compared to English language, since they both have constructs of different types and different scales (sonnet, essay, note, etc.). I argue that there are some constructs that can be considered *patterns*? Because then aesthetic standards could be thought of as very narrow patterns. (sethi)

> The difference among programming languages are not quantitative differences in what can be done, by only qualitative differences in how elegantly, easily and effectively things can be done.

Beautiful languages:

- clear semantics and syntactic structure
- natural representation for problem data and algorithms (**related to patterns**)
- ease of extension (**related to patterns**)
- efficiency

winograd: theoretical language (rational) vs. practical (situated), this echoes the complaint of kernighan regarding Pascal (Pascal is useless in real situations, compared to PL and C)

### semantics

winograd:
> The first and most obvious point is that whenever someone writes a program, it is a program about something.

(called the subject domain; interesting how it switched to being called problem-domain in software engineering)

fedorenko et. al. (parallels between blocks: sentences and functions)

---

cantell-smith:
computing is: *meaning mechanically realized*, due to the fact that the machine comes from non-mechanical origins. we think of computers as digital but they're actually only digitally implemented.

the semantics (logical, aboutness) (non-local) cannot be reduced to syntactics (local)

- directedness
- consistency

are both semantic attribute/qualities.

---

winograd: "the computer is a device for creating, manipulating and transmitting symbolic (i.e. linguistic) objects." how does that qualify its relationship to language?

> The essence of computation lies in the correspondence between the manipulation of formal tokens and the attributions of a meaning to those tokens as representing elements in worlds of some kind. (p.74)

winograd: mathematical language is, by definition, *context-free*. the difference is that programming is *applied* maths.

> Meaning is created by an active reading, in which the linguistic form triggers interpretation, rather than conveying information.

how to deduce grounding?

there are **three basic kinds of grounding**:

- experiential (an observation to verify) -> softdev (**cognition viewed not as activity in some mental realm, but as a pattern of behaviour that is relevant to the functioning to the person or organism in its world**)
- formal (a logical language-game to verify) -> PL research
- social (relying on what others said to verify) -> community-based?

---

semantics imply how variables and functions "should" behave (sethi).

The question of programming languages is: are there symbol systems which perform better than others? Under what standards? (from goodman)

> when we talk about esolangs, we are designing a perspective for someone to think through. -daniel temkin [src](https://www.artistsandhackers.org/Critical-Code)

> programming has moved over time from *prescribing* computers (application domain) to *describing* problems (problem domain), such that we center less and less around the specificity of the computer, and more and more around the specificity of the problem. (milner)

and the meaning of a formal expression can, with great difficulty and clumsiness, be explained, but the conceptual content still eludes the computer, varying from the mundane (e.g. a counter) to the esoteric (e.g. a wish). as such, even the highest-level code, as beautiful as it  is, cannot deal with *new environments*

semantics themselves are based on **domains** ([wiki](https://en.wikipedia.org/wiki/Semantic_domain) "a specific place that shares a set of meanings, or a language that holds its meaning, within the given context of the place.")

- the computer understands only bits, or understands only self-referential statements
  - physical machine
  - logical machine
  - abstract machine
  - high-level languages
  - representational scheme for facts (data, structs)
  - the last frontier is always the subject domain
- the point of shannon/turing is that it doesn't need to understand anything
- in the end, it only understands on or off.
- it makes distinctions between entities and the name of entities (called the *use-mention problem*)
- the association of a name to an attribute is called *binding*
- - one thing that the computer/compiler knows but not the programmer is the **location** of everything (stansifer)

> In fact, one of the biggest differences between object-oriented and non-object-oriented programming is the possibility to identify the actor of an action using purely syntactic means. (sustrik)

PL are treated as " as texts subject to mathematical manipulation" (wirth, essence of PL, p.3)

> In programming languages, variables are truly variable, whereas variables in mathematics are actually constant (ibid)

and wirth is actually saying that we don't really need to understand implementation (how the computer *does* it)

more wirth:


however, he's talking from a *scientist's* point of view, his anecdote of struggling to learn Smalltalk is proof: he wants to understand before experimenting.

> [Programmers] saw them as coding schemes by which to feed instructions more efficiently into computers, rather than as notations for designing new, abstract artefacts.

> Before closing, let me mention another essential ingredient, one that hardly ever gets mentioned: It must be a pleasure and a joy to work with a language, at least for the orderly mind. The language is the primary, daily tool. If the programmer cannot love his tool, he cannot love his work, and he cannot identify himself with it. (craftsmanship)

### concepts

**a theory of software dynamics** (software as a pattern of syntactical form (see Suber, 1988)

cantell-smith:

- software can have, amongst other attributes, *participatory*, *connectedness*.
- computation is something else, but it's something else that the programmers and computer scientists have *always felt*.

another concept **TYPES**

another concept **LINKS**

- pointers
- references
- channels
- variables
- locations
- names
- addresses
- etc.

a program is a *cognitive artefact*, which can be understood on three different levels, according to Moor:

- the physical level (transistors)
- the design level (specifications, effective)
- the intent level (the goal and desire)

Implementation as:

- individuation (from homo sapiens to delia derbyshire)
- instantiation (from turing machine to macbook)
- exemplification (from red to a specific acrylic)
- reduction (from complex weather model to weather forecast)

concept: **IMPLEMENTATION**

semantic understanding is:

- "understanding a system in terms of another system that we already know"
- "a material implementation" (i.e. situated)
- required to have an "ontology", a "model theory"

Semantics is the **decoration** of parse trees/ASTs (which is the process of evaluating attributes, which can be either *synthesized* or *inherited*). Since decoration is the addition of a new layer (a semantic layer) on top of a base layer (a syntactic one), then this leads to some sort of *meta*-programming. It happens at a higher level, indeed, but it is still restrained to the fact that it is, indeed, programming (therefore syntax based?). (M. Scott)

- denotational semantics (refer to the domain theory, where they point to something)
- axiomatic semantics (intransitive)

software is a model, a medium of thought, an environment (Mahoney, 2011)

in order to understand a computer program, we need to give it meaning, that's what always happens: "distinguishing from noise is something that literature does" (Suber, 1988, p.97)

the question "what does a Turing machine do?" has `n+1` answers. 1 syntactic, and n semantic (however many interpretations)

---

Another example is thread concurrency. The book on parallel programming mentions an example of parallel thread processing which looks beautiful but is ugly on the inside: https://mirrors.edge.kernel.org/pub/linux/kernel/people/paulmck/perfbook/perfbook-e2.pdf p. 105

## additional aesthetics

beardsley: aesthetic point of view

> Gratification is aesthetic when it is primarily obtained primarily from attention to the formal unity and/or the intensity of regional quality.

also the concept of "rules of relevance": when is an aesthetic experience relevant?

his implication is that there are other point of views than the aesthetic one (what is the one in hacking?)

the most important and relevant of his criteria for the aesthetic experience is "active discovery" -> imaginative realization (budd)

goodman as a prelude to aesthetic cognition:

> In the aesthetic experience, the emotion functions cognitively (goodman)

carroll makes a point for a *content-first* approach to aesthetics: Aesthetic judgments in code aren't disinterested: they're vested in being able to *understand*.

reconnect to pineiro? at least touch upon. (but it would make more sense in the first part, examining beauty in softdev)

## cognitive aspects

the MIT study on reading code:

> The emphasis placed on the symbolic, cognitive, planning aspects of the arts leads us to give value to the role played by problem-solving, seeing there a model in terms of which the moment-to-moment artist’s behavior at work can be described. “An analysis of behavior as a sequence of problem- solving and planning activities seems to be most promising [...]" (goodman)

within a given *context*, *elements* are being *perceived*, processed through existing *knowledge schemas* in order to extract *meaning*. (detienne)

**question**: if mental models are task-oriented, what's the relationship with aesthetics (passive contemplation)?