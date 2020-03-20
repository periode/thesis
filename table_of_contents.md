# table of contents

## introduction

"with this work we propose to demonstrate the thesis that aesthetics play a *particular* role in understanding code; the previous research has left many questions unanswered, and the data gathered is still insufficient."

in the first chapter, bla

in the second chapter, bla

in conclusion, we will attempt to demonstrate, bla, ble and blu

---

## 1 - the stakes of source code as understandable text

this part will lay out the limits of my object of study, starting from a literature review on specific code studies, and an overview of the best-practices in writing code. from there, I highlight the issue of *understanding* between humans and machines through the medium of source code, as an ambivalent notion which necessitates a symbolic interface. This concept of *understanding* is also understood in the light of the different *fields* of programming practice (professional, amateur (hobbyist+hacker), educational, scientific/academic), fields that will be subject to further definition. This section will conclude in the presentation of the corpus studied and the explanation of the rationale for such a delimitation.

### 1.1 - source code as an object of study (lit review)

this section provides an overview of previous academic research whose object of study is source code. such a research can be divided into three broad categories: within the domain of engineering, within the domain of the humanities, and within the domain of the arts. each of these categories will allow us to identify the *traditions* from within which they operate, along with the main concerns and *interrogations* that arise around source code as an object.

#### 1.1.1 - source code in computer science

we will see that the engineering field focuses much more on either the fine-grained details of software writing, or on the overall thought processes and economic processes which surround it (best practices, design patterns, software management). this section points out in particular that source code *can* and *should* be beautiful.

#### 1.1.2 - source code in the humanities

the humanities, on the other hand, started with focus on a distant, epistemological property of source code (McKenzie, Hayles), to then move into the more precise domain of source code as political expression, as manifestation of politics and as worldmaking, while setting aside the issue of beautiful code (except for paloque berges)

#### 1.1.3 - source code in the arts

the place of source code in the arts is that of the obfuscated object, of the relegated to the background because of all the focus on output. rather than discussions from existing fields integrating source code, we see instead the emergence of *software art*, a new field which takes computational processes as its object. however, never is the beauty of these works related to the source which contributes to them. some works on codeworks and code poetry (sondheim, montfort, temkin) do touch upon software aesthetics

we will see that approaches are all different, but that while arts and engineering mention beauty, it isn't so much the case of the humanities, with a focus rather on cognitive processes and reasoning. this is the hypothesis that is going to be laid out: *beauty is understandability*.

### 1.2 - the problem of understanding in human and machines

this section investigates the main challenge that source code tends to address as a human-machine communication tool

#### 1.2.1 - the computer as a technical apparatus

this section talks about computation, symbolic logic, math and turing and lambda functions and all that beautiful stuff.

#### 1.2.2 - the computer as cognitive apparatus

this section talks about the computer as a cognitive tool, as a way to think (rokeby, wolfram), along the lines of algorithmic thinking, coding literacy. this will highlight the necessity of translating concepts from one frame of mind to another (formal vs. informal)

### 1.3 - the reading and writing of source code (practice of programmers/who are programmers)

this section focuses on the applied practice of describing things to the computer. who does it, how they do it, and how they relate to it. it would particularly focus on the historical/sociological aspect of it, to start highlighting that there might be one concept of computing, but the reality of interacting with and thinking in terms of computation is not unidimensional. it establishes different categories of people writing source code: researchers, academics (teachers+students), professionals, hackers, amateurs and artists.

### 1.4 - the problem of understanding in humans and humans

this section redefines the concept of understanding, not as human to human, and not as human to machine, but as human to machine to human, and highlights some of the hurdles that appear in terms of collectivity vs. subjectivity. it makes the claim that contrary to writing literature, in which writing is potentially public and reading private, writing source code is a private act (as illustrated by passages like weizenbaum, computer boys) and reading it is highly public. because of a change in concept, i would argue that the change in *manifestation* of concept is also necessary.

### 1.5 - the delimitation of the corpus

this section builds on the previous conclusions that programming is a multi-faceted act, and that all of these facets, because of the different mental gymnastics they require, need to manifest in different ways. it seems then obvious that we would need to have as broad and varied of a corpus. however, this corpus needs to be composed of source code that is already "beautiful", in order to extract context-sensitive (i.e. who wrote for whom, etc.) aesthetic attributes.

---

## 2 - the aesthetics of source code

