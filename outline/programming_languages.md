# programming languages

in this part, the set of aesthetic features, composed from both empirical observations and theoretical constructions, is re-examined in the light of the linguistic environments as provided by programming languages. after having elaborated a concept of clarity, I will see *if* and *how* programming languages modulate this concept. programming languages will be investigated both as semantic systems, but also as socio-economic systems. by seeing how discourses on clarity vary between programming languages communities, it will be possible to identify such a structural influence and integrate it within our concept of clarity.

[iverson notation tool for thought](../readings/notes/iverson_notation_as_tool_for_thought.md)
[cantwell smith computational linguistics](../readings/notes/cantell_smith_linguistics_computational_semantics.md)

## the (programming) language object

[scott_programming_language_pragmatics](../readings/notes/scott_programming_language_pragmatics.md)
[sethi_programming_languages_constructs_concepts](../readings/notes/sethi_programming_languages_constructs_concepts.md)

this section explores the conceptual definition of a programming language (from a CS and philosophy standpoint), but also the role of language in aesthetics (comparison french vs. german, thomas mann avec ses verbes a la fin)

the question of operational meaning vs. denotational meaning should be explored. what means what to the computer?

[crozat_theorie_operationelle_ecriture_numerique]] -> a bit too high-level, bu](../readings/notes/crozat_theorie_operationelle_ecriture_numerique]] -> a bit too high-level, bu.md)nice concepts about digital writing/layerings of digital writing (binary-theoretical / technical-applicable/semiotical-rhetorical)

the fact that it's abstract as hell can also be seen as a cultural influence/related to chomsly [golumbia_cultural_logic_computation](../readings/notes/elated to chomsly [golumbia_cultural_logic_computation.md)

[milner_semantic_ideas_programming_languages](../readings/notes/milner_semantic_ideas_programming_languages.md)
[stansifer_study_of_programming_languages](../readings/notes/stansifer_study_of_programming_languages.md)
[homem_topics_in_programming_languages](../readings/notes/homem_topics_in_programming_languages.md)
[sustrik_linguistics_programming_languages](../readings/notes/sustrik_linguistics_programming_languages.md)
[turner_programming_languages_technical_artefacts](../readings/notes/turner_programming_languages_technical_artefacts.md)

> State introduces an abstract notion of time in programs. In functional programs, there is no notion of time… Functions do not change. In the real world, things are different. There are few real-world entities that have the timeless behaviour of functions. Organisms grows and learn. When the same stimulus is given to an organism at different times, the reaction will usually be different. How can we model this inside a program? We need to model an entity with a unique identity (its name) whose behaviour changes during the execution of the program. To do this, we add an abstract notion of time to the program. This abstract time is simply a _sequence of values in time_ that has a _single name_. We call this sequence a named state.

## the programming language ecosystems

ref: masterminds of programming

each of these sections will highlight both the *paradigms* as well as the *syntactic* features of the main categories of programming languages. the point will be to highlight what they share, and how they differ, and that what they share is a very core concept. how that concept is implemented however differs, which is inherently an aesthetic decision (as we will see with Ruby or Go for instance). this categorical approach will also necessarily include a historical dimension, as well as a discussion of which programming communities gravitate around which languages

[vee_coding_literacy]], [coding_literacies_annette_vee](../readings/notes/vee_coding_literacy]], [coding_literacies_annette_vee.md)

- notes
- - which aesthetic standards are set by the machine vs. which aesthetic standards are set by human social context?
- - place of the IDE: syntax highlighting, auto complete: material conditions to make materiality disappear

[programming paradigms - van roy](../readings/notes/http://www.cs.albany.edu/~sdc/CSI500/Downloads/ProgrammingParadigmsVanRoyChapter.pdf), along with a helpful [summary](../readings/notes/https://blog.acolyer.org/2019/01/25/programming-paradigms-for-dummies-what-every-programmer-should-know/). most importants seem to be concepts of _named state_, _records_ (structs, arrays), _closure_, _independence (concurrency)_ (which supports shared-state or message passing).

> Each paradigm has its own “soul” that can only be understood by actually using the paradigm. We recommend that you explore the paradigms by actually programming in them (van roy)

- functional programming
- declarative programming (at the beginning of it all)
- object oriented programming
	- paid close attention to developments in cognitive theory (piaget, papert, montessori)
 - esoteric programming
	 - > when we talk about esolangs, we are designing a perspective for someone to think through. -daniel temkin [src](../readings/notes/https://www.artistsandhackers.org/Critical-Code)

## meaning in programming languages

this section looks at how language-dependent the previously exhibited features of aesthetics might be affected by it. however, we'll see that this isn't so much a clear distinction as it is a gradient between fully language dependent (and the extreme: hardware dependent—hallo kittler).

procedural rhetoric is just a very high level of programming semantics. processes with meaning assigned to it. <- this further extends the gradient.

[winograd_language_as_cognitive_process]]](../readings/notes/winograd_language_as_cognitive_process]].md)[winograd_flores_understanding_computers_and_cognition]]](../readings/notes/winograd_flores_understanding_computers_and_cognition]].md)[eijick_computational_semantics_functional_programming](../readings/notes/eijick_computational_semantics_functional_programming.md)

syntax vs. semantics?

> There's a lot of attention to **COMPRESSION**, using the underlying programming language in a way that's easy to penetrate - richard gabriel [src](../readings/notes/https://www.dreamsongs.com/PoetryOfProgramming.html)

### computer beauty

whether or not the computer understands is not an aesthetic problem, but an engineering problem. **BUT** there are beauties in engineering

however, one would argue that a beauty for the computer is [data locality](../readings/notes/https://gameprogrammingpatterns.com/data-locality.html), due to the very practical issue of data access (and subsequent caching)

### a discussion of "idiomatic"

`TODO` how does it relate to "understanding"?
programming idioms - [c2](../readings/notes/https://wiki.c2.com/?ProgrammingIdiom) - [so](../readings/notes/https://stackoverflow.com/questions/302459/what-is-a-programming-idiom)

### language-dependent features

language dependent features will be:

- the degree of abstraction/dependency
- the naming of variables
- the socio-economic ecosystem
- conceptual distance

### language-independent features

- uniqueness
- white space and layout
- scope of actions (e.g. just one action at a time)
- double-coding and metaphors

there could be different beauties in writing and in reading (case of Mike's APL) - easier to read vs. easier to type

what is the aesthetic of a semantic system that is supposed to be understood by both humans and machines? **if there is a collapse of both those systems, it hints at the fact that the human becomes machine**

## language as material

from hardware to tokens

when i talk about materiality, i should also contextualize it with other materialities (build processes, hardware, etc)

markers of spatialization:
- `GOTO`
- the trace (stack trace, execution trace) (like ariadne's thread)
- localness [allamanis_survey_for_big_code_naturalness_language#patterns]](../readings/notes/ localness [allamanis_survey_for_big_code_naturalness_language#patterns].md)
	- localness is syntactic, non-localness is semantics
- [dangling else](../readings/notes/https://en.wikipedia.org/wiki/Dangling_else)

[simondon_mode_existence_objets_techniques](../readings/notes/simondon_mode_existence_objets_techniques.md)