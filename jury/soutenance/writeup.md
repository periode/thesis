# writeup

## 1. intro

Good morning everyone,

First of all, I would like to thank the members of the jury for being present here and providing the opportunity to discuss my work; I would like to thank Alexandre and Nick for their guidance over these past four years, and finally I would like to thank the audience in the room, for being here.

I will now present the results of this thesis project, focusing on the role of aesthetics in understanding source code. I will go through the establishment of my research questions and the methods I chose to answer these questions, and will then focus the second part of this presentation on my contributions, before concluding on some further research directions.

## 2. beautified vs. uglified

So let’s get right into it. What is the difference between the source code on the left, and the source code on the right?

From a formal perspective, the difference is quite obvious to us. The left side shows white space, full words and overall structure. The right side is a compact sequence of characters that it’s hard to make sense of.

And yet, those two extracts do the exact same thing, except perhaps that the one on the right does it more efficiently. So why do we prefer the one on the left and not the one on the right?

## 3. early questions

More, specifically, what are the conditions of appreciation of source code?

Even though source code and the software that it describes are two sides of the same coin, the criticism and value judgment of software does not seem to be immediately applicable to its textual equivalent. Not only do we not read source code the way we read a novel, but the computer does not read source code the way we do.

## 4. state of the art

To  I surveyed the state of the art of the academic literature on the topics, and a few aspects of exisiting research stood out.

First, while there are several publications from the field of humanities and social sciences on code and software, these were often lacking any actual presentation of source code itself, focusing rather on an abstract conception of code, rather than on individual, instatiated occurences, besides few works within the field of software studies and platform studies.

Second, in the computer science literature, one can find multiple mentions and discussions of aesthetics and source code, not least in Donald Knuth's magnum opus, _The Art of Computer Programming_, or Kernighan's _The Elements of Programming Style_. Here, what we see is the taking for granted of aesthetics in code, and short, pragmatic justifications.

In less academic publications, I also encountered a plethora of discussions and opinions on what is beautiful code, why it's necessary, how you explain it to a non-programmer, etc. Crucially, these discussions often referred to other fields to describe aesthetically-pleasing code.

The gap that I identified here, and that I attempt to fill with this thesis, is a discussion of the aesthetics of source code at the theoretical level, but nonetheless based on empirical observations.

## 5. what are we talking about?

But before we carry on, we also need to clarify what it is exactly we are talking about.

## 6. definition - source code

For source code, the chosen definition focuses mainly on its textual component and its origin as a human creation, and as something that is meaningful both to a human and to a machine.

This means that source code created by a compiler, or by a large language model falls out of the immediate scope of this study,  even though I do have examples of compiler output, such as the example showed previously.

## 7. definition - aesthetics

The definition of aesthetics in this project focuses on sensual perception: one should be able to describe clearly an aesthetic property, insofar as it is something that can be immediately perceived. Aesthetics here are thus the formal manifestations of source code, as opposed to, say, its conceptual strengths.

Within aesthetics, we can also disentangle experiences and judgments. First, the encounter of a particular configuration of sensual properties can elicit a particular stimulus in the person who encounters it (the aesthetic experience), whom in turn decides whether such a stimulus is positively or negatively valued (the aesthetic judgment). __include caroll bibliogrpahy__

Aesthetic here does not exclusively mean beautiful. This allows the scope of program texts to go beyond those that are considered beautiful (implying a sense of excellence), and include weaker value judgments, such as "nice", "pleasant", "pretty", terms that are used under the umbrella of _aesthetics of the everyday_, from John Dewey to Katya Mandoki.

## 8. research questions

- How does source code relate to other aesthetic fields?

As we saw in the literature review, source code tends to be associated to other aesthetic fields. The metaphorical structure of defining _code as..._ is our entrypoint into understanding the properties of source code as a medium supporting aesthetic experiences. Expliciting the parallels made between code and other aesthetic fields, and highlighting the aesthetic properties of these fields themselves would then inform our second research question. The hypothesis here is that the conditions of appreciations of other fields can also apply to source code.

- What does source code have to say about itelf?

Even though other aesthetic fields can help describe different parts of source code, there is also a sense of unity from working in the same medium. I hypothesize an overlap of the different adjacent field to describe aspects of code, and that it is in this overlap that one might find unique properties of source code, properties that subsequently enable specific kinds of aesthetic experiences and judgments.

- How do the aesthetics of source code relate to its function?

Finally, according to Alexander Galloway,code is the only language that _does what it says- why does it matter if the code is ugly, as long as it works? Are these two variables, function and appearance, completely independent? The starting hypothesis here is that no, an aesthetic judgment of code cannot be completely independent of a judgment of how well it functions.

