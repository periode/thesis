# table of contents

## introduction

see redaction/thesis.tex

quote from **turing paper 1936**: the first instance of source code makes the explicit distinctions about layout of binary ("this is less easy to follow..."). can be a good starting example of the importance of form, since one can follow it if it's laid out properly.

---

## 1 the aesthetics of source code - ideals

### 1.1 the practice of programmers

this section focuses on the applied practice of describing things to the computer. who does it, how they do it, and how they relate to it. it would particularly focus on the historical/sociological aspect of it, to start highlighting that there might be one concept of computing, but the reality of interacting with and thinking in terms of computation is not unidimensional. it establishes different categories of people writing source code: researchers, academics (teachers+students), professionals, hackers, amateurs and artists.

I argue that aesthetics can help grasp software's multitude

hayes_cultures_od_code

cox_mclean_coding_praxis

#### 1.1.1 software developers

#### 1.1.2 hackers

the underhanded c code contest

graham_hackers_and_painters

#### 1.1.3 scientists

#### 1.1.4 artists

### 1.2 ideals of beauty

this section extracts the features that are recurring in the discourses around beauty in source code. it does so by looking at how practical examples and theoretical statements either converge or diverge and how such statements are modulated by the aforeidentified communities. the common point identified, via the subjectivity of writing code, is the concept of the *craft*. 

beauty as a lack of ambiguity, as efficient achievement of an aim (aim of frustration/clarity/imagination)

- beardsley: cognitive gratification under ideal circumstances

#### 1.2.1 lexical field in programmer discourse

- minimalism
	- https://vimeo.com/47364930 -> concise code is code as litterature, because he says one of the issues is that there are just too many lines of code that one can wrap its head around. so there's a need for shrinking down content
- simplicity
	- Syntactic simplicity, or elegance, measures the number and conciseness of the theory's basic principles. Ontological simplicity, or parsimony, measures the number of kinds of entities postulated by the theory. code is syntactic simplicity because wrngles together complex concepts (e.g. perl, one liners), or code is ontological simplicity, because all is within computation (e.g. lisp)

[geek sublime](./readings/notes/chandra_geek_sublime.md)

[cramer_words_made_flesh](./readings/notes/cramer_words_made_flesh.md)

#### 1.2.2 functional beauty

this first approach, by comparing both source and comment at the same time (taking texts which are explicitly described as being beautiful), explicitly highlights the requirements for source code to be beautiful. 

pineiro, aesthetics of code

cox_the_aesthetics_of_generative_code

#### 1.2.3 literary beauty

this second approach contrasts with the functional component of the first one, but nonetheless stands in relationship with it. the creative beauty, by defying traditional beauty standards, does help us highlight, through deviance, what the norm is. these texts on "creative beauty" include the classical perl poetry, code poems, IOCC, code poetry contest, etc.

maurice black, art of code

rousset: forme et signification

#### 1.2.4 mathematical beauty

beautiful proofs in geometry?

Elegance: Through a single lens, it communicates the problem it solves and the machinery of its solution.

fuller_software_elegance

iverson_notation_as_tool_for_thought

### 1.3 craft and beauty

this subsection also allow us to introduce the concept of *craftsmanship* and integrate it within a larger tradition of sennett/de certeau/rancière, and connect the practice of programmer to a longer history of craft, a history which in itself has beauty standards `TODO`

the zen of python could tie in to that tradition

