# discursive strategies in style guide negotiations on github

## introduction

### incipit

- the tale of *the real programmer* who could speak with the machine
- - the tension between artistic skill and group coordination
- - the answer is a style guide to make everyone agree, but even that proves to be complicated

The story of Mel, the Real Programmer[1] is one of the myths in the discipline of programming. Written and published in 1983 on a Usenet board, it recounts the tale of Mel Kaye, an individual who wrote software on the 1959 ACT-1 compiler and has become a recurring reference in programmer's lore[2], partly due to Kaye's ability to write both excellent and inscrutable code. This obfuscating aspect of a code that only its writer can read, while being considered in this context a laudable feature of model programming work, and informing ideals of programmers, slowly began to phase out in the 1960s. With the extension of the market for commercial software[3], more and more companies started to constitute what is today a large part of the technology industry, composed of teams of multiple programmers working on the same codebase. This mutation, from the individual programmer implementing ad hoc and personal solutions to group coordination to build and maintain large, distributed pieces of software, brought with it a necessity to harmonize and standardize the way in which code is written. Today, style guides and style guidelines are a recurring topic in both the software development and computer science research[4]; particularly, debates about programming style implementations and best practices remain significant, if under-examined, parts of a given programmer's practice in a commercial context.

In light of this tension between individual technical prowess and the social existence of source code, this article examines the production and communication processes involved in the construction of styleguides within contemporary software development environments. Specifically, it looks at the discursive techniques at play to negotiate the adoption of styleguides within a particular socio-technical environment—the collaborative development platform GitHub. While style guides and written documents have been enforced in formal, more traditional professional institutions[5], the specificity of the GitHub development platform, as the most popular repository of open-source software, is the locus of semi-formal participation. Large-scale private companies interact with distributed non-profit organizations and individual contributors in order to collaborate on productive (both free of charge and for-profit) software products. Because style guides concern first and foremost programming languages rather than programming products, these discussions cut across projects and applications to involve this multiplicity of actors. In this context, this article looks at how these different actors interact in the production and maintenance of style guides within the more specific context of the JavaScript language.

Due to its history, JavaScript is today both one of the most popular and one of the most flexbile programming languages, used by both amateurs and experts alike. Due to its lack of clear, original style standard, it has been the subject of the most recent discussions on what a style guide should enforce and how it should enforce it, and the discussions taking place on the GitHub platform represent a wide variety of opinions, skill levels, and institutional belongings. In this regard, *how are discursive strategies deployed by contributors around the formation of style guides? Furthermore, how are those strategies affected by the specificity of a socio-technical environment such as GitHub? How are users of these style guides defined and taken into account in these negotiations?* I hyopthesize here that examining the discursive strategies happening around JavaScript will offer insights on how linguistic standardization is negotiated in open-source development environments.

To do so, I propose to look at the discussions happening on three main repositories, each representing different approaches to style guides. From least-open to most-open, they include the JavaScript style guide as published by the Airbnb company[6], the popular, independent StandardJS[7] and the exclusively format-oriented Prettier[8]. Building on previous critical discourse theory as applied to open-source discussions (Berry, 2006), these three repositories, their issues, pull requests and forks, will highlight the language deployed both from the maintainers, the contributors and the users and how different discursive approaches are used to justify arbitrary formal choices (e.g. single quotes vs. double quotes) through didactic approaches to non-arbitrary ends (code interoperability between teams) to improve productivity.

In the first part, I will address the needs for style and, consequently, style guides in contemporary, commercial programming practices, inscribing it further into both the sociology of style and the sociology of organizations. In particular, I will highlight continuities and breaks between style guides for human languages and style guides for programming languages. Building on this dichotomy, the second part of this article highlights the specific technical intermediary objects[9] involved in those discussions and implementations. Both GitHub and linters are significant component of the creation and implementation of style guides and therefore will occupy a central role in this analysis. After developing on the research methods used in this study, as qualitative discourse analysis of issues and pull requests, I will develop on the findings of this research, highlighting discursive and structural differences between the three targeted repositories. Finally, I will conclude by highlighting the findings of such an analysis, focusing on the place of tools, read-only documents and read-write documents, as well as invisible communities in the development of style guides.

### definition of style

- simmel and artistic style
- - talks about how style has an inherent tension between individual and group
- - our focus on style as a group action (both rancière & standardjs)
- connect to organizational style, communication, etc.
- - add reference to the CNRS book
- introduce the style guide

**question**: what are some of the discursive strategies in place regarding style guide adoption and modification? how are these connected to, and affected by github?

**hypotheses**: the socio-technological milieu in which these discussions happen affects the argumentation

### the need for style in programming

- development of programming as a profession in the 1960s (djikstra)
- - moving from an obfuscated practice (women computers)
- - to an esoteric practice (the art of programming)
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
