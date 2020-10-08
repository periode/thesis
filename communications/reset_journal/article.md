# Discursive Strategies in Style Guides Negotiation on GitHub

## Pierre Depaz

## Introduction

Written and published in 1983 on a Usenet board, The story of Mel, the Real Programmer[^1] recounts^[this is an inline footnote] the tale of Mel Kaye, an individual who wrote software on the 1959 ACT-1 compiler and has become a recurring reference in programmer's lore[^2]. The moral of the story focuses on Kaye's ability to write both excellently efficient and completely inscrutable code. This obfuscating aspect of a code that only its writer can read, while being considered in this context a laudable feature of model programming work and informing ideals of programmers, slowly began to phase out in the 1970s. With the growth of the commercial software market[^3], more and more private companies started to constitute what is today a large part of the technology industry, composed of teams of multiple programmers working on the same codebase on the long-term. This evolution, from the individual programmer implementing ad hoc and personal solutions to a group of programmers coordinating across time to build and maintain large, distributed pieces of software, brought the necessity to harmonize and standardize how code is written. In response, style guides started to be published to normalize the visual aspect of source code, and became a recurring topic in both the software development and computer science research[^4]; particularly, debates about programming style implementations and best practices have remained significant, if under-examined, parts of a given programmer's practice in a commercial context.

In light of this tension between individual technical prowess and the social existence of source code, this article examines the production and communication processes involved in the construction of styleguides for the JavaScript programming language within contemporary software development environments. Specifically, it looks at the discursive techniques deployed to negotiate the adoption of styleguides within a particular socio-technical environment—the collaborative development platform GitHub. While style guides and written documents have been enforced in formal, more traditional professional institutions[^5], the GitHub development platform presents a couple of specific aspects. As the most popular repository of open-source software, it is the locus of semi-formal participation and enables by default the copying and modifying any document (a process known as forking). Large-scale private companies interact with distributed non-profit organizations and individual contributors in order to collaborate on software products, both free of charge and for-profit, which can then be modified seamlessly by other users of the platform. While GitHub is organized around self-contained software components, style guides are concerned with programming languages and aim at enforcing behaviour across projects. These discussions therefore cut across projects and applications to involve the aforementionned multiplicity of actors.

JavaScript is today both one of the most popular programming languages on GitHub, used by both amateurs and professionals alike. However, the language itself lacks a clear, original style standard, and therefore has been the subject of various discussions on what a style guide should enforce and how it should enforce it, relative to other languages. The discussions taking place on the GitHub platform therefore represent a wide variety of opinions, skill levels, and institutional belongings. In this context, this article aims at investigating *which discursive strategies are used by contributors around the formation of style guides? Furthermore, how are those strategies affected by the specificity of a socio-technical environment such as GitHub? How are users of these style guides defined and taken into account in these negotiations?* The answers to these questions will help further qualify the nature of linguistic exchanges in a complex, digital-first, working environment and uncover the arguments and attitudes towards practices in software development.

To do so, I propose to look at the discussions happening on three GitHub repositories, each representing different approaches to style guides. From least-open to most-open, they include the JavaScript style guide as published by the Airbnb company[^6], the popular, independent StandardJS[^7] and the exclusively format-oriented Prettier[^8]. Building on previous critical discourse theory as applied to open-source discussions (Berry, 2006), these three repositories, their issues, pull requests and forks, will highlight the language deployed both from the maintainers, the contributors and the users and how different discursive approaches are used to justify arbitrary formal choices (e.g. single quotes vs. double quotes) through didactic approaches to non-arbitrary ends (code interoperability between teams) to improve productivity.

In the first part, I will address the origin of style in programming and, consequently, the need for style guides in contemporary, commercial programming practices, inscribing it further into both the sociology of style and the sociology of organizations. In particular, I will highlight continuities and breaks between style guides for human languages and style guides for programming languages, specificaly in terms of objective efficiency and subjective perception. Building on this dichotomy, the second part of this article highlights the specific technical intermediary objects[^9] involved in those discussions and implementations, which exist in this field at both a macro- and micro-level. Both GitHub and linters are significant components of the creation and implementation of style guides and will thus occupy a central role in this analysis. After developing on the research methods used in this study, which are centered qualitative discourse analysis of issues and pull requests, I will develop on the findings of this research, summing up discursive and structural differences between the three targeted repositories. I will conclude by focusing on the place of tools, read-only documents and read-write documents, as well as invisible communities, in the development of style guides and how these can inform our understanding of daily programming practices.

