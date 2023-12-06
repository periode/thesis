# writeup

## 1. intro

First of all, I would like to thank everyone in the room, the members of the jury for being present here and providing the opportunity to discuss my work; I would also like to thank Alexandre and Nick for their assistance and guidance over these past four years, and finally I would like to thank the audience in the room, for being here, and for some of you for contributing, knowingly or not, to this research project.

I will now present the results of this research project, focusing on the role of aesthetics in understanding source code. After a short overview of my personal interest in the topic, I will go through the establishment of my research questions and the methods I chose to answer these questions, and will then focus the second part of this presentation on my contributions, before concluding on the implications of this research.

## 2. 250.js

The origin of this PhD is in a weekly assignment that was given to our class in graduate school. The prompt was "write a game in at least 250 lines of code". As a beginner programmer, I asked myself how come the number of lines of source code matters with regards to the quality of the game? It either works or it doesn't, doesn't it?

When I sat down to complete the assignment, I remembered that Balzac was paid for writing a certain quantitative amount of text, and that the Oulipo got qualitative output out of quantitative constraint. The assignment I handed in turned out to be a simple story of boy-meets-girl written entirely in JavaScript, running a bit over 320 lines, an extract of which you can see on the screen here.

## 3. early questions

These inquiries stuck beyond the class, and I started to ask myself some preliminary questions about this status of source code, and particularly the status of its appreciation. Can one write 250 lines the same way Balzac was writing 250 lines? Is it the same kind of text? My gut feeling was that no, programming is not literature. My masters thesis consisted in the design and development in a simulation of political philosophy and, even though I printed out the source code of the game, and even though I found it a gripping tale of individualism, sociability and inter- and intra-group relationship, none of the people who opened that typescript seemed to share that impression.

Which then lead to a second questions: what are the conditions of appreciation of source code? While the code and the software it describes are two sides of the same coin, the criticism and value judgment of software do not seem to be immediately applicable to its textual equivalent.

## 4. state of the art

As I sureveyed the state of the art of the academic literature on the topics, a few aspects of exisiting research jumped to attention.

First, while there are several publication from the field of humanities and social sciences on code and software, these overwhelmingly tended to eschew any actual presentation of source code itself, focusing rather on an abstraction denotation of source code as an idealized entity, rather than instatiated ones. Besides the few works listed here who directly discussed specific texts of source code, most remained at a higher-level of abstraction.

Second, in the computer science literature, one can find multiple mentions and discussions of aesthetics and source code, not least in Donald Knuth's magnum opus, _The Art of Computer Programming_, or Kernighan's _The Elements of Programming Style_. Here, what we see is the taking for granted of aesthetics in code, and short, pragmatic justifications.

Finally, in everyday publications, online, in magazines or in journals, I encountered a plethora of discussions and opinions on what is beautiful code, why it's necessary, how you explain it to a non-programmer, etc. It seemed to be a vibrant topic, if a bit scattered.

So there does seem to be a gap in the research, discussing the aesthetics of source code at the theoretical level, but nonetheless based on empirical observations.

## 5. what are we talking about?

But before we carry on, we also need to clarify what it is exactly we are talking about, and how this framed our approach to our research.

## 6. definition - source code

For source code, we decided to focus mainly on its textual component and its origin as a human creation. Most importantly, this means that source code created by a compiler, or by a large language model falls out of the immediate scope of this study,  even though I do have examples of compiler output (such as in listing XXX __show in slide__) to illustrate the aesthetic difference with human-written code.

## 7. definition - aesthetics

As for aesthetics, I focused on an approach faithful to the sensual component of the concept: one should be able to describe clearly an aesthetic property, insofar as it is something that can be immediately perceived. Aesthetics here are thus the sum of all formal manifestations of source code, as opposed to, say, its conceptual strengths (this implies, as I mention in the work, that works of software art can have very ugly code).