So how did I answer those questions?

## 9. empirical approach

I considered both program texts and commentaries on such texts as the primary source of this thesis.

For the program texts themselves, I focused on a _close reading_ which consists in paying first attention to the specific details of a given text, and subsequently highlighting the context(s) in which these texts exist.

As for the commentaries of such texts, the meta-texts, I used the framework of pragmatic discourse analysis (Schiffrin, XXX; Mullet, XXX). The starting assumption here was that, even though programmers might all use different arguments and different lexical registers, and semantic references, they are still (pragmatically) talking about the same thing: writing nice, good code.

## 10. corpus

In practice, this discourse analysis involved the reading of a variety of sources. In order to distinguish them from secondary source and bibliographical references, they were selected on the basis of object (it should be source code specifically, rather than computing in general), style (commentary or opinion, rather than scientific inquiry.), and medium (not limited to traditional publishing circles, thus including blog posts, forum threads and trade conference talks).

## 11. lexical analysis

The analysis then took place at two levels. At the lexical level, I highlighted the specific words and phrases used by programmers to describe what they consider to be aesthetically pleasing code, noting how it related to the program texts that they offered as an illustration of their point.

From this analysis emerged a specific group positive qualifiers, which tended to revolve around the terms _simple, elegant, clean, robust_. The negative qualifiers tend to focus on messiness, complexity and intuition as factors in an aesthetic experience.

Note that there no mention of adjectives such as “rhythmic, dramatic, touching, dreamy, or dramatic”.

## 10. finding #1 - diversity

At the semantic level, I noted the different fields with which programmers established a parallel in order to clarify what they meant by beautiful code, and thus populating the different ways people make sense of what they read and write under the guise of _code as..._

The immediate consequence of analyzing the corpus was to highlight broad categories of program writers (scientists, engineers, artists and hackers). However, individuals are strictly bound to one category or another, as these categories overlap.

ref: hayes, cultures of code

## 11. software engineers

Software engineers tend to value certain things, and here is was the code looks like

## 12. hackers

Hackers tend to value other things, and here is an example of their code

## 13. poets

Poets tend to value other stuff

## 14. scientists

Scientists (especially other stuff)

There isn't a single aesthetics, or a single way to write and read nice code, but rather diverse approaches.

## 11. finding #1 - aesthetics and understanding

This commonality is that aesthetics in code are tightly related to understanding what the code _does_.

One function of aesthetics might be in arranging source code such that the result of its execution is communicated to others allowing for future maintenance and expansion, or to hint at some larger concepts and ideas beyond their immediate execution result. In any case, there is always a need to communicate ideas from one individual to another—as opposed to, say, elicit self-reflection or sublime physical pleasure. It seems that beautiful code is then both functional code and understandable code. Rather than building a personal interpretation of a text, programmers aim at building a _correct_ interpretation.

<!-- To that end, we can look at style in programming; it doest not operate as individual preference, but rather as collective agreement and identification: we match our peers' style to strengthen group cohesion and facilitate cognitive processing: by not having to readjust mentally to the way in which a program text is written (e.g. braces alignment, naming conventions, architectural choices), access to and focus on the actual function of the program text is greatly facilitated. -->

## friction and obfuscation

We also have to note that, in some practices, the understanding is explicitly hindered, such as in esoteric languages or obfuscation contexts. It can also be directed at other things than the immediate function of the software, such as broad themes in code poetry, or intricacies of hardware in hacking.

For instance, we see here an entry by Brian Westley for the 1988 edition international obfuscated c code contest, where it is not clear what the program does, until we understand (with great deal of effort) that the program computes an approximation of PI, by computing its own circumference.

From these empirical observations, it was then a matter of figuring out _why_ software is hard to understand, and _how_ aesthetics help in this process.

## 12. software as an abstract artifact

First of all, it helps to consider software as an abstract artifact, which is a notion developped by Irmak, and similar to Turner's discussion on computational artifacts. By existing between the realm of abstract ideas and concrete execution, we see a tension that needs to be resolved.

As an artefact, it also needs to refer to the intention of the creator, and the purpose of the creation, two things which, it turns out, ought to be revealed, or at the very lest pointed to, by the reading of source code. The function of a piece of software is indeed connected to the intent of the creator and its purpose.

## 12b software and its associated milieu

__TODO__

here, we talk about how simondon considers technical objects to always be in relation with something else.

What is software in relation with? The machine, the world and the human.

## 12b - theoretical framework - simondon