### The need for style in programming

The problem of style is a problem which echoes Simmel's statement regarding the observation that "the practical existence of humanity is absorbed in the struggle between individuality and generality"[^10]. Simmel's investigation on the topic, which will serve as the foundation for our definition of style, focuses on the dichotomy between works of fine art and mass-produced works of applied arts. Indeed, Simmel draws a distinction between the former, as indiosyncratic objects displaying the subjectivity of its maker, and the latter, as industrially produced and replicated, in which the copy cannot be told apart from the original. The work of fine art, according to him, is "a world unto itself, is its own end, symbolizing by its very frame that it refuses any participation in the movements of a practical life beyond itself", while the work of applied arts only exists beyond this individuality, first and foremost as a practical object. While these two kinds of work exist at the opposite extremes of a single continuum, we can insert a third approach: that of the crafted object. The work of craftsmanship exists in between, as a repeated display of its maker's subjectivity, destined for active use rather than passive contemplation[^11]. So while style can be seen as a general principle which either mixes with, replaces or displaces individuality, style in programming doesn't stand neatly at either extreme, and needs to be problematized further.

Source code, as the product resulting from programming work, finds some of its roots in craftmanship, as a practice both analyzed by scholars[^12] and claimed by practicioners[^13]. Programming work has developed since the 1950s from an invisible labour to a fully organized and codified practice, through individual, glorified work. While computers were originally referencing female clerks implementing male mathematicians' algorithms on mainframe computers[^14], the development of programming as a recognized practice brought about with it the figure of the individual (male) programmer, equally obsessed and talented[^15], echoing the portraits of the genius artist[^16][^16b]. This individual, free-form implementation of specific computational problems came to an end with the rise of commercial software, and led to a re-examination of the practices and processes of software developers. This re-examination was led in part by the work of Edsger Dijkstra whom, in his 1972 publication of *Notes On Structured Programming*[^16], set forward clear practices for writing source code which would be meant to achieve two aims: be readable by someone else than the original author, as well as being more reliable and error-free[^17].

The emergence of style in computer programming is therefore concomitant of the development of the software industry. A self-proclaimed highly complex undertaking[^18], the understanding of source code by someone who hasn't written it (or, being the writer, hasn't read it in a while) quickly proved itself to be particularly difficult; as a response, corporate literature arose in order to serve as a reference for best practices[^18b]. Style guides, in the context of programming, are textual documents whose rationale involve both social and technical components. On the social side, they are only truly useful if they are inconditionally adopted by all members working on a particular code-base, since *"All code in any code-base should look like a single person typed it, no matter how many people contributed."*[^18c]; in the strict sense, guidelines are therefore reference documents which should provide the preferred way of writing a particular programming statement (e.g. `var` vs. `let`, or `camelCase` vs. `snake_case`). Beyond aesthetic preferences aimed at optimizing the clarity of a given source code[^18d], style guides also include a technical component which aims at reducing programming errors by catching erroneous patterns in a given codebase (e.g. variable declaration before intialization, loose reference to the function-calling context). This technical component, because it can be judged by an objective standard (i.e. the amount of errors in a program), is seldom the reason for internal disagreements within teams. However, the aesthetic component, because of this lack of subjective criteria, opens itself up to discussion. It is both of these components which style guides aim at resolving.

This phenomenon of explicitly written rules, dependent no longer on their writer, but rather on the organization to which the writer belongs, presents similar patterns as those highlighted in the formalization of knowledge as it happened during the transition of societies from oral communication (and their constituting organizations) to written communication[^19]. For instance, the written codification of hitherto implicit, idiosyncratic rulesets, has had the result of further preventing modification of said rules, and elevating them from a "personal" reach to a "universal" one. However, the technical context for those studies of the impact of literacy is one in which the written word, once put down, is significantly harder to modify than its spoken counterpart.

