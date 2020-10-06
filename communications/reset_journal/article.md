# discursive strategies in style guide negotiations on github

## introduction

Written and published in 1983 on a Usenet board, The story of Mel, the Real Programmer[1] recounts the tale of Mel Kaye, an individual who wrote software on the 1959 ACT-1 compiler and has become a recurring reference in programmer's lore[2]. The moral of the story focuses on Kaye's ability to write both excellently efficient and completely inscrutable code. This obfuscating aspect of a code that only its writer can read, while being considered in this context a laudable feature of model programming work and informing ideals of programmers, slowly began to phase out in the 1970s. With the growth of the commercial software market[3], more and more private companies started to constitute what is today a large part of the technology industry, composed of teams of multiple programmers working on the same codebase on the long-term. This evolution, from the individual programmer implementing ad hoc and personal solutions to a group of programmers coordinating across time to build and maintain large, distributed pieces of software, brought the necessity to harmonize and standardize how code is written. In response, style guides started to be published to normalize the visual aspect of source code, and became a recurring topic in both the software development and computer science research[4]; particularly, debates about programming style implementations and best practices have remained significant, if under-examined, parts of a given programmer's practice in a commercial context.

In light of this tension between individual technical prowess and the social existence of source code, this article examines the production and communication processes involved in the construction of styleguides for the JavaScript programming language within contemporary software development environments. Specifically, it looks at the discursive techniques deployed to negotiate the adoption of styleguides within a particular socio-technical environment—the collaborative development platform GitHub. While style guides and written documents have been enforced in formal, more traditional professional institutions[5], the GitHub development platform presents a couple of specific aspects. As the most popular repository of open-source software, it is the locus of semi-formal participation and enables by default the copying and modifying any document (a process known as forking). Large-scale private companies interact with distributed non-profit organizations and individual contributors in order to collaborate on software products, both free of charge and for-profit, which can then be modified seamlessly by other users of the platform. While GitHub is organized around self-contained software components, style guides are concerned with programming languages and aim at enforcing behaviour across projects. These discussions therefore cut across projects and applications to involve the aforementionned multiplicity of actors.

JavaScript is today both one of the most popular programming languages on GitHub, used by both amateurs and professionals alike. However, the language itself lacks a clear, original style standard, and therefore has been the subject of various discussions on what a style guide should enforce and how it should enforce it, relative to other languages. The discussions taking place on the GitHub platform therefore represent a wide variety of opinions, skill levels, and institutional belongings. In this context, this article aims at investigating *which discursive strategies are used by contributors around the formation of style guides? Furthermore, how are those strategies affected by the specificity of a socio-technical environment such as GitHub? How are users of these style guides defined and taken into account in these negotiations?* The answers to these questions will help further qualify the nature of linguistic exchanges in a complex, digital-first, working environment and uncover the arguments and attitudes towards practices in software development.

To do so, I propose to look at the discussions happening on three GitHub repositories, each representing different approaches to style guides. From least-open to most-open, they include the JavaScript style guide as published by the Airbnb company[6], the popular, independent StandardJS[7] and the exclusively format-oriented Prettier[8]. Building on previous critical discourse theory as applied to open-source discussions (Berry, 2006), these three repositories, their issues, pull requests and forks, will highlight the language deployed both from the maintainers, the contributors and the users and how different discursive approaches are used to justify arbitrary formal choices (e.g. single quotes vs. double quotes) through didactic approaches to non-arbitrary ends (code interoperability between teams) to improve productivity.

In the first part, I will address the origin of style in programming and, consequently, the need for style guides in contemporary, commercial programming practices, inscribing it further into both the sociology of style and the sociology of organizations. In particular, I will highlight continuities and breaks between style guides for human languages and style guides for programming languages, specificaly in terms of objective efficiency and subjective perception. Building on this dichotomy, the second part of this article highlights the specific technical intermediary objects[9] involved in those discussions and implementations, which exist in this field at both a macro- and micro-level. Both GitHub and linters are significant components of the creation and implementation of style guides and will thus occupy a central role in this analysis. After developing on the research methods used in this study, which are centered qualitative discourse analysis of issues and pull requests, I will develop on the findings of this research, summing up discursive and structural differences between the three targeted repositories. I will conclude by focusing on the place of tools, read-only documents and read-write documents, as well as invisible communities, in the development of style guides and how these can inform our understanding of daily programming practices.

### the need for style in programming

The problem of style is a problem which echoes Simmel's statement regarding the observation that "the practical existence of humanity is absorbed in the struggle between individuality and generality"[10]. Simmel's investigation on style, which will serve as the foundation for our definition of style, focuses on works of fine art, but his study applies equally to works of craftmanship, in particular as detailed by Ruskin. Indeed, Simmel draws a distinction between works of fine arts, displaying the idiosyncracy of its maker, and works of fine arts, industrially produced and replicated, between which the copy cannot be told apart from the original. The work of fine art, according to him, is "a world unto itself, is its own end, symbolizing by its very frame that it refuses any participation in the movements of a practical life beyond itself", while the work of applied arts only exists beyond this individuality. While these two kinds of work exist at the opposite extremes of a single continuum, the work of craftsmanship exists in between, as a repeated display of its maker's subjectivity, destined for active use rather than passive contemplation[11]. So while style can be seen as a general principle which either mixes with, replaces or displaces individuality, programming style doesn't stand neatly at either extreme. **conclude with a definition of style**.

