# March 2021

## from the previous doc

The immediate next aspect that I will be focusing on is therefore to highlight the aesthetic criteria which support two other communities of practice: **hackers** and **artists**.

connect to pineiro and his aesthetics: i will compare his approach to mine, and that we've find is quite similar. particularly interesting (and to deal w/ last section on aesthetics) is his idea of public and private aesthetics.

## the overarching point

aesthetics matter, even in such a highly formal, syntactical, autotelic system as a computer

how does it contribute to the world? by showing that there is no separate domain of aesthetics, but also that they're not essential, but a mark of high-quality

## 0 - main points

first i want to touch upon cursory work in source code poetry (paloque berges), and connect that to metaphor and literary tradition. then i want to talk about hacking (demoscene, folies, one-liners), and then connect that lack of aesthetic concern (qualify! different kinds of aesthetics) to the question of "what is there to understand" and therefore the question of **semantics**. i will close by exploring the different concepts in programming that are hard to communicate.

**CONCEPT**: semantic compression

**CONCEPT**: spatio-visual problem solving

**CONCEPT**: concepts to communicate? the stream? the map?

this is not so much about code aligning with standards of literature, but maybe aligning to the standards of both epistemology and architecture, *architectural knowledge*

## source code poems

Close-reading of source code poems?

helps in setting the boundary between art and aesthetic.

> A work of art has a character and a content, including formal (balance and unity), aesthetic (gracefulness, garrishness), expressive (melancholy, cheerfulness), representational (a woman, a data structure), semantic (meaning, metaphor), and symbolic (death, life, disintegration) (budd, aesthetic essence).

categories:

Denotation is *standing for*, *symbolizing*.

A depiction is *system-relative*, more specific as to its target. Depiction is generative: interpreting one picture allows us to interpret others. allows us to interpret and understand *foreign objects*. (like the stream)

A depiction is a predicate: that is, it's not passive, it actively constitute its subject/target.

**double-coding in art code is a kind of metaphor, closer to litterature than in other code texts**.

## the place of metaphor

beardsley: metaphor can have a *designative role*. a metaphor gives two ideas instead of one (john crow ransom, p.263), which adds a "local texture of irrelevance", inserting a "foreign" component. it can also have a *connotative role*, where the meaning is peripheral.

rich metaphor (source code poetry) vs. banal metaphor (softdev). the metaphor transforms a property into a sense. -> these are the metaphorical **degrees of meaning**.

two metaphors:

- **procedural** representation (algorithm based)
- **declarative** representation (data-structure based)

the question of operational meaning vs. denotational meaning should be explored. what means what to the computer?

touch on the relationship between abstraction and metaphor (does metaphor require abstraction??). in terms of mental models, metaphors relate to schemas: **the activity of designing programs consists in activating schemas** (detienne)

> [La littérature] permet de penser des choses qui sont difficile à penser autrement. p. 17 (terrence cave)