The digital word, the word stored on and communicated via computers, presents differences from either its oral or written counterpart. First, it can be as easily modified as it can be retrieved. Since one of the basic operations of the computing machine is the act of copy and the act of retrieval, it is important here to remember that anything that can be said on a digital medium always holds within itself the possibility of duplication, modification and, therefore, variation[^20], illustrated on the most obvious-level by the ubiquity of "copy and paste" actions offered as a default by any word processor application on a modern computer. Second, source code written in programming languages is *executable*. This means that, beyond the linguistic act of writing a statement, the result of this writing act can be automatically executed and enforced, without stating the need for personal or social performance as a requirement. So while written code still exists within "chains of acts of writing"[^21], once its validity has been confirmed and merged into active code bases, its enforcement is significantly easier than that of guides and protocols written in human languages[^21a].

### The GitHub development platform

Along with the low barrier to reproducibility and enforceability of code explicited above, another difference between organizations centered primarily on code and software and organizations in which code only constitutes a technical background is the porosity of the distinction between public and private. Particularly, when organizations maintain, or depend on, open-source software, the delimitation of which individual contributes to the organization's product becomes more fluid and temporary than in more traditional organizations[^21b]. At its most radical form, it is entirely non-hierarchical and horizontal[^22], a structure in which anyone can comment on the product and suggest modifications, even though actual contribution remains subject to additional social and economic constraints[^23]. This configuration directly affects the scope of a style guide. If anyone can potentially contribute to any code base within a given language, then the potential scope for any style guide is that of universal adoption. This relatively loose set of mutually-beneficial work relations (between private companies, open-source organizations and individual contributors) constitutes the background of our research field and is accentuated by the specificity of the GitHub platform.

As all platforms, GitHub conects multiple actors and provides the backdrop for economic, social and cultural practices[^24]. Economically, GitHub provides a way to store, retrieve and modify text files (usually source code) for distributed teams of contributors, grouped into projects (called repositories), themselves administrated by either user accounts or organization accounts. Any public repository is accessible to anyone, and these projects can then be built to add to the value of a given commercial product (e.g. Apache's `nginx`, Facebook's `create-react-app`). Socially, GitHub requires user registration to contribute to any of those repositories, and maintains a transparency policy which makes available all of a given users contributions on any given public repository. These contributions overwhelmingly take the form of commits (direct modification of text files), pull requests (requests to a given organization to integrate suggested changes to a text file), and issue creation and comment (asking or answering a question on a given project repository). Culturally, user interactions on GitHub depend on agreed-upon practices and discourses, specifically when a user raises an issue, responds to it, or concludes (closes) it[^25].

### Three repositories

Within this context, this article looks at the discussions taking place in three particular open-source repositories on the GitHub platform. Since our aim is to examine how discursive strategies are successful in the enforcement and popularization of style guides, a guiding criterion for narrowing our research field was first to use the common indicators of stars (number of users interested in the development of the repository, the GitHub equivalent of a bookmark) and in forks (number of users having copied the repository to their own account, possibly to modify it further, and to submit these changes back into the original repository). For the JavaScript language, the top three most popular repositories are `airbnb/javascript` (100k stars, 19.5k forks), `prettier/prettier` (37.4k stars, 2.5k forks) and `standard/standard` (24k stars, 1.9k forks). Additional JavaScript style guides include the IdiomaticJS style guide[^26], the Google JavaScript Style Guide[^27] and the style presented by Douglas Crockford[^28], but do not meet the either the popularity criteria, or do not exist primarily on GitHub.