As for Simondon's contribution, there is an interesting part about his analysis of where aesthetics stand in relationship to technology in our interaction with, and making sense of, the world.

Particularly, in his discussion of the different modes of thoughts, his analysis of the technical mode as that which differentiates, and fragments the world in order to grasp it is contrasted with the aesthetic mode, which totalizes the world in order to make sense of it. And still, a beautiful technical object remains, for Simondon, an object which fits within its associated milieu.

So, if there is a connection between technics and knowledge, and between aesthetics and technics, we can now turn to aesthetics and knowledge.

## 13. theoretical framework - philosophy of aesthetics

Here, Nelson Goodman's theory of the languages of art he argues that it is possible to consider certain symbol systems as a language of art, through a series of conditions. Fulfilling these conditions in turn allow a certain kind communication, one in which examplification, denotation and reference can be more rigourously thought about.

This allows us to consider aesthetics as a kind of epistemology, due to the semiotic specificity of the languages which supports the aesthetic experience.

## fields of reference

So _what_ aesthetics do in source code seems to be clarified at this point, but the question still remains of _how_ they do it. To investigate those mechanisms, I conducted a comparative study of the different fields that code is recurringly being associated with via metaphorical devices, understanding, with Lakoff and Johnson and Paul Ricoeur, that metaphors both reveal and hide features of target domains (the source code) via their comparison with a source domain.

## Code as literature

Code as literature tends to focus on the textual aspect, the phenomenological fact that we _read_ code above anything else. The first parallel made is with poetry, and the ability of poetry to bring the unthinkable into the realm of the thinkable operates a form of _compression_, packing the most meaning into the least amount of lexical tokens. Additionally, we can point to the spatial implications of literature, in particular through Marie-Laure Ryan’s work, and the ability of written prose to suggest mental spaces. __DEVELOP__

And yet, research cognitive neuroscience and in the psychology of pogramming has shown that the neural mechanisms at play when one understands (i.e. reads) source code are not exactly mapped to the the neural mechanisms activating when reading prose. So indeed, code is kind of like text, but not exactly text

__TODO: insert examples of poetry__

## code as architecture

Code as architecture suggests that it is no longer about writing code, but building code.

First, function is an essential component when judging the quality of a building. While there are some categories of buildings that have no function beyond their appearance (pavillions and follies), a building's function, while hard to pinpoint exactly, remains central.

A building's function also depends on how humans use it, how they inhabit it. Here, architecture does not consider a construction not as an abstract plan to be realized, but as a structure to be built up in pieces (or patterns, in the software engineering linguo), then modified through use.

Finally, the role of craft is crucial in how programmers refer to what they do, and how to do it well: it is about being true to the material that you are working with, about putting in the forefront the unspoken/tacit knowledge component that is considered essential to doing something well.

__TODO: insert examples of UML vs. piecemeal raspi__

## code as mathematics

Finally, code as mathematics propose three different kinds of aesthetic experiences.

On one side, beauty in mathematics is split between an appreciation of beauty of the concepts themselves, the mathematical entities (the theorems), and an appreciation of how to demonstrate (or proof) such a concept.

The third approach is when we consider, with Natalie Sinclair, aesthetics as a heuristic. Indeed, the way things look seems to indicate that one is on the correct, or right path towards achieving one's intended goal, and thus serve as a guide for mathematicians to organize their thoughts. In a sense, the better it looks, the truer it is.

So, taking all of these different metaphorical mappings, we can highlight two main ways in which aesthetics and cognition are related in each of these fields, which I call polysemic requirements and structural navigation.

__TODO: insert examples of linked list or refactoring__

## 14. finding #3: polysemic requirement

Starting with the polysemic requirement, we can define it as the need to represent multiple entities alternatively, or simultaneously, nonetheless within the same formal artefact (i.e. the source code file(s)).

One of the complexities of writing software is the need to juggle multiple fields of reference concommitantly. Source code aesthetics offer a resolution to this issue of context-switching, by allowing the compression of meaning from different levels of abstractions, and different domains of reference, either conflating them or clearly delimitating them.

This process of compression relates to expressivity in poetry, enlightenment in mathematics, and the recurring aesthetic ideal of writing "elegant code" in programming, all different ways of saying "doing the most with the least".

In this sense, the formal choice of a specific word, a specific statement or a specific choice of file organization (equivalent to software architecture) can, through a process of double-meaning, evoke multiple things at the same time, from something as basic as `numberOfPlaylists` to denote both an integer and an amount, or the keyword `go` to denote a threaded function call and to evoke a sense of speed of execution.