Two implications of this definition of aesthetics is that they involve aesthetic experiences and value judgments. First, the encounter of a particular configuration of sensual properties can therefore elicit a particular stimulus in the person who encounters it, whom in turn decides whether such a stimulus is positively or negatively valued.

Second, I intended as much as possible to separate the term beauty from the term aesthetic. This allows the scope of program texts to go beyond those that are considered beautiful, and include weaker value judgments, such as "nice", "pleasant", "pretty", terms that are used under the umbrella of _everyday aesthetics_.

## 8. more refined questions

So with this review and these definitions, I arrived at these research questions.

- How does source code relate to other aesthetic fields?

As my first imagination of source code as a novel showed, source code tends to be associated to other aesthetic fields. The metaphorical structure of defining _code as..._ is an entrypoint into understanding the properties of source code as a medium supporting aesthetic experiences. Expliciting the parallels made between code and other aesthetic fields, and furthermore highlighting the aesthetic properties of these fields themselves—that is, describing the specific aesthetic possibilities of configurations of each fields—would then inform our second research question.

- What does source code have to say about itelf?

The intent here is to examine not just the impressions of what individuals have of source code, but the reality as embodied and instantiated in particular texts and contexts. This question therefore intends to be balancing plurality and similarity: plurality in the sense that I acknowledge _a priori_ the diversity of the manifestations of code (from hobbyists, to researchers, engineers to hackers), there is also a sense of unity from working in the same medium. From the first question, I hypothesize an overlap of the different adjacent field to describe aspects of code, and that it is in this overlap that one might find essential properties of source code, properties that subsequently enable an aesthetic experience.

- How do the aesthetics of source code relate to its function?

Finally, while the previous question has hints of autotelism, I also intended to come back to my original questions: why does it matter if the code is ugly, as long as it works? Are these variables, function and appearance, completely independent? The starting hypothesis here is that function tends to be an important component to aesthetic appreciation, insofar as a program text which cannot be understood by the machine (i.e. is not parsable, or is buggy) will be negatively affected in an aesthetic judgment.

So how did I answer those questions?

## 9. empirical approach

The first part of our approach was to focus on concrete instances, of both source code, but also commentaries of such source code. I therefore considered both program texts and commentaries on such texts as the primary source of this thesis.

For the program texts themselves, I focused on a _close reading_, according to I.A. Pritchard, which consists in paying first attention to the specific details of a given text, and subsequently highlighting the context(s) in which these texts exist. If I were to write about source code, I decided that my approach would necessarily entail reading source code. A converse approach, _distant reading_ has been particularly particularly used in studying computational definitions of aesthetics in source code, mostly by data mining large code bases to identify statistical patterns. (__to check__)

As for the commentaries of such text, I used the framework of pragmatic discourse analysis (Mullet, XXX). The starting assumption here was that, even though programmers might all use different arguments and different lexical registers, and semantic references, they are still (pragmatically) talking about the same thing: writing nice code. This pragmatic approach builds on the functional component of software: software can be working or buggy, and to be working is, in a large majority of configurations, the most important requirement to assess its quality. If everyone agrees that software should have a functional state, it is possible that everyone also agrees that software could elicit positive aesthetics experiences, and subsequently write about how to achieve the conditions for such aesthetic experiences and why (__to rewrite?__)

In practice, this discourse analysis involved the reading of a variety of sources. Specifically, we have gathered 47 different online sources, from forum discussions to blog posts, 26 journal articles from the Association for Computing Machinery, 20 monographs and 1 edited volume, which can in the bibliography. In order to distinguish them from secondary source and bibliographical references, they were selected on the basis of object (it should be source code specifically, rather than computing in general), style (commentary or opinion, rather than scientific inquiry.), and medium (not limited to traditional publishing circles, thus including blog posts, forum threads and trade conference talks).

The analysis then took place at two levels. At the lexical level, I highlighted the specific words and phrases used by programmers to describe what they consider to be aesthetically pleasing code, noting how it related to the program texts that they offered as an illustration of their point.