These three repositories, while sharing the same effective outcome of providing a style reference for other JavaScript programmers, do present differences in their approaches to achieving that goal, and in their organizational practices. The `airbnb/javascript` repository is the public-facing result of the guide used internally at the Airbnb company, a startup company privately valued at USD31 billion[^29]. It consists of a main document, `README.md`, the first page displayed on any GitHub repository, as well as configuration files for linters. The `standard/standard` repository is a non-profit open-source organization aiming at providing a non-modifiable, non-extensible way to programmatically enforce both stylistic choices and technical error-checking through the use of the `standard` software, a command-line utility which aims at automatically enforcing the style described on an additional `RULES.md` document[^30]. Finally the `prettier/prettier` repository limits itself to the strict formatting of source code, following the rules laid out on an external website[^31] and providing, similarly to `standard/standard`{.javascript}, a command-line utility to automatically enforce those changes[^32]. GitHub is therefore a combination of read-write texts and read-only texts. The read-write texts consisting of the main text files of the repository, while the read-write texts are composed of all the discussions and suggestions taking place in the issues and pull requests sections. Drawing from literary theory[^33], this distinction allows us to locate more clearly the difference between more authoritative text and more negotiable ones.

This study focuses on the issues sections of each of these repositories. Traditionally used to keep track of bugs and technical enhancements for project maintainers[^34] and have a dedicated section on each repository. An issue can be created by anyone with a GitHub user account, can be commented on by anyone with a user account, but can only be closed (or "resolved", in GitHub's terminology) by the original creator, or by project maintainers. Additional features is that they can reference other issues across repositories, as well as internal and external code requests, essentially creating a web of inter-textuality, and displaying the complexity and inter-dependency of software packages. While originally designed as a bug-tracker, research has shown that they are now the locus of more complext discussion, involving affective rhetoric and over-arching design inquiries, well beyond specific bug fixes[^35][^36].

### Automatic writing with code linters

Another relevant element constituting our research field is the code linter. Present in every examined repositories, and beyond the JavaScript ecosystem, a code linter is a piece of software which, given a set of syntactical rule, modifies one or multiple source code files to match said rules. This programmatic element, which can be seamlessly integrated into more complex workflows, represents both a transfer of agency from the human to the non-human, as well as an improvement in the systematic enforcing of style rules.

Due to the overwhelming presence of automatic tooling in modern development[^36b], programming style guides make configuration files for linters one of the most essential part of their project, effectively connecting intimately human-readable texts with their machine-executable counterpart. The most popular of those linters is `eslint`, with over 13 million weekly downloads[^37]. While not proposing entirely new linters, our examined repositories focus on maintaining configuration files for `eslint` which implement their own human-readable styleguides. As a tool in a programmer's workflow, then, these linters with their associated configuration files are what Latour and Woolgar have called *intermediary objects*[^38]. Previous research in the sociology of work focused on how these intermediary objects affect the work processes (both conception, discussion and realization)[^39], particularly in establishing a framework within which work can take place[^40]; coupled with the automated normativity of code[^41][^42], these linters represent a significant part of the life and impact of a style guide.

### Methodology

After having provided the context in which this study takes place, we turn to our methodological approach. The methodology employed here to analyze both how different actors negotiate the adoption and negotiation of both subjective and both objective stylistic norms, as well as the influence of the technical environment in which those discussions take place on them, is based on the discourse analysis of individual issues and pull requests in each examined repository. Specifically, this methodology aims at linking the meanings of the corpus not just to existing social realities, but to technical realities as well.

Bourdieu: Language et Pouvoir Symbolique -> **authority**

Habermas: Theory of Communicative Action -> **rationality**

> “Hearers  can  contest  [an]  utterance  in  three  respects:  depending  on  whether  it  isexpanded to a statement of fact, an expression of feeling, or a command. They cancall  into  question  its  truth,  its  sincerity,  or  its  legitimacy...these  are  precisely  thethree basic modes available to communicative action” (Habermas, 1987b: 26).

> He suggests, thus, that of any utterance one can ask “is it true (in the sense of accurate)?”, “is itsincerely  stated?”  and  “is  it  right  and  morally-appropriate”.  He  develops  the  theory  ofcommunicative action - action oriented towards mutual understanding and unforced agreement-  that  accords  with  these  validity  claims  and  forms  the  theoretical  basis  for  democraticdiscourse

and then that will also show that the technicality becomes essential part of the discourse

### Analysis of corpus

This is what came up.

### Findings

This is how I interpreted it

### Conclusion

This is how I wrap everything up.

---

## notes

- actual test

- ~~simmel and artistic style~~

- + ~~talks about how style has an inherent tension between individual and group~~
- - ~~our focus on style as a group action (both rancière & standardjs)~~

- connect to organizational style, communication, etc.
- - add reference to the CNRS book
- - develop on how the style guide embodies administrative work -> **how?**

- ~~the readerly and the writerly in barthes~~
- - the necessity to be able to write when you read (the assumption that, when you read, you will write)

- locus of research outside github (additional texts)

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

in the end it's affected by github's:

- forum mechanism (+ the ability to repurpose those, as in the case of airbnb)
- cross-reference across repos
- ability to fork

---

[^1]:
Nather, Ed (2003-09-12) [1983-05-21], The story of Mel, a Real Programmer, FOLDOC

[^2]:
https://www.gewina-studium.nl/articles/abstract/10.18352/studium.1459/

[^3]:
ref needed

[^4]:
ref needed

[^5]:
ref needed -  formal institutions (goody?)

[^6]:
https://github.com/airbnb/javascript

[^7]:
https://github.com/standard/standard

[^8]:
https://github.com/prettier/prettier

[^9]:
objets intermediaires

[^10]:
simmel, the problem of style

[^11]:
ruskin, seven lamps

[^12]:
sennett, the craftsman

[^13]:
clean code, martin

[^14]:
wendy huy kyong chun

[^15]:
computer power and human reason

[^16]:
the lives of artists

[^16b]:
the blog post where they compare picasso, matisse, etc.

[^17]:
djikstra

[^18]:
ref needed

[^18b]:
more books on professional dev

[^18c]:
IdiomaticJS readme

[^18d]:
knuth on style

[^19]:
goody

[^20]:
manovich

[^21]:
frankel, 2006

[^21a]:
Brousseau et Moatty (2003), in [https://www.cairn.info/revue-anthropologie-des-connaissances-2012-1-page-21.htm?contenu=article]

[^21b]:
G. Hendry, “Public participation in proprietary software developmentthrough user roles and discourse,” Int. J. Hum.-Comput. Stud., vol. 66,no. 7, pp. 545–557, Jul. 2008

[^22]:
wealth of networks

[^23]:
Social Coding in GitHub: Transparency and Collaboration in an Open Software Repository

[^24]:
Gillespie, T. What are platforms?

[^25]:
Influence of social and technical factors for evaluating contribution in GitHub, [https://doi.org/10.1145/2568225.2568315]

[^26]:
[https://github.com/rwaldron/idiomatic.js/]

[^27]:
[https://google.github.io/styleguide/jsguide.html]

[^28]:
[https://www.crockford.com/style.html]

[^29]:
[https://www.nytimes.com/2020/08/19/technology/airbnb-ipo.html]

[^30]:
[https://github.com/standard/standard/blob/master/RULES.md]

[^31]:
[https://prettier.io/docs/en/]

[^32]:
[https://prettier.io/docs/en/install.html]

[^33]:
Barthes, La plissure du texte

[^34]:
[https://guides.github.com/features/issues/]

[^35]:
got issues? who cares about it?

[^36]:
Let's Talk About It: Evaluating Contributions through Discussion in GitHub

[^36b]:
M. Hilton, T. Tunnell, K. Huang, D. Marinov and D. Dig, "Usage, costs, and benefits of continuous integration in open-source projects," 2016 31st IEEE/ACM International Conference on Automated Software Engineering (ASE), Singapore, 2016, pp. 426-437.

[^37]:
[https://www.npmjs.com/package/eslint]

[^38]:
Latour, Woolgar, 1979

[^39]:
Jeantet, A., 1998. Les objets intermédiaires dansla conception. Elémentspour une sociologie desprocessus de conception. Sociologie du travail,n°3/98, pp. 291-316

[^40]:
Vinck, D. (2009). De l'objet intermédiaire à l'objet-frontière: Vers la prise en compte du travail d'équipement. Revue d'anthropologie des connaissances, vol. 3, 1(1), 51-72. https://doi.org/10.3917/rac.006.0051 

[^41]:
lessig, code is law

[^42]:
galloway, protocol