elle est un objet de connaissance, aussi bien *sensuel* que *conceptuel*, with an inter-relation between rational thought and imaginative thought. (+ daily life aka reader's semantic field)

en gros, la littérature décuple notre imaginaire, en particulier en recréant des sensations par le texte. mais quid? quand il s'agit d'un matériau qui n'a pas de sensations

**CONNECTION TO NEXT PART**: metaphores are (a sort of) architecture of thought

**question du caché et du manifeste dans le code?**

la programmation est fiction (elle n'existe pas, ontologiquement, c'est l'expérience d'imaginer des contenus dont on n'est pas la source, et d'être—plus ou moins guidé—dans son imagination), et non-fiction car elle est essentielle au problèmes concrets: il est *approprié* de la traiter des deux manières, possiblement simultanément. c'est en cela que **le cadre de la programmation** diffère du cadre fictionnel. c'est tout de même un cadre pragmatique de traitement des représentations, au sens où il impose une étiquette cognitive (manière de penser), émotive et pratique. (pas certain de l'émotif, pour la prog).

## the connection to architecture (and style/structure)

sir henry wotton on architecture: "commodity, firmness and delight", which could also be linked to programming. (in beardsley, aesthetic experience)

one of beardsley's requirements for the aesthetic is "felt freedom" which matches the "feeling alive" sentiment of alexander, which occurs in a good place?

---

gabriel: patterns of software / search for beauty

Beauty is involved in moving from *disorganized complexity* towards *organized complexity*.

Alexander's successive conceptions of beauty:

- appropriateness
- rightness to fit
- not simple
- wholeness (which comes before)

"deep interlock and ambiguity create beauty" -> how much does that apply?

the approach is similar, because it's about "the conditions" of the beautiful, and not "the essence" of the beautiful

He then discovers the *"paradoxical interplay between symmetry and asymmetry"* (between simplicty and complexity).

**Simplicity is not the geometrically banal.** Then Gabriel's addition is the focus on *evocative power*, on the possibility of signifying something else.

---

pineiro:

coming back to the "what it does", there can be a parallel seen between the aesthetic aspect of software and its public aspect? re-use -> zusammenleben -> *habitability*

---

a class within a class [link](https://blog.royalsloth.eu/posts/the-complexity-that-lives-in-the-gui/) is a visual/spatio-mental pattern which means "complexity", "unmaintainability", "unsustainability"

*bad patterns make possible the kind of actions which result in bad patterns?*

---

detienne: **beacons** as psychological patterns? it's about direction (roles!) rather than inhabiting, though.

patterns in arch: **how is surface structure transformed into deep structure?**

## hacking

beauty in inscrutability?

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
- ease of ex tension (**related to patterns**)
- efficiency

> Simplicity enters in four guises: uniformity (rules are few and simple), generality (a small number of general functions provide as special cases a host of more specialized functions, orthogonality), familiarity (familiar symbols and usages are adopted whenever possible), and brevity (economy of ex­pression is sought). p. 20

winograd: theoretical language (rational) vs. practical (situated), this echoes the complaint of kernighan regarding Pascal (Pascal is useless in real situations, compared to PL and C)

### semantics

winograd:
> The first and most obvious point is that whenever someone writes a program, it is a program about something.

(called the subject domain; interesting how it switched to being called problem-domain in software engineering)

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

> Stylistic arguments may appear to many as irrelevant in a technical environment, because they seem to be merely a matter of taste. I oppose this view, and on the contrary claim that stylistic elements are the most visible parts of a language. They mirror the mind and spirit of the designer very directly, and they are reflected in every program written. (p.8)

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

the question "what does a Turing machine do?" has `n+1` answers. 1 syntactic, and n semantic (however many interpretations)s

## additional aesthetics

beardsley: aesthetic point of view

> Gratification is aesthetic when it is primarily obtained primarily from attention to the formal unity and/or the intensity of regional quality.

also the concept of "rules of relevance": when is an aesthetic experience relevant?

his implication is that there are other point of views than the aesthetic one (what is the one in hacking?)

the most important and relevant of his criteria for the aesthetic experience is "active discovery" -> imaginative realization (budd)

goodman as a prelude to aesthetic cognition:

> In the aesthetic experience, the emotion functions cognitively (goodman)

carroll makes a point for a *content-first* approach to aesthetics: Aesthetic judgments in code aren't disinterested: they're vested in being able to *understand*.

reconnect to pineiro 

## cognitive aspects

the MIT study on reading code:

> The emphasis placed on the symbolic, cognitive, planning aspects of the arts leads us to give value to the role played by problem-solving, seeing there a model in terms of which the moment-to-moment artist’s behavior at work can be described. “An analysis of behavior as a sequence of problem- solving and planning activities seems to be most promising [...]" (goodman)

within a given *context*, *elements* are being *perceived*, processed through existing *knowledge schemas* in order to extract *meaning*. (detienne)

**question**: if mental models are task-oriented, what's the relationship with aesthetics (passive contemplation)?