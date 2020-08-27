# The Aesthetics of Source Code - Pierre Depaz

## Further definition of topic and future outline of work - 08.2020

### Aesthetics and understanding

At the beginnning of the Spring semester 2020, I had established a clear research direction, directed at what role aesthetics have in the process of understanding source code. While the definition of aesthetics upon which this research relies is based on *aesthetics as a physical manifestation which can be grasped by the senses*. The limitation of this starting point is justified mainly by the object of this study. By approaching source code as an object (or, rather, as multiplicity of objects, "texts" written and read), rather than as a concept, I therefore put its graspable aspects in the foreground. While the social, cultural, intellectual and emotional components are still significant in the appreciation of beauty in source code, the comparative lack of close examination of *how* code is written is the justification for such a definition of aesthetics.

What still needed to be defined, however, was the meaning of "understanding". The work conducted this semester has therefore focused on the gathering and examination of the corpus of source code texts, along with the accompanying explanations, justifications and overall meta-texts, in order to find out how are references to "beauty" and "understanding" made. Amongst the vast majority of the corpus elements, practicioners tend to present or discuss a piece of source code which they consider "beatiful", "aesthetically pleasing", and accompany this presentation with justifications about *how* to make a piece of code beautiful and/or *why* make a piece of code beautiful, and it is these discourses that are used to elaborate on what source code aesthetics look like *in practice*, as well as what kind of role they play in the life of source code text.
This process has also led to the constitution of an initial set of aesthetic properties that are repeatedly highlighted by a certain sub-set of practictioners. In effect, the group of those who write and read source code is far from being homogeneous, and can actually be grouped into at least three distinct categories: computer science, computational science and software development[^1]. While additional sources establish their own distinctions[^2][^3][^4], the multiplicity of contexts within which code is written leaves litte doubt. Leaving aside a thorough defintion of each of these, I've identified five main categories of individuals writing and reading source code, which I group under the umbrella term *code practicioners*. These categories include: computer scientist, software engineer, hacker, amateur/student and artist. These categories intend to provide heuristics, rather than strict definitions, and each of these categories can overlap within one individual or group of individuals.
The sub-sets of practicioners examined so far include software engineers and artists—and thanks to the aforementioned overlap of categories, I am making the hypothesis that the initial findings made through the comparison of how aesthetics are conceived of by engineers and artists will be reinforced and further qualified during the examination of how the remaining categories (scientists, hackers, amateurs)[^4b].

### Established software engineering practices

The vast majority of code written today has been done by software engineers. As previously mentioned, while not the only group of people to write and read code, they are by far the most significant. The appearance of the profession in the late 1950s and early 1960s, emerging from a purely academic or military activity, brought with it a change in discourses relating to how code should be written, most eloquently by E. W. Djikstra [^5], along with Knuth [^6], Kernighan [^7] and Martin [^8] amongst others. Since these earlier (1960s) texts focused on defining the practice of software development at a professional level, the inclusion from the get-go of an artistic component (*"The Art of Programming"*), as well as a cognitive one (*"GOTO Statement Considered Harmful"*) is a significant indicator that writing software isn't an exclusively mechanical activity. Despite its title, *The Art of Programming* doesn't address *what* exactly it is that makes writing code an artistic process and source code a beautiful object. Ever since, this question of "beautiful code" has been addressed by members of the profession itself, at various levels: a couple of monographs[^9][^10], conferences, academic articles, blog posts and Q&A websites.

The analysis of this corpus has led to mulitple insights for this research project. First, it has helped anchor further what role aesthetics play for one of the categories of software practitioners. These findings complement the statements by more leading figures among software development, and confirm, or qualify the statements of said figures. Second, it has allowed me to constitute a significant part of the taxonomy of the features of beautiful code, based on John Cayley's distinction between *structures*, *syntaxes* and *vocabularies*[^11]. When offering their opinion on the oft-repeated topic of beautiful code, these comments and explanations of code do not contain uni-dimensional criteria, but rather criteria which can be applied at multiple levels of reading. Some of those tend to relate more to the over-arching design of the code examined while others, closer to our working definition of aesthetics, focus on the specific formal features exhibited by a piece of source code. Cayley's framework is used here to create a bridge with literature and literary studies without imposing too rigid of a grid (leaving aside, for the time being, concepts such as fiction, account, authorship, literarity, etc.). Third, it has refined the relationship between "aesthetics" and "understanding". The necessity for code to be understood and the desire for code to be beautiful are often intertwined and highlight how the latter facilitates the latter. While this relationship seems to be an argument in favor of Goodman's aesthetic theory—aesthetics as a means of communicating concepts—, the hypothesis I have formed here is that there are multiple (and sometimes conflicting) aesthetic criteria among and across software practicioners because there are multiple concepts to be communicated.

### The role of beauty in code