[this](http://www.csharplearningsquare.com/2017/07/eight-golden-rules-for-better.html)  includes practical tips and software craftsmanship

"to grok" -> an expression which means "to grasp vaguely, to have an intuitive understanding of"

jones_reckoning_with_matter

## 2 understanding code

> The art of programming is the art of organizing complexity (Djikstra)

I highlight the issue of *understanding* between humans and machines through the medium of source code, as an ambivalent notion which necessitates a symbolic interface. This concept of *understanding* is also understood in the light of the different *fields* of programming practice (professional, amateur (hobbyist+hacker), educational, scientific/academic)

### 1.4 modes of knowledge

this section focuses on "you will know when you see it"

Implementation as: **THIS GOES WITH GOODMAN**

- individuation (from homo sapiens to delia derbyshire)
- instantiation (from turing machine to macbook)
- exemplification (from red to a specific acrylic)
- reduction (from complex weather model to weather forecast)

__explicit__

__tacit__

- koans
- alan perlis on programming

practice is *synthetic method*, a method which regroups, which puts together.

freeman_science_as_a_craft

__define understanding__ (perspectives: reader/writer)

dual-positioning of source code text
1. against text (against literary)
2. against text (against productive software)

fedorenko_language_of_programming_cognitive_perspective, about the cognitive implications of programming languages: does it change something in our brain if we learn more PLs?

fishwick_aesthetic_programming an answer to this question of the cognitive impacts of PLs, by using aesthetic as a link (_un liant_)

### 2.1 the problem of understanding in human and machines

this section investigates the main challenge that source code tends to address as a human-machine communication tool

temporality (fast) and spatiality (jumps)

cantell_smith_introduction - computing as _meaning mechanically realized_  (this whole introduction is a good reference on the tension between the linguistic and the mechanical)

another philosophical approach highlighting the tension in software is irmak_software_abstract_artifact

detienne_software_design_cognitive_aspects, psychology of programmers

#### 2.1.0 the metaphors of code

this section focuses on the many ways people designate code and digital systems

berry, code as:
- engine
- image
- communication medium
- text cummings_coding_with_power_rhetoric_coding

limits to a literary approach: hayles_print_flat_code_deep, and confirmation via a psychological study ivanova_comprehension_computer_code

#### 2.1.1 the computer as a technical apparatus

this section talks about computation, symbolic logic, math and turing and lambda functions and all that beautiful stuff.

#### 2.1.2 the computer as cognitive apparatus

this section talks about the computer as a cognitive tool, as a way to think (rokeby, wolfram), along the lines of algorithmic thinking, coding literacy. this will highlight the necessity of translating concepts from one frame of mind to another (formal vs. informal)

"expert programmers know how to choose the level of abstraction appropriate to the task" (sicp)

### 2.2 the problem of understanding in humans and humans

this section redefines the concept of understanding, not as human to human, and not as human to machine, but as human to machine to human, and highlights some of the hurdles that appear in terms of collectivity vs. subjectivity. it makes the claim that contrary to writing literature, in which writing is potentially public and reading private, writing source code is a private act (as illustrated by passages like weizenbaum, computer boys) and reading it is highly public. because of a change in concept, i would argue that the change in *manifestation* of concept is also necessary.

#### 2.2.0 general overview of understanding theory

**UNDERSTANDING AS MENTAL MODEL AFFECTED BY LANGUAGE** abelson_sussuman_abelson_sicp 

#### 2.2.1 aesthetic means of understanding

contini_goodman_art_cognition_education, summary of goodman and project zero

carroll_aesthetic_experience_revisited  theory (affect, axiom, content)

chatterjee_vartanian_neuroscience_of_aesthetics psychology/cognition, fluency theory

fauconnier_turner_conceptual_blending

goodman_the_status_of_style, along withlopes_goodman_symbol_theory

goody_logic_of_writing, goody comes here because he is dealing at the same higher level of the symbol system (orality vs. literacy), and then combine it with hayles_speech_writing_code

##### 2.2.1.1 understanding in literature

classical rhetoric has:
1. invention
2. disposition
3. memory
4. elocution
5. action

pierre fontanier, les figures du discours

cognition, metaphor

- beardsley beardsley_aesthetic_experience#15 - the metaphorical twist

- burke and the terministic screen burke_language_as_symbolic_action and the scientistic language vs. dramatic language / wittgenstein and the formal-infomal

this section oscillate between the scientific reading/writing of a text and the dramatistic (sic) reading/writing of a text as a useful means of apprehending the dichotomy between formal and informal language plays in source code r/w. additionally, the concept of *terministic screen* (not so far from goffman's frame analysis) will help  us apprehend under which shifting social modes of examination code is being judged.

- barthes and the readerly

this section takes on barthes distinction between the readerly and the writerly text and sets it against the practice of open-source software and the tradition of craftsmanship in order to highlight that pleasure/life is being taken from reading *readable* source code. by looking at additional approaches that barthes has to writerly texts, those which leave room for interpretation, we will be able to identify similarities in source code, first in code structure (modularity), then in code text (conceptual and reader distance) and finally in meta-text, around the **comment**.

- voleshov and social aesthetics

this section concludes our framework construction by enriching it with a relational component, which, while at least implicit in previous contributions, is here expanded on a more social level. it's hard to separate an exploration of source code aesthetics while side-stepping the heightened features of the social group/s that programmers constitute. it might be possible to consider a piece of source as a "distributed *énonciation*", both towards the computer and the fellow human, but also a "delayed *énonciation*", because it isn't as immediate. and because it isn't immediate, there needs to be an adaptation of the concept of *presence* in craftsmanship; presence, a requisite in craftsmanship, is manifested through aesthetics. (`<-` that indeed tells us *why* we need aesthetics, but doesn't tell us *what* these aesthetics are. a closer reading of craftsmanship/aesthetics sources would however have more weight in light of this necessity for presence).

this could also be related: **communities of practice**, by Jean Lave and Etienne Wenger [link](https://www.learning-theories.com/communities-of-practice-lave-and-wenger.html), which imples an **ethos**. this is taken from [this post](https://queue.acm.org/detail.cfm?id=3380777)

transition avec l'architecture: conception de l'_architectural literature_ bouchardon_valeur_heuristique_de_la_litterature_numerique

genette_fiction_diction

gefen_extension_du_domaine_de_la_litterature, broader level (see also his contribution in lavocat_interpretation_litteraire_sciences_cognitives)

##### 2.2.1.2 understanding in mathematics

enlightenment

this section explores beauty from the angle of formal logic, `TODO`. the conclusions could either be formal (like when cramer talks about the symmetrical, repetitive patterns of middle-age monks, or commentaries of mathematicians on `e^(i*PI) + 1 = 0`), or conceptual. if they're conceptual, they don't need to come in to the framework right now.

http://emis.matem.unam.mx/journals/NNJ/conferences/N2004-Diaz.html - beauty in math and arch

beauty in math: https://en.wikipedia.org/wiki/A_Mathematician%27s_Apology

Abstraction in programming is the process of identifying common patterns that have systematic variations; an abstraction represents the common pattern and provides a means for specifying which variation to use. An abstraction facilitates separation of concerns: The implementor of an abstraction can ignore the exact uses or instances of the abstraction, and the user of the abstraction can forget the details of the implementation of the abstraction, so long as the implementation fulfills its intention or specification. (Balzer et al. 1989)

détour par le style de gilles gaston-granger granger_essai_philosophie_style

##### 2.2.1.3 understanding in architecture

habitability (building is clear to move around)

sullivan (building is clear function) / 

alexander vs. eisenman

alexander = softdev, habitable vs. eisenman = hack, subversion

design thinking book: The concept of good in architecture is one which says, among other things, that all architecture must engage its audience. It must foster understanding and be intelligible. This is clearly not the only concept necessarily at work, but it is one that would have broad adherence, across positions.

**Compression** is the characteristic of a piece of text that the meaning of any part of it is “larger” than that particular piece has by itself. This characteristic is created by a rich context, with each part of the text drawing on that context—each word draws part of its meaning from its surroundings. -> [turner on compression](https://journals.sagepub.com/doi/abs/10.1177/0963947006060550?casa_token=HPn7CfCjb3YAAAAA:FhpCdUw1hIDXjsYK9AXOCTk62161RkxMXjoqwSQn0i7-vgsfH0ZYVSiQUl49dkN9amMtPwGdXz0)

**Piecemeal growth** is the process of design and implementation in which software is embellished, modified, reduced, enlarged, and improved through a process of repair rather than of replacement

coburn_vartanian_neuroscience_of_architectural_experience cognition-wise there's not a lot of research yet

downton_knowledge_architecture_science, about bottom up knowledge, rather than strictly top down

gabriel_alexander_search_beauty

lacaton & vassal: establishment of new aesthetics based on new needs

industrial architecture as a parallel with professionalization software developers?

__conclusion__

gandesha_aesthetic_dignity_of_words, praxis in language as a means of knowing, based on adorno's philosophy

## 3 the aesthetics of source code - concrete

ultimately, we highlight a certain number of properties which would be indicative of source code being considered beautiful. these include:  naming, data structures, double-coding, layout, spatial structuring, reader flow, etc.

finally, this section concludes as a recapitulation of how attributes contribute to clarity, by providing a different heuristic than in [2.1]. instead of starting from separate texts and extracting different parts and grouping these parts with others, extracted from other texts, we group our practical and theoretical findings under the umbrellas of several aesthetic features we've identified, and described on which levels they operate.

#### 3.1 - typology of aesthetics

a class within a class [link](https://blog.royalsloth.eu/posts/the-complexity-that-lives-in-the-gui/) is a visual/spatio-mental pattern which means "complexity", "unmaintainability", "unsustainability"

> My personal style guide is to copy Erlang: double quotes for text, single quotes for programmatic strings (atoms/symbols). The single quote is slightly more convenient to type on a qwerty keyboard, but text regularly contains single quotes (apostrophes). It also provides a semantic visual shortcut.

I like the concept of **semantic visual shortcut**, also **semantic compression** (developed [here](https://caseymuratori.com/blog_0015))

cohen_on_holy_wars_and_peace

green_coding_guidelines

hayes_semincolon_wars

hill_what_makes_a_program_elegant

hunt_pragmatic_programmer

#### 3.2 - double-coding / metaphor

use nouns for variables, verbs for functions, try to mimick an abstracted version of the human language (question: what is the limit of that mimicking the human language -cf. `code/render.rb`? what integrity does it have to keep? a possible answer is the **input data** or the **problem-domain**)

##### 3.2.1 - metonymy

as a corollary to metaphor, it's just about implying something with a minimal sign (the *density*, as goodman would say, becomes very high)

#### 3.2.2 - functional distance

basically put your variables where you use them, avoid gotos

#### 3.2.3 - layout

a word on (automated) consistency

#### 3.2.4 - relational independence

abstracts stuff but not too much: it's kinda like the UNIX philosophy, where the goal is to do one thing, but do it well

#### 3.2.5 - lack of cognitive noise/minimalism

like tobi's example of using `select{}` rather than `mtx.Lock()` in `GO`. select is slower but something like `mtx.Lock()` is actually never going to be required in a design document: it's extraneous when wanting to understand what a software *effectively doing*. another example of that is the un-necessity of `diff noise`.

### 3.3 - case studies

finally, this section will confront our set of aesthetic features to several case studies of existing source code. the choice of these case studies will attempt to be as broad and representative as possible (e.g. commercial, functional, hobbyist, artistic), with the aim of using diverse approaches in order to further qualify the aesthetic approaches defined heretofore.

#### 3.3.1 - case study 1 (Latex)

the reason why UNIX is chosen is as a canonical example of low-level, functional programming with a rich social history

do a comparison with UNIX (latex is literate, vs. Unix as minimalist)

#### 3.3.2 - case study 2 (Carnivore)

the reason why react is chosen is because it has aspects of modern development practices (big corp + open source), and that prod vs. dev is an interesting example to build on

#### 3.3.3 - case study 3 (CODE POEMS)

this is taking it in a completely different literary terrain

## 4 - the linguistic influence of source code

in this part, the set of aesthetic features, composed from both empirical observations and theoretical constructions, is re-examined in the light of the linguistic environments as provided by programming languages. after having elaborated a concept of clarity, I will see *if* and *how* programming languages modulate this concept. programming languages will be investigated both as semantic systems, but also as socio-economic systems. by seeing how discourses on clarity vary between programming languages communities, it will be possible to identify such a structural influence and integrate it within our concept of clarity.

### 4.1 - the (programming) language object

this section explores the conceptual definition of a programming language (from a CS and philosophy standpoint), but also the role of language in aesthetics (comparison french vs. german, thomas mann avec ses verbes a la fin)

the question of operational meaning vs. denotational meaning should be explored. what means what to the computer?

crozat_theorie_operationelle_ecriture_numerique -> a bit too high-level, but nice concepts about digital writing/layerings of digital writing (binary-theoretical / technical-applicable/semiotical-rhetorical)

the fact that it's abstract as hell can also be seen as a cultural influence/related to chomsly golumbia_cultural_logic_computation

homem_topics_in_programming_languages

### 4.2 - the programming language ecosystems

each of these sections will highlight both the *paradigms* as well as the *syntactic* features of the main categories of programming languages. the point will be to highlight what they share, and how they differ, and that what they share is a very core concept. how that concept is implemented however differs, which is inherently an aesthetic decision (as we will see with Ruby or Go for instance). this categorical approach will also necessarily include a historical dimension, as well as a discussion of which programming communities gravitate around which languages

vee_coding_literacy, coding_literacies_annette_vee

- notes
- - which aesthetic standards are set by the machine vs. which aesthetic standards are set by human social context?
- - place of the IDE: syntax highlighting, auto complete: material conditions to make materiality disappear

- functional programming
- declarative programming
- object oriented programming
 - esoteric programming
	 - > when we talk about esolangs, we are designing a perspective for someone to think through. -daniel temkin [src](https://www.artistsandhackers.org/Critical-Code)

### 4.3 - meaning in programming languages

this section looks at how language-dependent the previously exhibited features of aesthetics might be affected by it. however, we'll see that this isn't so much a clear distinction as it is a gradient between fully language dependent (and the extreme: hardware dependent—hallo kittler).

procedural rhetoric is just a very high level of programming semantics. processes with meaning assigned to it.  this further extends the gradient.

winograd_language_as_cognitive_process, winograd_flores_understanding_computers_and_cognition, eijick_computational_semantics_functional_programming

syntax vs. semantics?

> There's a lot of attention to **COMPRESSION**, using the underlying programming language in a way that's easy to penetrate - richard gabriel [src](https://www.dreamsongs.com/PoetryOfProgramming.html)

#### 4.3.0 - computer beauty

whether or not the computer understands is not an aesthetic problem, but an engineering problem. **BUT** there are beauties in engineering

#### 4.3.1 - a discussion of "idiomatic"

`TODO` how does it relate to "understanding"?
programming idioms - [c2](https://wiki.c2.com/?ProgrammingIdiom) - [so](https://stackoverflow.com/questions/302459/what-is-a-programming-idiom)

#### 4.3.2 - language-dependent features

language dependent features will be:

- the degree of abstraction/dependency
- the naming of variables
- the socio-economic ecosystem
- conceptual distance

#### 4.3.3 - language-independent features

- uniqueness
- white space and layout
- scope of actions (e.g. just one action at a time)
- double-coding and metaphors

there could be different beauties in writing and in reading (case of Mike's APL) - easier to read vs. easier to type

what is the aesthetic of a semantic system that is supposed to be understood by both humans and machines? **if there is a collapse of both those systems, it hints at the fact that the human becomes machine**

#### 4.3.3 - language as material

from hardware to tokens

when i talk about materiality, i should also contextualize it with other materialities (build processes, hardware, etc)

markers of spatialization:
- `GOTO`
- the trace (stack trace, execution trace) (like ariadne's thread)
- localness allamanis_survey_for_big_code_naturalness_language#patterns	
	- localness is syntactic, non-localness is semantics
- [dangling else](https://en.wikipedia.org/wiki/Dangling_else)

---

## conclusion

in conclusion, i recap the features extracted.

then, i justify how they relate to different traditions of understanding (formal, artisanal, aesthetic), an understanding that is dependent on the social context within which it is executed.

then, i mention how these are affected by programming languages themselves. in doing that, i introduce a larger discussion of how this can relate to human languages and literature.