At the semantic level, I noted the different fields with which programmers established a parallel in order to clarify what they meant by beautiful code, and thus populating the different ways people make sense of what they read and write under the guise of _code as..._

## 10. finding #1 - diversity

This empirical approach led to the first finding of this research: there isn't a single aesthetics, or a single way to write and read nice code, but rather mutliple and diverse ways.

And yet, just because one can establish broad categories of program writers (as you see on the slide, the four main categories I came up with are scientists, engineers, artists and hackers), it does not mean that individuals are strictly bound to one category or another. Rather, particular ways of doing and ways of seeing might stem from one of those categories, but might also coexist within the same program text of another category.

For instance, we see here the source code from the Kirby CMS, which is overwhelmingly aligned with ideals of proper software engineering, and yet involve hacker practices, such as in this piece of client-side code. Throughout our corpus, we can encounter overlaps of these practices, suggesting that there seems to be enough commonality between these different practices to co-exist.

## 11. finding #2 - aesthetics and understanding

This commonality is the second finding: aesthetics in code are, in the very large majority of cases, here to help the reader understand the code, to grasp what the function of a section of the software is.

Taking a cue from Roland Barthes's distinction between the readlerly text and the writerly text, between one which should be read and one which should be modified, we can locate most source code within the realm of artefacts which will be adapted by their users.

For instance, style in programming is not understood as individual preference, but rather as collective agreement and identification: we match our peerss' style to strengthen group cohesion and facilitate cognitive processing: by not having to readjust mentally to the way in which a program text is written (e.g. braces alignment, naming conventions, architectural choices), access to and focus on the actual function of the program text is facilitated.

One function of aesthetics might thus be in structuring various pieces of code such that their organization is robust and communicated to others such that it allows for future maintenance and expansion. Another might be writing lines of code in a certain way in order to hint at some larger concepts and ideas beyond their immediate execution result such as in hacking or code poetry. In any case, these domains are all mentioned in their ability to vehiculate ideas from one individual to another—as opposed to, say, elicit self-reflection or sublime physical pleasure. It seems that beautiful code is then both functional code and understandable code.

In some practices, the understanding is explicitly hindered, such as in esoteric languages or obfuscation contexts. It can also be directed at other things than the immediate function of the software, such as broad themes in code poetry, or intricacies of hardware in hacking. Nonetheless, there is a clear articulation around, or against, the need for understanding. 

In order to further develop how exactly aesthetics facilitate or hinder the comprehension of a computer system, I then turned to theoretical frameworks in philosophy of computing, and philosophy of aesthetics in order to provide a backbone to this empirical finding.

## 12. theoretical framework - philosophy of technique

The first useful contribution of the philosophy of computer science was to establish the extent to which software, and the source code that shadows it, is a complex object. Going beyond the (lively) discussions of what software actually is, and what cognition actually is (the contemporary history of artificial intelligence as the sub-discipline attempting to implement comprehension is a useful example of the pitfalls one can encounter in the process). There are two particular points that I would like to highlight here: first is the description of software as an _abstract artifact_, and second is Gilbert Simondon's discussion of the connections between aesthetics, technology, philosophy and religion as means of making sense of the world.

Software as an abstract artifact, a notion developped by Irmak, and similar to Turner's discussion on computational artifacts, highlights the tension at the root of source code. By existing between the realm of abstract ideas and concrete execution, we see a tension that needs to be resolved. For instance, such tension might be between the concept of a circle and the practically impossible task of figuring out the floating-point representation of PI. Besides such tension, the other aspect which I found interesting was that of the artefact, insofar as it refers to the intention of the creator, and the purpose of the creation, two things which, it turns out, ought to be revealed, or at the very lest pointed to, by the formal configuration (that is, the aesthetics) of source code. The function of a piece of software is indeed connected to the intent of the creator and its purpose. Further more, it also allows us to make sense of some of the thematic references we found in our discourse analysis.