*"Aesthetics alleviate cognitive pain"*[^12]. This excerpt from *The Art of Readable Code*, presented as an industry manual for professional software developers, sums up the overall sentiment of software developers as surveyed through my corpus analysis. While most code can be understood, sometimes after considerable effort, beautiful code not only bypasses any need for additional commetary, reaching a highly sought-after status of "self-explanatory". This status for aesthetics to ease understanding of the text also answers one of the early research questions of this thesis regarding the necessity for code to be beautiful. While the existence of beautiful code quickly manifested itself at the beginning of this research, two questions then seemed to arise due to its tight connection to complexity, intelligibility and understandability.
First, *what and how do aesthetics in code make intelligible*? What is made intelligible isn't exclusively what the program (and, by extension, the computer) *does*, but can also refer to the knowledge of an existing algorithm, a given idiomacy in a programming language, an architecture of hardware or a practice of reading and writing of fellow programmers. That is, what should be made intelligible is an intent, within a particular context (a socio-technical context composed at least of a writer, a reader, a language and a hardware). How it makes such an action understandable is addressed in the following section, in which I sketch out a typology of aesthetic criteria. These are the backdrop against which a practical, empirical examination of source code can take place. These criteria are established from the analysis of a given community, of which a vast majority of practictioners are part of, and which has consequently informed aesthetic standards in other communities of software practictioners (e.g. obfusctation contests, esolangs, code poetry).
Second, *do aesthetics in any kind of code always aim at making intelligible*? That is, is the aesthetic in the code exclusively transitive, relating to something other than itself, or intransitive, referring only to itself? This enters a discussion on whether or not functionality is an essential part of aesthetics (i.e. *"Beauty that you can use"*[^13]), and to what extent there are contexts and mediums in which beauty cannot exist without an external aim.

Therefore, there seems to be a necessity for beauty: since programming is an inherently complex activity[^14], dealing with abstract concepts as raw materials, an aesthetically pleasant piece of source code is therefore an easily-understandable one. In other words, aesthetics enable the development of mental models[^15], mainly through the process of metaphors, connecting immediate sensual manifestations to abstract, shared ideas[^16]. The constraint here is to communicate what the program is (as a conjunction of *what* a program does and *how* a program does it), based on the writer-programmer's mental model of the problem at hand, to the reader-programmer, by using a symbolic language which is theoretically able to compute any finite problem, while at the same time limited in practice to instruction sets and syntax which doesn't adequately cover the need for expressing the intent of the work.

Source code thus needs to communicate something beyond itself. This can be what the code does, how it does it, and how it approaches the problem domain. The object, the manner and the context are all the primary focii of the reader; that is, if the code were to be written differently, it would not ultimately harm the purpose of reading it (even though it would still slow down the process of doing so). However remains the component of the skill of a given writer. Just because a significant part of code can be considered a semantic interface which should ultimately become as invisible as possible[^17] (self-explanatory, it allows the reader to get directly to the problem, without stumbling on the syntax), the aesthetic nature of a code-text can be a testament to the skill of a writer; as the number of lines of code diminish, each of them become more and more essential[^18]. Throughout the corpus analysis, various references to Antoine de Saint-Éxupéry's quote appear regularly: *"Perfection is achieved, not when there is nothing more to add, but when there is nothing left to take away."*. Beyond highlighting a desire for a literary connection, this citation also hints at the iterative process of writing code: adding, then removing (possibly in a loop).

Such a process is echoed in the practices of craftsmanship, rather than science, and it seems necessary not to oversee that connection, and to ask *what are the relationships between the aesthetic criteria of craftsmanship the aesthetic criteria of source code?* Indeed, several[^19] authors[^20] have alluded at programming as a craft[^21], but haven't focused specifically on the parallels in form. Some of these criteria include clarity, mastery, cooperativity and utility and will be further explored in this research. Particularly, the criteria of mastery excludes, for some, any code-text which doesn't solve an interesting problem (e.g. *"a user-login form cannot be beautiful"*). Particularly, deeply-engrained mottos and heuristics such as DRY (*Do Not Repeat Yourself*), KISS (*Keep It Simple, Stupid*) and SOLID[^21b] act as essential heuristics for writing software in a professional context and underpin all other aesthetic standards in this community of practicioners.

### Aesthetic criteria

As mentioned above, the corpus of textbooks, essays, online blog posts and comments addressing what makes source code beautiful or aesthetically pleasing has been analyzed according to three main categories. These categories of structure, syntax and vocabulary are all related to formal manifestations in source code. *Structure* is defined by the relative location of a particular statement within the broader context of the code-text, as well as the groupings of particular statements in relation to each other and in relation to the other groups of statements within the code-text. This also includes questions of formatting, indenting and linting as purely pattern-based formal arrangements. *Syntax* is defined by the local arrangement of tokens within a statement, including control-flow statements (and therefore not restricted to single-line statements). It also includes language-specific choices, referred to as idioms, and generally the kind of statements needed to achieve the kind of task required (e.g. using an `Array` or a `struct`). Finally, the *vocabulary* refers to the user-defined elements of the source code, in the form of variables, functions, classes and interfaces. Unlike the two precedent categories, this is the only where the writer can come up with new tokens.