this part is the theoretical mass of the thesis. it is dedicated to the analysis and development of the place of **clarity** in the aesthetics of source code, amongst a larger framework for evaluating beautiful code (cleanliness, simplicity, etc.). this investigation of clarity will proceed in an inductive fashion. I will start first from the statements programmers have made about it, and then qualify those statements with contribution from two approaches: on the one hand, literary studies and aesthetic philosophy, and on the other hand, computer philosophy and epistemology. this definitional work will conclude in the description of a set of aesthetic features which relate in different ways to clarity in source code.

### 2.1 - the discourses of beauty around source code

this section extracts the features that are recurring in the discourses around beauty in source code. it does so by looking at how practical examples and theoretical statements either converge or diverge and how such statements are modulated by the aforeidentified communities. the common point identified, via the subjectivity of writing code, is the concept of the *craft*. ultimately, we highlight a certain number of properties which would be indicative of source code being considered beautiful. these include:  naming, data structures, double-coding, layout, spatial structuring, reader flow, etc.

#### 2.1.1 - functional beauty

this first approach, by comparing both source and comment at the same time (taking texts which are explicitly described as being beautiful), explicitly highlights the requirements for source code to be beautiful. 

#### 2.1.2 - creative beauty

this second approach contrasts with the functional component of the first one, but nonetheless stands in relationship with it. the creative beauty, by defying traditional beauty standards, does help us highlight, through deviance, what the norm is. these texts on "creative beauty" include the classical perl poetry, code poems, IOCC, code poetry contest, etc.

#### 2.1.3 - craft and beauty

this subsection also allow us to introduce the concept of *craftsmanship* and integrate it within a larger tradition of sennett/de certeau/rancière, and connect the practice of programmer to a longer history of craft, a history which in itself has beauty standards `TODO`

### 2.2 -  approaches to clarity in aesthetics and literature

this section justifies the aesthetic framework that is chosen in order to apprehend our body of text. namely, it includes contributions from nelson goodman, kenneth burke, roland barthes, amongst others. perhaps a bit of bakhtin and jakobson and wittgenstein. all in all, it groups together both linguistics and aesthetics in a toolbox which will allow us to further investigate (on a more conceptual level) the elements we've excavated in [2.1.2] and [2.1.3]

#### 2.2.0 - a definition of clarity

`TODO`

#### 2.2.1 - goodman and symbols

looking at the concluding chapters of the *Languages of Art*, the direct contribution of aesthetics to a mode of cognitive understanding will be explicited in the light of source code and serve as a foundational basis for the rest of our study.

#### 2.2.2 - burke and the terministic screen / wittgenstein and the formal-infomal

this section oscillate between the scientific reading/writing of a text and the dramatistic (sic) reading/writing of a text as a useful means of apprehending the dichotomy between formal and informal language plays in source code r/w. additionally, the concept of *terministic screen* (not so far from goffman's frame analysis) will help  us apprehend under which shifting social modes of examination code is being judged.

#### 2.2.3 - barthes and the readerly

this section takes on barthes distinction between the readerly and the writerly text and sets it against the practice of open-source software and the tradition of craftsmanship in order to highlight that pleasure/life is being taken from reading *readable* source code. by looking at additional approaches that barthes has to writerly texts, those which leave room for interpretation, we will be able to identify similarities in source code, first in code structure (modularity), then in code text (conceptual and reader distance) and finally in meta-text, around the **comment**.

#### 2.2.4 - bakhtin and social aesthetics

this section concludes our framework construction by enriching it with a relational component, which, while at least implicit in previous contributions, is here expanded on a more social level. it's hard to separate an exploration of source code aesthetics while side-stepping the heightened features of the social group/s that programmers constitute. it might be possible to consider a piece of source as a "distributed *énonciation*", both towards the computer and the fellow human, but also a "delayed *énonciation*", because it isn't as immediate. and because it isn't immediate, there needs to be an adaptation of the concept of *presence* in craftsmanship; presence, a requisite in craftsmanship, is manifested through aesthetics. (`<-` that indeed tells us *why* we need aesthetics, but doesn't tell us *what* these aesthetics are. a closer reading of craftsmanship/aesthetics sources would however have more weight in light of this necessity for presence)

before transitioning 

### 2.3 - clarity in computer philosophy and science/epistemology

this section explores beauty from the angle of formal logic, `TODO`. the conclusions could either be formal (like when cramer talks about the symmetrical, repetitive patterns of middle-age monks, or commentaries of mathematicians on `e^(i*PI) + 1 = 0`), or conceptual. if they're conceptual, they don't need to come in to the framework right now. the hypothesis is that those findings will confirm the direciton of these initial sets as established in [2.1]

### 2.4 - a set of aesthetic features contributing to clarity in source code