__INSERT EXAMPLE__

As a means of translating intent between world, machine and human, a carefully chosen word, statement or block, operates under the implicit requirement of meaning mulitple things, while retaining, in the majority of cases, a primarily informational role, all in a highly structured fashion. This structure of information is at the base of the next finding.

## 15. finding #4: navigating structured text

Program texts are not read from top to bottom. Even though software might often have "entrypoints", as the starting instruction for the CPU to operate, the linearity understood by the CPU is very different from the linearity that is generally assumed from the majority of natural language reading practices. As programmers peruse the program text, they need to switch between levels of abstractions, not just in the same location, as we have just seen, but across locations in the program text as well.

What this means is that the formal presentation of program texts enable a situational awareness: at which level of abstraction am I currently operating at? at which level of abstractions are my inputs and outputs operating at? am I currently surrounding a block that is at another level of abstraction? This organization, mainly seen at the statement- and block-level facilitates _conceptual symmetry_: that which does the same thing should look the same.

This situational awareness, or the proper structuring of code to facilitate the location of one's current position in the overall mental model of the software, also implies navigational awareness. Since those texts are more often _dwelled into_ rather than linearly read, meaning that the possbility for the evolution of reader attention is multidirectional, the semantic nature of the syntax, statement and blocks should be flexible enough to be able to make sense from multiple perspectives, all the while being consistent enough to make sense on its own right (which I call _conceptual integrity_).

## 16. summary

In summary, we have highlighted a few different findings.

First, there are multiple aesthetics of source code. While software engineering is, quantitatively speaking, the predominant practice in writing and reading code, practices of hackers, poets and scientists are nonetheless informative by the different fields and perspectives that they summon.

Second, aesthetics mainly facilitate cognition: that is, the formal presentation of a specific language can play a role in the ease of constituting and manipulating the mental model of a given software system.

Third, this cognitive easing is manifested in the process of double-meaning, as specific tokens can denote or connote one of the three main domains of reference involved in the creation of software: the world, the machine and the numan.

And fourth, since a mental model is not grasped in its entierety all at once, aesthetics facilitate the navigation of the program texts, both at the textual and conceptual levels, by creating clear semantic beacons and both delimitating and connecting individual programmed spaces.

I would now like to conclude with a few implications and possibilities for furthering this line of research.

## 17. implication #1 - the mutual dependence of function and form

__TODO rewrite a lot of this__

The aesthetics of an artefact are improved by the functioning of the artefact, and in turn the artefact’s function is highlighted by its aesthetic features.

Discussing an aesthetically pleasing artefact also always implies talking about the purpose for which it is written. It can be immediately functional, by describing correct software, or conceptually functional, by hinting at some concepts, or obscurely functional, by hinting at the puzzle created in the reader's mind by the writer.

Approaching aesthetics as fitness for function, it becomes easier to consider formal arrangements from a utilitarian perspective: making something appear nice or pretty also contributes to its function and thus can be seriously taken into account when assessing the quality of a work, particularly its communicative performance, e.g. what does it have to say, and how well does it say it?

This acknowledgement on the diversity of contexts and the plurality of practices then allows us to reconnect aesthetics to ethics: by taking into account the background, expectations and needs of the reader, one enters into an altruistic relationship of easing a cognitive burden for the next person who needs to engage with the work. If you see nice code, it probably means that someone cared.

## 18. implication #2 - the structure of digital texts

More and more media, from text to sound and video, is now accessed via software, and so the digital substrate of source code can transpire through other media, and thus go beyond a certain kind of basic remediation.

As such, digitally-encoded texts, such as academic publications, technical documentation or electronic literature, can also be subject to some of the aesthetics of source code, transposing concepts of levels of abstraction, conceptual symmetries and integrities and habitability.

As we consider that digital texts might not be read, in the usual sense of the term, but rather multidimensional structures travelled through, explored and inhabited, this opens further possibilities to think about the presentation and modification of digitally-encoded meaning as they contribute to creating mental models in their audience’s minds.

## the point of view of the computer

Finally, I have tried to sketch out an outline as to how one might go about studying diverse excerpts of source code, focusing on similarities as much as on differences, thus firmly grounded in the field of _software studies_ and _critical code studies_.

This suggests an other field of research: rather than looking at computer through the prism of human comprehension, we could look at humans through the prism of computers. What is the worldview of a compiler? What do programming languages have to say about our conceptions of the local and the global? What do we learn about us when we study the source code of an operating system?

These are all research directions that I intend to investigate further, but for now I thank you for your attention, and am looking forward to our discussion.

## 19. conclusion and thanks