- Structure

Structure, as the highest-level group of criteria, is both easy to grasp and somewhat superficial: most of the criteria which compose it are *indicators* and not *proof* of beautiful code, indeed necessary,  but not sufficient. Indeed, it can be separated between surface-structure, and deep-structure. The criteria for beauty in surface-structure is **layout**, as the spatial organization of statements, through the use of line breaks and indentations. While serving additional ends towards understanding, proper layout (whether according to conventions, or deliberately positioning themselves against these conventions) seems to be the first requirement for beautiful code. In terms of aiding undertsanding, blank space creates semantic groupings which enable the reader to understand, at a glance, what the decisive moments[^22] are in the code's execution, and presented by some as akin to paragraphs in litterature[^23].

This aid to understanding is further highlighted by a deep-structure paradigm of **conceptual distancing**: the criteria according to which statements that have to do with each other are located close to each other, when visual appearance reflects the conceptual structure of the code (some argue that the data that the code processes is predates the code itself in dictating its layout). While an over-arching principle, it is vague enough to be open to interpretation by practitioners and is therefore unable to act as a strict normative criteria (e.g. should every code-text follow the *stepdown rule of function declaration* when writing in a language which doesn't enforce it? should local variables all be declared at the beginning of the highest scope at which they belong, or at the closest location of their next use? should all data be prepared, and then processed, or should each data be prepared and processed in each of their contexts?). The explicit criteria of *local coherence* (what is next to each other is related to each other) echoes similar questions about the coherence and consistence in traditional aesthetic theory[^24]. Indeed, proponents of local coherence in source code imply that a beautiful piece of code should not have to rely on input and output and therefore be entirely autotelic. Such an assumption runs contrary to the reality of software development as a practice, and as an object entangled in the world, and therefore could not qualify as an aesthetic criteria which would apply to code bases accross communities of practicioners.

A correlation to conceptual distancing is **conceptual symmetry**, which states that groups of statement which do the same thing should look the same. It then becomes possible to catche a glimpse of patterns, in which readers know what does what according to a brief overview. Conceptual distancing can be further improved by **conceptual uniqueness (unicity?)**, which demands that all the statements that are grouped together only refer to one single action: complex enough to be useful, and simple enough to be graspable. Following this, then, beautiful code is *"the code that does the job while using the least amount of different ideas"*, which, according to the DRY principle, implies the ideal of a linear relationship between the number of lines of code and the amount to be understood. This is possibly an aesthetic standard, but it is unclear to what extent it is a sublime standard.

Interestingly, this last statement contradicts a different aesthetic that exists among different software practicioners—hackers. In their case, beautiful code is the code which manages to pack the maximum number of ideas in a minimal amount of lines of code, both in obfuscation practices and in the writing of one-liners. This apparent conflict between clarity and complexity can be resolved in certain codebases, in which the lines of code are few, but the implications are many[^25].

- Syntax

Syntax, as the mid-level group of criteria, deals most specifically with the two main components of the implementation: the algorithm and the language. Beautiful syntax would denote a conceptual understanding (Knuth states that these understandings are the ones that make writing code an art, and has devoted his magnum opus to the study and communication of algorithms). However, I will argue that algorithms cannot be separated from the language that they are written in. Indeed, most algorithms are expressed first as pseudo-code and then implemented in the language that is most suited to it; this seems to be a contemporary version of the 1950s, when computer scientists would devise those algorithms through pencil and paper, and then leave their implementation at the hands of entirely different individuals—computers.

Beautiful syntax in code responds to this limitation. Since algorithms must be implemented in a certain context, with a certain language, it is the task of the writer to best do so with respect to the language that she is currently working in. Therefore, *beautiful syntax is idiomatic syntax*. This involves knowing what are the possibilities that a given language offers and, in the spirit of the craftsmanship ethos noted previously, working with the language rather than against it. These sets of aesthetic criteria thus become entirely dependent on the syntactical context of the language itself, and can only be established with regards to each of the language (e.g. knowing which keywords shouldn't be used, such as `unless` in perl, or `*` in C, knowing when to use decorators in python, `...` operator in ECMAScript, etc.). Here, syntax also follows the idea of conciseness that has been touched upon at the structure-level: a writer can only be concise if she knows how the language enables her to be concise. Knowing the algorithm and the problem domain will not help to match this criteria. To what extent a syntax is **idiomatic** syntax is a good indicator of the aesthetic value of a code-text.

It is difficult to establish a hierarchy between separate idioms, since they operate under different paradigms and assumptions. A developer who finds that she can best communicate her ideas according to Java will find Java beautiful. A developer who finds that she can best communicate her ideas while writing in Go will find Go beautiful. This state of affairs seems to be part of the reason as to why online platforms are full of "which language is better?" endless discussions. An syntactical criteria which acts as a responses to these discusssions is **consistency**. While there might be minor reasons as to why one would want to be calling functions *on* objects rather than calling functions *from* objects (in order to prevent output arguments), this minor increase in aesthetic value through display of skill and removal of cognitive noise doesn't compensate for the possible increase in cognitive noise if those two ways of calling functions are used alternatively in an arbitrary manner. This hints at the possibility that aesthetics here is also a game of tradeoffs.

Beyond the state of syntactic consistency, the question of bringing heuristics from one language to another is yet another aesthetic criteria, that of **linguistic reference**. Being able to implicitly reference another language in a code-text (e.g. *"this is how we do it now that we have C++, but the current code is written in C, so one can bring in ideas and syntax that are native to C++"* or *"since Ruby can qualify as a Lisp-like language, one can write lambda functions in an otherwise object-oriented language"*), a code-switching of sorts, can both communicate a deep understanding of not just a language, but an ecosystem of languages while satisfying the purpose of maintaining clarity. This communicates a feeling of higher-understanding, akin to perceiving all programming languages as ultimately just "tools for the job" and whose ultimate purpose is nonetheless to get a concept across minds as fully and clearly as possible. However, a misguided intention of switching between two languages, or a mis-handled implementation can propel a code-text further down the gradient of ugliness. The concept communicated would in such a case be obscured by the conflicting idioms (e.g. writing p5.js—as a JavaScript implementation of a Java-based syntax—within an HTML document forces the co-existence of two distinct syntaxes which are made to cohabit more for purposes of platform-distribution rather than code clarity), reveal of lack of mastery of the unique aspects of the working language, and therefore fail to fulfill the aesthetic criterion of idiomaticity.

Finally, a syntax with high aesthetic value is a syntax which favors **natural language reading flow**. For instance, of the two alternatives in Ruby: `if people.include? person` vs. `if person.in? people`, the second one is going to be considered more beautiful than the first one, since it adapts to the readers habit of reading human languages. However, the succintness and clarity of compilable code is not to be sacrificed for the sake of human-like reading qualities. Indeed, a criteria for ugliness in code-text is *verbosity*, or useless addition of statements without equivalent addition of functionality. This testifies to the precedence of machine-idioms over human-idioms, the former only coming into play if the verbosity of the statement remains the same.

- Vocabulary

Vocabulary, as the only component in this frameworks which involves words that can be (almost) entirely invented by the writers, is often the most looked at in the literature regarding beautiful code among professional software developers. Aesthetics here deal mostly with beautiful names, and respect for conventional knowledge. It is the level of aesthetic standards which takes into account first and foremost the readership of a given code-text.

Of the two big problems of programming, the most frequent one is *naming*[^26]. One reason as to why that is might be that naming (as language) is an inherently social activity[^27] and therefore a name is an utterance which only makes sense when done in the expectation of someone else. The process of creating a variable or function name on one's own is often more time-consuming when done alone[^28]. Naming, furthermore, aims not just at describing, but at capturing the essence of an object, or of a concept. Flusser sees poetry as the briging-forth that which is conceivable but not yet speakable through its essence in order to make it speakable through prose[^29]. So it can be argued that good, efficient names in code, are those who can communicate the essence of the concept "at hand", and through this touch of sublime are the key to beautiful code.

On a purely sensory level (visual and auditory), aesthetic criteria related to naming are that of **character length** and **pronounceability**. Visually, character length can indicate the relative importance of a named concept within the greater structure of the code-text. Variables with shorter names are variables that are more important, demand more cognitive attention, offer greater intelligibility in comparison with longer variable names, which only need to be "stored in memory" of the reader for a shorter amount of time. These visual cues, again, alleviate cognitive pain when trying to understand code, and therefore, within the aims of source code aesthetics, hold greater aesthetic value when respected. Pronounceability, meanwhile, take into account the basic human action of "speaking into one's head" and therefore acknowledge the requirement for communicability of source code amongst human readers. This criterion exists in the category of aesthetic criteria which are required, but not sufficient, for beautiful code.

Equally visual, but aesthetically pleasing for a different reason, a typographical one, is the **casing** of names. Dealing with the constraint that variable names cannot have whitespace characters as part of them, casing has resulted into the establishment of conventions which pre-exists the precise understanding of what a word denotes, by first bringing that word into a category (all-caps denotes a constant, camelCasing denotes a multi-word variable and first-capitalized words indicate classes or interfaces. By using multiple cues (here, typographical, then semantical, as explicited below), casing again helps with understandability. Further more, casing, by its existence as a convention, implies that it exists within a social community of writers and readers, and acknowledges the mutual belonging to that community of both writer and reader to a given community, and turns the code-text from a *readerly* text further into a *writerly* one[^30].

Following these visual, auditory and typographical criteria, an aesthetically-pleasing vocabulary is a vocabulary which strictly names **functions as verbs and variables as nouns**. In the vein of making a correspondance between machine language and human language, there is here a clear mapping between the two: functions *do* things and variables *are* things. If it's the other way around, while respecting the criteria for consistency, functions as nouns and variables as verbs hints at what it is not, are counter-intuitive and ultimately confusing—confusion which brings ugliness. Furthermore, the noun given to a variable should be a hint towards the concept addressed, and ideally address *what* it is, *how* it is used, and *why* it is present. Each of these three aims aren't necessarily easily achieved at the same time, but finding one word, which through multiple means, point to the same end, is an aesthetic goal of source code writers. Particularly, limiting the naming to be the answer to only one of those questions (only *what*, only *what*, or only *why*) confuses the reader more than it enlightens her. A beautiful name is a name which differentiates between *value* (obviuous, decontextualized, and therefore unhelpful, as seen by the general frowning-upon of using *magic numbers*) and *intention*, informing the reader not just about the current use, but also about future possible use, in code that is written or yet to be written. So here we see a paradox between direct conceptual relationship between a name and what it denotes, and the multiple meanings that it embodies (its description, its desired immediate behaviour, and its purpose).

While, in the community of software developers, variable names should then have a 1:1 mapping with the object or concept they denote, this isn't the case in other communities, whether those that rely on obfuscation, in which confusion becomes beautiful, or in poetic code, in which **double-meaning** brings an additional, different understanding which ultimately enriches the complexity of the reading[^32]. Indeed, it is the easiest way for writers to offer metaphors, and provides an entry point in to the possibility that all source code is itself a metaphor for the task—and therefore the problem—at hand. This aesthetic criteria of double-meaning comes from poetry in human languages, in which layered meanings are aesthetically pleasing, because they point to the un-utterable, and as such, the sublime. The way that these two communities address the aesthetic problem of naming and, more generally, how source code and literature make use of metaphors, is part of the next steps that will be taken in this research.

A final aesthetic criterion for vocabularies is the **limitation of function arguments**. Going back to the structural criterion above of limiting input/output and keeping groups of statements conceputally independent, function arguments solves this requirement at the level of vocabulary, demonstrating in passing the relative porosity of those categories. Indeed, the naming of variables also reveals the pick of **adequate data-structures**, echoing those who claim that the data on which the code operates can never be ignored, and that beautiful code is code which takes into account that data and communicates it, and its mutations, in the clearest (most intelligible) possible way.

- Comments

Comments in code do not seem to fall clearly in any of the three categories above. By definition ignored by the compiler/interpreter, comments can be erroneous statements which will persist in an otherwise functional codebase, and are therefore not trusted by experienced, professional software practicioners. In this configuration, comments seem to exist as a compensation for a lack of functional aesthetic exchange. By functional aesthetic exchange I mean an exchange in which a skilled writer is able to be understood by a skilled reader with regards to *what* is being done and *how*. If any of these conditions fail (the writer isn't skilled enough and relies on comments to explain what is going on and how it is happening, or the reader isn't skilled enough to understand it without comments), then comments are here to remedy to that failure, and therefore are an indicator (but, again, not a proof) of non-beautiful code. For instance, referencing a variable name in a comment is a sure indicator of a message which refers to the what/how of a group of statements and is on the verge of stating the obvious (if not already stating the obivous).

The situation in which comments seem to be tolerated is when they provide contextual information, therefore (re-)anchoring the code in a broader world. For instance, this is achieved by offering an indication as to *why* such an action is being taken at a particular moment of the code. This particular use of comments seems to bypass the aesthetic criteria of code being self-explanatory, but nonetheless integrates the criteria of code being writable, a piece of code which, by its appearance, invites the reader to contribute to it, to modify it. As such, in an educational setting (from a classroom to an open-source project), comments are welcome, but rarely quoted as criteria for beautiful code, which seems to indicate that the appreciation of beautiful code does require a certain level of skill, even though this requirement isn't uni-dimensional: skills can exist along multiple, independent axes.

### aesthetics as a purposeful, functioning device

This set of criteria is only the first of a multiple (including those of artists, hackers and academics), and is intended to be limited to the community of practicioners it stems from, as well as inform a consolidated set of principles which could possibly apply to any piece of source code. While the content of the framework seem to consistently apply to any commentary on source code found in the gathered corpus, its organization in structure/syntax/vocabulary could mirror a parallel structure in the aesthetic *experience* of the reader of a code-text. Such an aesthetic experience could be organized in terms of cognitive depths: reading (e.g. code is properly formatted, can be read), understanding (e.g. code communicates what it does), enlightening (code communicates more than what it does). This parallel structure also reflects the important fact that reading code is a different process than writing code. Indeed, one could argue that, while writing code can have similarities with writing prose or poetry, reading code, on the other hand, is more akin to investigative work and dissection than to leisurely skimming over a novel. Further research on this is needed, particularly along the axes of linear/non-linear reading, the requirement (or not) of paratexts, as well as reader positions, which then ties back into the existence of social contexts of aesthetics.

At this point, this set of criteria for software developers points to a close relationship between beauty and understanding (i.e. *is beautiful that which I can easily understand and act upon/within*). Preliminary examination of the other groups of software practicioners also point to the presence of understanding as a writer and a reader engage with a code-text. For instance, for hackers, *is beautiful that which challenges understanding, that which is not understandable*, by removing agency, or doesn't pre-suppose agency. For academics, *is beautiful that which provides an understanding beyond what is immediately there*, and provides deeper insights into theoretical realms of computation, algorithms or language design. For artists, *is beautiful that which offers a different, subjective understanding through poetic interpretation*.

Following this, arises the question of whether a similar set of aesthetic criteria can be used to elicit multiple kinds of understanding, or if separate kinds of understandings require separate kinds of aesthetic criteria? If providing the understanding of something is akin to the act of *making clear* of that thing, then one could see *the art of programming* as the art of the obvious/of the transparent. This requirement to make intelligible would go against certain definitions of art as a self-sustaining, self-referential practice, and would locate code in-between an art and a craft. A piece of code which has to involve some concept to be understood implies that writing code is what I would call a *functional aesthetic practice*, an aesthetic practice which needs to *do* something in order to be appreciated as such. Could it then help to reconsider the separation between arts and craft, and perhaps seeing art as something which necessarily deals with the addition and/or modification of understanding?

Approaching code as a functional artistic practice ties into the considerations of code as craft, or code as art, and whether or not these practices should be distinguished. Indeed, architecture is in a similar situation (though obviously not identical). Between craft and practice, architecture is first and foremost meant to be used; and architecture can also elicit similar (multiple) understandings.

A further implication would touch upon artistic practices in general. Do all aesthetic objects communicate some knowledge that is to be understood by the audience? And therefore, can it be said that a good artwork is an artwork which reaches beyond itself, and always refers to the "problem domain" (a metaphor for the "real world" in programming)? But for that we must first inspect the relationship between code and literature.

### code and literature

The relationship between writing and reading code and reading and writing literature, while much[^31] written[^32] about[^32b], doesn't however seem immediately obvious. Indeed, most literary theorists and humanities scholars focus on the literary implications of *executed code*, while often overlooking the potential aesthetic renewals which could stem from a closer examination of source code. On the opposite, computer science practicioners have indeed claimed similarities between code and literature. What is exactly at stake here is still unclear to me, but it could stem from reasons such as: legitimizing their field through connections with additional fields, pointing out the similarity of using words as a base material, highlighting the fact that their activity is not just a scientific one. However, while no consistent theory of source code as a *subset* of literature exists today, I would rather look at it as two separate endeavours, which nonetheless:

- use similar materials (languages, or coherent systems of syntactic tokens)
- involve similar approaches (blank pages, drafts, attention to details, recourse to imagination)
- overcome similar problems (need to clarify complex cognitive structures, lack of clear communication between two subjective minds)
- and desire to achieve similar ends (share an understanding of a broader concept).

These two endeavours can be placed along the gradient of personal interpretation and objective efficiency. Where they stand depends on what they attempt at representing, at making understandable. For instance, if the aim is to make understandable the operations of a hardware timer, then the interpretation must be of the strictest nature[^33]. The writing must also subject to that requirement, in order to prevent any confusion in the reader and, ultimately, faulty usage with practical consequences. Further along that gradient, if the aim is to make understandable the implementation of a high-level algorithm, or pattern (say, a regular expression search[^34]), there is a little more room for an interpretative *approach* towards a set understanding of the idea of a regular expression, providing some agency to the reader to form a *comprehensive* mental model of a regular expression, rather than reading and assimilating an *exhaustive* one. On the other side of the spectrum, close to the interpretation, that which is intended to be communicated is part of human endeavours (e.g. employee management systems, user-facing software, and more generally the kind of software which has hugely benefited from the OOP paradigm). Since part of the complexity of software resides in the necessity to encode discreetely that which is continuous, code gets closer to literature. It does so as it inherently leaves room for uncertainty, for interpretation and for imagination with regards to what a user could do or would do, hinting at broad themes and possibilities of action, on top of the strict operation of its own code.

The distinction that some of the more technically-savy practicioners operate between code and comments illustrates this relationship quite well: *code never lies, comments do*. Comments, by virtue of being completely ignored by the compiler or interpreter, are closest to prose. To what extent are comments helpful because they lie, or because of their unreliable nature? Comments are only necessary when one wants to explicit *why* a section of code does something. The question *why* hints at broader, more metaphysical concerns, concerns that are harder to communicate through code, and easier to communicate through literature. Another example is that of Donald Knuth's work *literate programming*[^35], a set of languages, tools and practices which attempts at establishing comments as the canonical source of any compilable or interpretable source code. The aim was to allow the writer to write in "plain English", and then generate source code from this description. Such an approach both claims that there are ties between writing source code and writing texts, yet crystallizes the difference between both since a `.web` file (to take the example of the first literate programming processor) is but a markup language which weaves in both natural and machine languages but does only so superficially, ultimately splitting each of those languages in separate files (`.tex` and `.pas`, respectively). I would therefore argue that, given fact that literate programming can be seen as *inserting code within literature*, code and literature are distinct practices which have the potential to mutually inform each other, as word-based crafts.

If there are indeed parallels that can be made between code and literature, without claiming that code *is* a new form of literature, to what extent does code and literature use the same techniques (of conceptual distancing, naming, etc.), and to what end? One approach would be to compare both practices in terms of **metaphors**: how they are used (to clarify or to mystify), and to what purpose (i.e. for which kind of understanding). Furthermore, it seems that, just as there isn't a single kind of code, there also isn't a single genre of literature. While examining parallels, it will be useful to acknowledge that code can draw from styles such as minimalism, absurdist fiction or technical/scientific writing. Without a single monolithic vector against which the beauty of a code-text is evaluated, this would assess such aesthetics along different axes, between craft, literature and engineering.

### next steps

The work so far has established main aesthetic criteria for a particular kind of software practicioners: software developers constituting the vast majority of people writing and reading source code. Through this endeavour, I have highlighted the role that these criteria have with regards to understanding source code, in terms of reducing cognitive friction and facilitating more or less strict interpretations of the concepts and ideas that are being constructed and communicated by the writer. These preliminary findings support a *functional approach to aesthetics*. This implies that aesthetics can (and, in this specific context, should) have a transitive role: if the concept that they represent isn't interesting or novel to the reader, then the code will not be considered "beautiful". The code here is meant to be "self-documenting", "transparent", in that it doesn't bring too much attention to itself, but rather point to the problem that it is attempting to solve by showing *what it does*. This corresponds to Nelson Goodman's theory on the symbolic meaning of art[^36]. He argues that art, as an aesthetic manifestation, always communicates concepts to the viewer/reader, facilitated through formal cues through the use of denotation, connotation and representation. The practice of writing source code could therefore support a conception of art as a useful and functional communication tool.

These cues, organized under the distinction of structure/syntax/vocabulary, can provide different depths of understanding, but it isn't yet clear as to whether it can provide different *kinds* of understandings, and whether the same set of critieria can help understand different concepts (between say, hardware architecture, algorithm implementation, real-world situation or poetic imagination). The immediate next aspect that I will be focusing on is therefore to highlight the aesthetic criteria which support two other communities of practice: hackers and artists. This will help identify to what extent aesthetics can operate across communities of practice, or to what extent these communities of practice can operate independently. Particular attention will be paid to how each of these communities involve metaphors in their work (under what form and for which purpose). This will involve close readings of selected source code poems one one side and analysis of accounts and descriptions of "hacks" on the other side. The questions here are: what are practicioners trying to make understandable? and what aesthetic mechanisms are they using to do so?

Another direction in which to answer the potential cross-domain nature of aesthetic critieria, I intend to further analyze the perceptions around beauty and languages. So far, it seems that there are some languages that are considered more beautiful than others (e.g. Ruby, Lisp vs. Java, JavaScript), and the reasons why that is could give further insight into the nature of aesthetic criteria in source code, particularly in further defining *"elegance"* and *"clarity"*, broad terms often employed by practicioners to describe beautiful code. The hypothesis here is that some languages are more prone to support aesthetic criteria for beautiful code, both intrinsically (through idiomatic features) and extrinsically (due to external discourses and paratexts confirming this "beauty"); however, it would be interesting to see why some languages (like Lisp) are deemed beautiful for other reasons.

Finally, there needs to be additional research undertaken regarding metaphors, and how they relate to mental models and knowledge representation. While a broad field, I intend to approach it through literary theory, as well as through the small field of programming psychology. As explicited above, it seems that code and literature are only loosely related, more through the process of writing than the process of reading. The abundant use of metaphors in literature, and the essential quality of code to execute commands which stand for something else (e.g. keywords such as `open`, `close`, `listen`, `break`, but also vocabularies created by the writers while naming variables, functions, classes) would be a fruitful terrain for a comparative examination. Such a comparison would help in defining exactly what are the roles of metaphors in writing and reading code, how they are manifested through aesthetics and how they can illustrate the similarities and differences between code and literature.

### questions

- is it necessary to include academic/theoretical aesthetics? scope too large
- how should i approach metaphors? from a philosophical stand, a psychological one or a literary one?
- should i also look into what metaphors are used to make sense of code?

---

[^1]:
https://www.americanscientist.org/article/cultures-of-code

[^2]:
https://josephg.com/blog/3-tribes/

[^3]:
https://blog.codinghorror.com/the-two-types-of-programmers/

[^4]:
https://mkdev.me/en/posts/the-three-types-of-programmers

[^4b]:
to what extent these categories match what Wittgenstein has called *forms of life*, socio-cultural contexts of use, underpinned by normative activities (e.g. technical writing)

[^5]:
Notes On Structured Programming

[^6]:
The Art of Programming

[^7]:
Elements of Programming Style

[^8]:
Clean Code

[^9]:
Beautiful Code

[^10]:
Geek Sublime

[^11]:
Cayley, The Code Is Not The Text (Unless It Is The Text)

[^12]:
The Art of Readable Code

[^13]:
Beautiful Code

[^14]:
Djikstra's luncheon talk

[^15]:
Jay Wright Forrester

[^16]:
Goodman, Languages of Art

[^17]:
Galloway, Interface Effect

[^18]:
Nabokov on Flaubert

[^19]:
Sennett

[^20]:
Djikstra, craftsman vs. scientist

[^21]:
Software Craftsmanship

[^21b]:
single responsibility of classes, open/close principle, liskov substitution, interface segregation, dependency inversion

[^22]:
Sennett

[^23]:
Matz

[^24]:
further-research-needed

[^25]:
Doom

[^26]:
(attributed to Phil Karlton), [link](http://karlton.hamilton.com/quotes/index.cgi)

[^27]:
Bakhtin

[^28]:
why is it that functions are easier to name than variables?

[^29]:
Flusser, on doubt

[^30]:
Barthes

[^31]:
Treating Programming as an Essay

[^32]:
Literate Programming

[^33]:
hardware timer post

[^34]:
beautiful code

[^32b]:
Geek Sublime

[^35]:
Literate Programming

[^36]:
Languages of Art

---

  - **structures**
    - *conceptual distancing* everything is close to each other in a semantic way (having variables together, then functions together, as **separation of concerns**). but only for larger code bases, but then the deeper beauty is when that layout actually reflects the conceptual structure of the code because, before the code, there is the data.
   - regarding layout vs. structure: it's an *indicator* but not a *proof*.
   - *clean* structure is a structure in which only one intent can and should be perceived. all the statements relate to only one task
   - related: minimalism "the code that does the job while using the least amount of different ideas".
   - code symmetry: using the same constructs for the same tasks
   - linear relationship between the number of lines of code and the amount to be understood (the existence of this + one liners being a thing considered beautiful proves that there are mulitple kinds of beauty)
   - blank space to show important separate steps (like senett's decisive moment). that, at least has something in common with literatur insofar as they're **paragraphs**
   - when not enforced by the language, *stepdown rule of function declaration* (always have the more general functions at the top, the more specific at the bottom)
   - no input/output rule: everything that happens in locally coherent

    - **syntax**
    - idiomatic usage and practice is a requirement.
    - some vocab in languages is haram (`unless` in perl, `*` in C, etc.) (related to vocabulary, except no because it's a `keyword`)
    - cross-referencing language knowledge is a tricky subject. using the idiomaticity of one language into another one (using ideas from C++ into C code is good, but writing ruby the way you write java is not good).
    - do not reference variable name in comments (redundancy, *DRY*)
    - natural language flows (ruby can shine at this, because ruby has multiple ways of doing it: `if people.include? person` vs. `if person.in? people`)
    - as similar as possible as natural language while retaining as much as possible the CLARITY of code
    - eliminate nesting (one line instead of three)
    - ways of calling functions *on* objects or calling functions *from* objects (aka no output arguments)

  - **vocabularies**
    - nouns as variables, verbs as functions, and both replace comments (comments are only acceptable for the "why" of programming logic)
    - variables should answer *why* it exists, *what* it does and *how* it is used (not certain that all of these can be attained at the same time)
    - pronounceable names
    - all caps is constant (bringing idiom from C to more modern languages)
    - **paloque berges' double-meaning?**
    - one word per concept (1:1 relationship), don't try to do multiple things at the same time, unless this is exactly what you would want to do
    - functions don't have too many arguments (< 3)
    - differentiate between *meaning/intention* of a variable and *value* of a variable (this is why: no magic number)
    - variable name length can hint at the importance/hierarchy of the variable

### keep in mind

giving up the understanding in order to understand better (cognitive noise is related to the level of skill)
a problem of a lot of research is **inventing a new language without inventing new ideas**

### questions that i need help with

- am i reinventing the wheel at any point?
  - e.g. surface vs. depth, syntax as beauty for the unexperienced and semantics for the experienced

**words as problem solvers**
(in reference to the book pat found, where the author states that programming is treated as a management problem, and not a mathematical one: but in both cases, we're still talking about source code (and to what extent is it always the "same" source code?), a unique object/practice/paradigm which enables us to solve problems (and now, to what extent are these problems dependent on source code? or is it because source code (as computation) can solve theoretically any problem? and is that beautiful in itself?))

### notes from xcoax

~~while it's nice to have an overview of humanities at the beginning, it would be interesting to have reconciliation/reconsideration of those views by the end of this paper~~

- notion of beauty in non-artistic contexts
  - perhaps there is an underlying common process? (degree of complexitiy/satisfaction? to be happy about it?)
  - confusion vs. beauty **YES** (almost presupposed by this thesis)
  - ~~brain scans?~~ **NO** (but programmer psychology yes)
  - ~~address the node-based programming environments?~~ **NO**

relationship to art? **yes, but tangential question**
question to the understanding of beauty? **yes, but tangential question**

~~apparent symmetry vs. assymetry of reading vs. writing~~ taken into account, see above

information *is* value, or information *has* value? (just because you have it, or because you know how to use it?)