finally, this section concludes as a recapitulation of how attributes contribute to clarity, by providing a different heuristic than in [2.1]. instead of starting from separate texts and extracting different parts and grouping these parts with others, extracted from other texts, we group our practical and theoretical findings under the umbrellas of several aesthetic features we've identified, and described on which levels they operate.

#### 2.4.1 - double-coding / metaphor

use nouns for variables, verbs for functions, try to mimick an abstracted version of the human language (question: what is the limit of that mimicking the human language -cf. `code/render.rb`? what integrity does it have to keep? a possible answer is the **input data** or the **problem-domain**)

##### 2.4.1.1 - metonymy

as a corollary to metaphor, it's just about implying something with a minimal sign (the *density*, as goodman would say, becomes very high)

#### 2.4.2 - functional distance

basically put your variables where you use them, avoid gotos

#### 2.4.3 - layout

a word on (automated) consistency

#### 2.4.4 - relational independence

abstracts stuff but not too much: it's kinda like the UNIX philosophy, where the goal is to do one thing, but do it well

#### 2.4.5 - lack of cognitive noise/minimalism

like tobi's example of using `select{}` rather than `mtx.Lock()` in `GO`. select is slower but something like `mtx.Lock()` is actually never going to be required in a design document: it's extraneous when wanting to understand what a software *effectively doing*. another example of that is the un-necessity of `diff noise`.

---

## 3 - the linguistic influence of source code

in this part, the set of aesthetic features, composed from both empirical observations and theoretical constructions, is re-examined in the light of the linguistic environments as provided by programming languages. after having elaborated a concept of clarity, I will see *if* and *how* programming languages modulate this concept. programming languages will be investigated both as semantic systems, but also as socio-economic systems. by seeing how discourses on clarity vary between programming languages communities, it will be possible to identify such a structural influence and integrate it within our concept of clarity.

### 3.1 - the (programming) language object

this section explores the conceptual definition of a programming language (from a CS and philosophy standpoint), but also the role of language in aesthetics (comparison french vs. german, thomas mann avec ses verbes a la fin)

### 3.1.1 - history and impetus of programming languages

talk a little bit about formal systems, church and lambda, *backus-naur form* notation, etc.

### 3.2 - the programming language ecosystems

each of these sections will highlight both the *paradigms* as well as the *syntactic* features of the main categories of programming languages. the point will be to highlight what they share, and how they differ, and that what they share is a very core concept. how that concept is implemented however differs, which is inherently an aesthetic decision (as we will see with Ruby or Go for instance). this categorical approach will also necessarily include a historical dimension, as well as a discussion of which programming communities gravitate around which languages

#### 3.2.1 - functional programming

#### 3.2.2 - declarative programming

#### 3.2.3 - object oriented programming

#### 3.2.4 - esoteric programming

### 3.3 - the impact of programming languages

this section looks at how language-dependent the previously exhibited features of aesthetics might be affected by it. however, we'll see that this isn't so much a clear distinction as it is a gradient between fully language dependent (and the extreme: hardware dependent—hallo kittler).

#### 3.3.0 - a discussion of "idiomatic"

`TODO` how does it relate to "understanding"?

#### 3.3.1 - language-dependent features

language dependent features will be:

- the degree of abstraction/dependency
- the naming of variables
- the socio-economic ecosystem
- conceptual distance

#### 3.3.2 - language-independent features

- uniqueness
- white space and layout
- scope of actions (e.g. just one action at a time)
- double-coding and metaphors

---

## 4 - an application to existing texts

finally, this section will confront our set of aesthetic features to several case studies of existing source code. the choice of these case studies will attempt to be as broad and representative as possible (e.g. commercial, functional, hobbyist, artistic), with the aim of using diverse approaches in order to further qualify the aesthetic approaches defined heretofore.

### 4.1 - case study 1 (UNIX)

the reason why UNIX is chosen is as a canonical example of low-level, functional programming with a rich social history

### 4.2 - case study 2 (REACT PROD vs. DEV)

the reason why react is chosen is because it has aspects of modern development practices (big corp + open source), and that prod vs. dev is an interesting example to build on

### 4.3 - case study 3 (CODE POEMS)

this is taking it in a completely different literary terrain

### 4.4 - case study 4 (sth by someone)

i would need to find some "everyday code"

---

## conclusion and revision

in conclusion, i recap the features extracted.

then, i justify how they relate to different traditions of understanding (formal, artisanal, aesthetic), an understanding that is dependent on the social context within which it is executed.

then, i mention how these are affected by programming languages themselves. in doing that, i introduce a larger discussion of how this can relate to human languages and literature.