Source code, as the product of programming work, finds some of its roots in craftmanship, as a practice both analyzed by scholars[12] and claimed by practicioners[13]. Programming work has developed since the 1950s from an invisible labour to a fully organized and codified practice, through individual, glorified work. While computers were originally referencing female clerks implementing male mathematicians' algorithms on mainframe computers[14], the development of programming as a recognized practice brought about with it the figure of the individual programmer, equally obsessed and talented[15], echoing the portraits of the genius artist in the Renaissance[16]. This individual, free-form implementation of specific computational problems came to an end with the rise of commercial software, and led to a re-examination of the practices and processes of software developers. This re-examination was spearheaded by the work of Edsger Dijkstra whom, in his 1972 publication of *Notes On Structured Programming*[16], set forward clear practices for writing source code which would be meant to achieve two aims: be readable by someone else than the original author, as well as being more reliable and error-free[17].

The emergence of style in computer programming is therefore concomitant of the development of the software industry. A self-proclaimed highly complex undertaking[18], the understanding of source code by someone who hasn't written it (or, being the writer, hasn't read it in a while) quickly showed itself to prove difficult; as a response, corporate literature rose in order to serve as a reference for best practices. This phenomenon of explicitly written rules, dependent no longer on their writer, but rather on the organization to which the writer belongs, echoes the formalization of knowledge as it happened during the transition of societies from oral communication (and their constituting organizations) to a written one[19]. Additionally, the written codification of hitherto implicit, idiosyncratic rulesets, has had the result of further preventing modification of said rules, and elevating them from a "personal" reach to a "universal" one. However, the technical context fort those studies of the impact of literacy is that the written word, once put down, is significantly harder to modify than the spoken word. The digital word, the word stored on and communicated via computers, however presents differences from either its oral or written counterpart. First, it can be as easily modified as it can be retrieved. Since one of the basic operations of the computing machine is the act of copy and the act of retrieval, it is important here to remember that anything that can be said on a digital medium always holds within itself the possibility of variation[20], illustrated on the most obvious-level by the ubiquity of "copy and paste" actions offered as a default by any word processor application on a modern computer. Second, source code written in programming languages is *executable*. This means that, beyond the linguistic act of writing a statement, this writing is automatically executed and enforced, without stating the need for personal or social performance as a requirement. So while written code still exists within "chains of acts of writing"[21], once its validity has been confirmed and merged into active code bases, its enforcement is significantly easier than that of guides and protocols written in human languages.

Along with the low barrier to reproducibility and enforceability of code, a second difference between organizations centered primarily on machine languages and organizations in which code only constitutes a technical background is the porosity of the distinction between public and private.

Now comes the paragraph on the sociology of work, how language and writing is important in it, but also how OSS is actually different because everyone can fucking do what they want.

- ~~simmel and artistic style~~
- - ~~talks about how style has an inherent tension between individual and group~~
- - our focus on style as a group action (both rancière & standardjs)
- connect to organizational style, communication, etc.
- - add reference to the CNRS book
- introduce the style guide

- development of programming as a profession in the 1960s (djikstra)
- - ~~moving from an obfuscated practice (women computers)~~
- - ~~to an esoteric practice (the art of programming)~~
- - to a large group practice (GOTO, clean code, mythical man-month)

- the readerly and the writerly in barthes
- - the necessity to be able to write when you read (the assumption that, when you read, you will write)
- - opportunity to highlight a separation between barthes' conception of style (individual, meaningful, etc.) as opposed to the "langue": common, archaic

- finally, programming is hard as fuck
- - the need to understand mental structures is complicated enough that we invented high enough languages to deal with those problems

### the style guide as an object

- description of the style guide
- - reference document about both syntax, with references to a need for *readability* (skimming a text) and *clarity* (deep-diving a text)
- goody and literary organization of social life
- - develop on how the style guide embodies administrative work

### the ecosystem of programming

- github
- linters
- - linters as *objets intermediaires* (multiple facets)
- - the connection with actor network theory

## research methods

- qualitative
- discourse analysis
- franekel

## locus of research

- on github
- - explain the difference between the three repo chosen
- - - same language
- - - different approaches (airbnb: internal dev + explanations, standard: external dev + multiple necessities, prettier: only style, uncertain document)
- outside github (additional texts)

## analytical categories

- emotional justification
- rational justification
- technical justification

- socio: founding texts
- socio: community/project
- technical: the functional

## findings

- objects are multifaceted and entangled/entangling
- personal preferences (means) can always be subsumed by calls to "efficiency" and "precedence" (reference to a canonical document)
- calls to "fork" are always the conclusion of an argument
- github issues can have multiple functions (pedagogical, antagonistic, reporting)

## conclusion

- sum up

in the end it's affected by github's:

- forum mechanism
- cross-reference across repos
- ability to fork

---

[1]:
Nather, Ed (2003-09-12) [1983-05-21], The story of Mel, a Real Programmer, FOLDOC

[2]:
https://www.gewina-studium.nl/articles/abstract/10.18352/studium.1459/

[3]:
ref needed

[4]:
ref needed

[5]:
ref needed -  formal institutions (goody?)

[6]:
https://github.com/airbnb/javascript

[7]:
https://github.com/standard/standard

[8]:
https://github.com/prettier/prettier

[9]:
objets intermediaires

[10]:
simmel, the problem of style

[11]:
ruskin, seven lamps

[12]:
sennett, the craftsman

[13]:
clean code, martin

[14]:
wendy huy kyong chun

[15]:
computer power and human reason

[16]:
the lives of artists

[17]:
djikstra

[18]:
ref needed

[19]:
goody

[20]:
manovich

[21]:
frankel, 2006