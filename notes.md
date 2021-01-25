# notes - fall 2020

## reading and writing

there could be different beauties in writing and in reading (case of Mike's APL) - easier to read vs. easier to type

## aesthetic analysis

luigi pareyson: aesthetics and interpretation [https://www.fabula.org/actualites/luigi-pareyson-esthetique-theorie-de-la-formativite_21236.php]

## found

> My personal style guide is to copy Erlang: double quotes for text, single quotes for programmatic strings (atoms/symbols). The single quote is slightly more convenient to type on a qwerty keyboard, but text regularly contains single quotes (apostrophes). It also provides a semantic visual shortcut.

I like the concept of **semantic visual shortcut**, also **semantic compression** (developed [here](https://caseymuratori.com/blog_0015))

https://dl.acm.org/doi/abs/10.1145/1869542.1869627
https://www.semanticscholar.org/paper/The-Elements-of-Pattern-Style-Sane/664c6bd6f494d5121999071703e595175ebf7aa1?p2df
https://dl.acm.org/doi/abs/10.1145/78607.78611 - typography is proven to be helpful

this could be an interesting theory about the reading process: [https://www.fabula.org/actualites/luigi-pareyson-esthetique-theorie-de-la-formativite_21236.php]

this is not so much about code aligning with standards of literature, but maybe aligning to the standards of both epistemology and architecture, *architectural knowledge*

## programming languages

> when we talk about esolangs, we are designing a perspective for someone to think through. -daniel temkin [src](https://www.artistsandhackers.org/Critical-Code)

> There's a lot of attention to **COMPRESSION**, using the underlying programming language in a way that's easy to penetrate - richard gabriel [src](https://www.dreamsongs.com/PoetryOfProgramming.html)

conceptual art aims at communicating concepts, ideas. experimental art don't know what they aim at but are motivated by an aesthetic criteria. (richard gabriel, keynote science is not enough)

the question of operational meaning vs. denotational meaning should be explored. what means what to the computer? (and what is the role of the stack in this whole thing)

----

Abstraction in programming is the process of identifying common 
patterns that have systematic variations; an abstraction represents 
the common pattern and provides a means for specifying which vari-
ation to use.
An abstraction facilitates separation of concerns: The implemen-
tor of an abstraction can ignore the exact uses or instances of the 
abstraction, and the user of the abstraction can forget the details of 
the implementation of the abstraction, so long as the implementation 
fulfills its intention or specification. (Balzer et al. 1989)

---

**Compression** is the characteristic of a piece of text that the meaning 
of any part of it is “larger” than that particular piece has by itself. 
This characteristic is created by a rich context, with each part of the 
text drawing on that context—each word draws part of its meaning 
from its surroundings.
**Habitability** is the characteristic of source code that enables pro-
grammers, coders, bug-fixers, and people coming to the code later in 
its life to understand its construction and intentions, and to change it 
comfortably and confidently. 
**Piecemeal growth** is the process of design and implementation in 
which software is embellished, modified, reduced, enlarged, and 
improved through a process of repair rather than of replacement

## meeting with advisors

questions:

- would you like to see the corpus? how should i display/save it?

- categories of people are relevant? should i look into academic as well? i'm afraid there might not be so much information/sources

- are metaphors contributing to the research project? should i stick to the functional part of aesthetics.

- the difference between syntactical and semantic metaphors?

the intent overall is to see to what extent there is an overlap between each of those communities of practice

next steps:

- do the same with code poetry for this semester
- also look at hackers
- what about mathematic/academic beauty?
- perfect the aspect of readability (luigi pareyson? umberto eco/the open work?)
  - psychology of programming

---

## chat w/ alexandre

- question de lecture/lectorat?
- - pareillement à ce qu'a dit Nick, il faut se pencher sur la compréhension machine vs. compréhension humaine (aka, il a été établi que la lecture est plus qu'un procédé d'encodage, décodage)
- - et c'est peut-être justement cette double lecture (machine/humain) qui fait que le code est beau
- ~~place de la métaphore?~~
- ~~question du corpus? comment le mettre en page?~~
- relation avec la littérature?
- - RESULTAT: rechercher d'avantage les approches cognitives de l'esthétique/littérature, notamment avec [francoise lavocat](https://www.wiko-berlin.de/en/fellows/academic-year/2014/lavocat-francoise/), [terrence cave](https://global.oup.com/academic/product/thinking-with-literature-9780198749417?cc=de&lang=en&) et [jean-marie schaeffer](https://www.nebraskapress.unl.edu/university-of-nebraska-press/9780803217584/)
- - mais aussi considérer la poésie/littérature comme programmatique (oulipo, etc.), en ce que "si le code est beau, il est beau de la même manière que la poésie".
- et puis **faire attention aux mots** (keywords, etc.), en ce que ces mots-là ont un pouvoir/une contrainte

## chat w/ nick

- look into operational semantics
- programming language research (what are the semantics of computer code? does refactored code have the same semantics as the original code?)
- how are semantics different for a human and a computer?
  
- semantics in experiential types of framework
- metaphors: mapping between a source domain and a target domain
- *More than Cool Reason: A Field Guide to Poetic Metaphor* (poets start from the conventional metaphor, towards the less conventional)

- reading: there is a myth of the linearity of reading
- how are authors reading their manuscript?
- how is related to craftsmanship? to architectural reading? an architect doesn't look at the whole plan when they read it, only the parts they need to change

### whole email

> Your four categories could be refined a bit. I think data scientists working for businesses are very much like the "academics" you identify, in that they don't ship their software to others and their outcomes are external research and insight. A minor issue, but it leads to thinking about the distinction between custom software development for corporate clients (only one piece of software is made) and massively distributed games, apps, operating systems, etc. that run on a variety of platforms and need to be maintained in that context. What a "software engineer" does in these contexts is fairly different, and even if the category holds, I would expect different style guides (for instance) to be used in both cases.

Definitely. These are not at all strictly-defined categories (for now), but rather a heuristic to get past the assumption of "there is only one kind of code". So rather than distinguishing professions/social groups, I could make a distinction between *purposes* of code-writing, which would fit better the argument of contextual meaning/contextual aesthetics that I'm pushing forward. This is how I see these four categories:

- developer/engineer -> practical purpose (must be efficient, maintainable, re-writable, clean, explicit, etc.)
- academic -> conceptual purpose (must hint at some thing greater than itself, is a metonymy for a broader concept, is itself a heuristic)
- artist -> poetic purpose (hints at a particular worldview, sustains mutliple interpretations, aims at being expressive rather than descriptive, stands closest to what a literary metaphor could be in code)
- hacker -> demonstration of skills (in which the process matters as much, if not more than the result—cf. phreaking—, prefers machine-understandability rather than human-understandability, tbc.)

> I wonder if source code can ever explain "why" it does anything outside of its own systematic workings. This perhaps comes to the issue of the meaning code has to people vs. the meaning it has to the computer -- a good topic for verbal discussion.

I would need to think about this more, and look into programming language research/operational semantics before engaging that conversation. However one thread of an answer would be Ed Finn's concept of "effective procedure", a procedure which is deemed worthwhile because it is valid both in computer terms and human terms (he takes the example of the netflix recommendation algorithm). In addition, I recently read [this paper](https://www.journals.uchicago.edu/doi/abs/10.1086/7092250) which advocates that Boole was able to develop his system of formal logic because he decided not to care about the *why* or the *how*: boolean logic only focuses on the validity of any procedure (how) and then leaves the interpretation to the humans. In this case, machine understanding and human understanding are absolutely separate. Perhaps another point of overlap between those two is that of data structures? They might represent a more direct (because they're more simple?) mapping to human mental models than what algorithms are for human mental processes.

> I think there is something higher-level than a specific programming language and lower-level than the abstract algorithm which is important to your discussion, and which you brush up against without directly confronting. That's what is called paradigm or (in a conflict with your terminology) idiom: functional, imperative, object-oriented, etc. We can call Ruby Lisp-like or say that Python's lambda is Lisp-like, but really Lisp itself is lambda-calculus-like, as are the lambda operators in these two languages. Choosing a recursive or iterative solution, using more functional or more imperative frameworks, is facilitated by many languages. This means that what is "good style" in ML depends not only on the specifics of ML, but whether you think functional or imperative programming is better, since ML supports both.

This is a very good point, and it bridges the aesthetics (form) and the poetics (content) of a program. This seems to be a good example of Kenneth Burke's idea of terministic screens: the initial words of a text set the context and the frame (i.e. the screen) for the reader to appreciate "correctly" the text. Indeed seeing (deducing?) that a program is object-oriented or functional should have consequences on how one can judge and appreciate its aesthetic features. However, I'm struggling to see to what extent it can be said that certain paradigms have "aesthetics". What I mean here is that aesthetics are manifested through the implementation of a concept. So perhaps, going one level up, paradigms have aesthetics in how they represent the broader (and common) field of computation/lambda calculus/turing completeness?

> The connection to architecture is a great one. As I was reading the beginning of the paragraph, I was wondering if you were going there, and you were. Can you continue this and map your emerging understanding of code aesthetics into architectural aesthetics? Are the intentionally obfuscated productions of hackers similar in any way to sometimes uninhabitable but structural follies (see https://urldefense.proofpoint.com/v2/url?u=https-3A__en.wikipedia.org_wiki_Folly-29-3F&d=DwIDaQ&c=slrrB7dE8n7gBJbeO0g-IQ&r=PzETIgMD0q9M9MuN-Qfb-8mokR3XuAfMcQJfIzs3Lys&m=NWnwPwQw3df5Qif9i4gZntsF5Wd7PucZ9dvI6UO9zcE&s=M5hUoJLmyfuK-BGayUtxsFeWlFC3xvaZd_TWrjdXkKs&e=

I was particularly interested by a keynote that Christopher Alexander gave at the ACM OOPSIG a couple of decades ago, in which he presented his work on patterns as "patterns which support living", and am now wondering to what extent beautiful code could be made up of "patterns which support thinking" (obviously, thinking implies "good and easy" thinking here, as I'm assuming Alexander means "good and easy life").

Some of the other thoughts that I have a regard the relationship between architect and craftsman (even though the dawn of the architect foresees the demise of the craftsman?). Do physical architects only relate to software architects (designing the overall concept rather than figuring out the building blocks).

In terms of style, I can actually see some kind of correlation (similarly to alexander's patterns above). Style can be seen in both as a form of social order, not in Foucault's sense, but rather that a sylistic imperative in software connotes group cohesion, the same way that stylistic choices in architecture connote group cohesion as well.

Finally, in terms of mapping the groups I've identified of code practitioners, here's a parallel that I can think of.
Artists: building as statement, software as a statement (e.g. brandlhuber vs. I/O/D)
Academics: sketches, concepts, ideas over realizations
Hacker: I can't seem to make a connection here, because hackers operate as underdogs, architects operate as overdogs, so to speak. i don't know enough, but i would imagine things like louvre abu dhabi's dome / mies van der rohe / starchitects who push boundaries of the possible? I would need to read up more on hackers and their practices before giving a further answer, though.

> Details: Some claims are understated, some may need substantiation. "The vast majority of code written today has been done by software engineers" doesn't seem like a controversial claim, but how exactly do you know? Lots of code has been written by students, researchers, hobbyists. When you describe code practitioners, you say "These categories include" ... but you mean "These categories are ..." And a very minor item: Beautiful Code, because it is an edited collection, can be called a book but is not a monograph.

Yes, these are all very good points. If the metric is the number of lines of codes, then we can safely assume that software developers are indeed the main contributors to code, if only just by taking Microsoft and Google products into account (I would also put open-source developers in that category, as they do ship "commercial" products). Source: https://docs.google.com/spreadsheets/d/1s9u0uprmuJvwR2fkRqxJ4W5Wfomimmk9pwGTK4Dn_UI/edit#gid=5