An illustration of software as an abstract artifact can be seen in this illustration. __INSERT ILLUSTRATION__

As for Simondon's contribution, I found an interesting part about this analysis of where aesthetics stand in relationship to technology in our interaction with, and making sense of, the world. __TO BE DEVELOPED__

bla bla what is this going on?

This transitions nicely with another way to connect understanding and aesthetics, this time from the perspective of aesthetic philosophy.

## 12b. theoretical framework - philosophy of aesthetics

Here, I mostly used Nelson Goodman's theory of the languages of art, in which he argues that it is possible to consider certain symbol systems as a language of art, through a series of conditions. These conditions in turn allow a certain kind communication, one in which examplification, denotation and reference can be more rigourously thought about.

Rather than just describing a certain class of syntactic systems, Goodman helps us understand _how_ a particular syntactic system can communicate concepts, and can thus become a semiotic system. Particularly helpful was Goodman's sometimes cheeky criticism of the split between the two cultures, the divide between the sciences and the arts, and the assumption that the former can help learn complex concepts, while the latter is only good for entertainment and amateur enjoyment.

Finally, this branch of analytic philosophy further considers aesthetics as a kind of epistemology, due to the semiotic specificity of the languages which supports the aesthetic experience. If we consider, with Noël Carroll, that there are multiple kinds of aesthetics appreciations (emotional, value, cognitive), the aesthetics of source code seem to be mainly rooted in a cognitive appreciation of the aesthetic object, even if we do also encounter value-based adherence.

Ultimately then, these frameworks reinforce the notion that the role of aesthetics in source code is mainly to make the abstract artifact that it represents textually easily graspable, with software being able to represent multiple things, depending on which __levels of abstraction__ one operates at (hardware, problem domain, language, intent).

So what aesthetics do in source code seems to be clarified at this point, but the question still remains of _how_ they do it. To investigate those mechanisms, I conducted a comparative study of the different fields that code is recurrengly being associated with via metaphorical devices.

## 13. where is the overlap in the lexical references?

So not only are there different kinds of writing code, there are also different ways of referring to code. 

Code as literature tends to focus on the textual aspect, the phenomenological fact that we _read_ code above anything else. Indeed, I myself have referred to code in terms of _close reading_ or _distant reading_, drawing on thise first assumptions. And yet, research cognitive neuroscience and in the psychology of pogramming has indeed shown that the neural mechanisms at play when one understands (i.e. reads) source code are not exactly mapped to the the neural mechanisms activating when reading prose. So indeed, code is kind of like text, but not exactly text. Finally, the parallel with poetry, and the ability of poetry to bring the unthinkable into the realm of the thinkable operates a form of _compression_, packing the most meaning into the least amount of lexical tokens.


Code as architecture brings a series of additional perspectives when it comes to no longer writing code, but building code. Among these, we can point to three main aspects of architectural aesthetics: function in modernist architecture, habitability in piecemeal growth and craft in the process of building. The parallels operated with source code thus directly involve function as a parameter to inform the aesthetic judgment of a building—that is, whether a building can only be judged on how well it performs its function, or whether these two judgments are independent. In our case, this parallel is helpful in that it highlights the role of structure, and whether or not one considers this structure inhabited by humans. This aspect of dwelling is a second part, in which we consider a construction not as an abstract plan to be realized, but as a structure to be built up in pieces (or patterns, in the software engineering linguo) from the ground-up, and resulting in direct engagement with the process and goal of construction. Finally, the role of craft is crucial in how programmers refer to what they do, and how to do it well: it is about being true to the material that you are working with, about putting in the forefront the unspoken/tacit knowledge component that is considered essential to writing code, and perhaps pointing more towards the human than towards the machine.

Finally, code as mathematics, might historically be the most obvious, as computer science, a related field to programming, inherits directly from mathematics. Here, there are two useful comparisons made: on one side, beauty in mathematics is split between an appreciation of beauty of the concepts themselves, the mathematical entities (for instance, the majority of mathematicians agree that Euler's identity __include slide__ is one of the most beautiful mathematical concepts, and an appreciation of how to demonstrate (or prove) such a concept. Another interesting aspect is considering, with Natalie Sinclair, aesthetics as a heuristic. Indeed, the way things look seems to indicate that one is on the correct, or right path towards achieving one's intended goal. In a sense, the better it looks, the truer it is.

__TODO: where to put the nice table?__

There are two main aspects that we can get from these different approaches, and the way that aesthetics and cognition are related in each of these fields, which I call polysemic requirements and structural navigation.

## 14. finding #3: polysemic requirement

Starting with the polysemic requirement, we can define it as the need to represent multiple entities alternatively, or simultaneously, nonetheless within the same formal artefact (i.e. the source code file(s)).

We have seen that one of the complexities of writing software is the need to juggle multiple fields of reference concommitantly. Source code aesthetics offer a resolution to this issue of context-switching, by allowing the compression of meaning from different levels of abstractions, and different domains of reference, either conflating them or clearly delimitating them. In this sense, the formal choice of a specific word, a specific statement or a specific choice of file organization (equivalent to software architecture) can, through a process of double-meaning already pointed out in our literature review, evoke multiple things at the same time, from something as basic as `numberOfPlaylists` to denote both an integer and an amount, or the keyword `go` to denote a threaded function call and to evoke a sense of speed of execution.

This process of compression relates to expressivity in poetry, enlightenment in mathematics, and the recurring aesthetic ideal of writing "elegant code" in programming, all different ways of saying "doing the most with the least". Being able to compress wide semantics into narrow syntax is a recurring way in which an aesthetic experience can be offered to a reader, and in which a positive aesthetic judgment can be given.

As a means of translating intent between world, machine and human, a carefully chosen word, statement or block, operate under the constraint of polysemioticity, while retaining, in the majority of cases, a primarily informational role. This structure of information is at the base of the next finding.

## 15. finding #4: navigating structured text

Hardware computers rely on highly quantized, pattern-based information in order to execute commands. This fundamental reliance on structure translates at higher levels of abstraction, as we move from bits to assembler and programming languages. What this means, is that it's very hard to write structureless code, the way one would write, say certain works of Claude Simon, Beckett or Joyce. That is another aspect which program texts share with architecture: it's quite hard to make a building without structure.

Program texts are not read from top to bottom. Even though software might often have "entrypoints", as the starting instruction for the CPU to operate, the linearity understood by the CPU is very different from the linearity that is generally assumed from the majority of natural language reading practices. As programmers peruse the program text, they need to switch between levels of abstractions, not just in the same location, as we have just seen, but across locations in the program text as well.

What this means is that the formal presentation of program texts enable a situational awareness: at which level of abstraction am I currently operating at? at level of abstractions are my inputs and outputs operating at? am I currently surrounding a block that is at another level of abstraction? This organization, mainly seen at the statement- and block-level facilitates _conceptual symmetry_: that which does the same thing at the same level should look the same.

This situational awareness, or the proper structuring of code to facilitate the location of one's current position in the overall mental model of the software, furthermore implies navigational awareness. Since those texts are more often dwelled into rather than linearly read, meaning that the possbility for the evolution of reader attention is multidirectional, the semantic nature of the syntax, statement and blocks should be "_liberal in what they accept, and conservative in what they offer_". In other words, it should be flexible enough to be able to make sense from multiple perspectives, all the while being consistent enough to make sense on its own right (which I call _conceptual integrity_). 

A final thing should be said about this finding, which is a limitation I which I would like to investigate further, is the role of the writing/reading software in the aesthetic judgment of code: beyond automating indentation and syntax highlighting, contemporary integrated development environments enable more interactive epistemic actions which the structure of the code, and easier refactoring operations, which might shift the weight given to the attention to particular aesthetic features.

## 16. summary

In summary, we've highlighted a few different findings.

First, there are multiple aesthetics of source code. While software engineering is, quantitatively speaking, the predominant practice in writing and reading code, practices of hackers, poets and scientists are nonetheless informative by the different fields and perspectives that they summon.

Second, aesthetics mainly facilitate cognition: that is, the formal presentation of a specific language can play a role in the ease of constituting and manipulating the mental model of a given software system.

Third, this cognitive easing is manifested in the process of double-meaning, as specific tokens can denote or connote one of the three main domains of reference involved in the creation of software: the world, the machine and the numan.

And fourth, since a mental model is not grasped in its entierety all at once, aesthetics facilitate the navigation of the program texts, by creating clear semantic beacons and both delimitating and connecting individual programmed spaces.

I would now like to conclude with a few implications and possibilities for furthering this line of research.

## 17. implication #1 - contextualizing aesthetics

The most immediate, and obivous, implication of this research is therefore an extension, and thus a pluralization of the contexts in which an aesthetic judgment can be made. It contributes to research in the field of cognitive aesthetics, arguing that there is a need for a particular kind of skill and practice to appreciate aesthetically.

In this sense, this works contributes to highlighting a plurality of practices rather than the dominance of a medium on the kinds of experiences and judgments when it comes to aesthetics. In this context, it makes more sense to talk about codes in the plural, contextual sense than code in the singular, abstract sense. Talking about beauty thus implies talking about the skill of the writer and the skill of the reader, the timeframe in which the artefact is supposed to exist, the codebase in which the artefact is supposed to exist, the language in which it is written, and ultimately the purpose for which it is written.

This acknowledgement on the diversity of contexts and the plurality of practices also allows us to reconnect aesthetics to ethics: by taking into account the background, expectations and needs of the reader, one enters into an altruistic relationship of easing a cognitive burden for the next person who needs to engage with the work. If you see nice code, it probably means that someone cared.

## 18. implication #2 - the mutual dependence of function and form

Our second implication concerns the relation between form and function is particularly interesting in the context of source code, and could potentially be extended to a broader class of artefacts.

This work is an argument against a strictly disinterested, emotional conception of aesthetics, and suggests that what something looks like and what something does ought to be considered in a tight connection. Specifically in source code, we have shown that, ultimately, aesthetic appreciation is strongly contingent on the function: whether that function is correct, obfuscated, or _détournée_, a judgment only take place with function as an implicit standard: formal arrangements of source code benefit greatly in their aesthetic value from working.

As we conclude towards an appreciation of aesthetics as fitness for function, it becomes easier to consider formal arrangements from a utilitarian perspective: making something appear nice or pretty contributes to make it good in this different, functional domain and thus can be seriously taken into account when assessing the overall quality and performance of a work, particularly its communicative performance, e.g. what does it have to say, and how well does it say it?

## 19. implication #3 - the structure of digital texts

The material of digitally encoded text can be extended beyond the strict realm of source code, and we could take some of those implications in the broader field of digital writing, transposing concepts of levels of abstraction, conceptual symmetries and integrities and habitability in overtly functional and epistemological documentations, such as technical documentation or textbooks. Particularly, this contributes to our way of thinking about medium-specificity of software, and remaining aware of where this digital substrate can transpire through other media, and thus go beyond a certain kind of basic remediation.

Finally, I have tried to sketch out an outline as to how one might go about studying diverse excerpts of source code, focusing on similarities as much as on differences, thus firmly grounded in the field of _software studies_ and _critical code studies_. By developing further methodological and analytical tools, this suggests an other field of research: rather than looking at computer through the prism of human comprehension, we could look at humans through the prism of computers. What is the worldview of a compiler? What do programming languages have to say about our conceptions of the local and the global? What do we learn about us when we study the source code of an operating system?

These are all research directions that I intend to investigate further, but for now I thank you for your attention, and am looking forward to our discussion.

## 20. conclusion and thanks
