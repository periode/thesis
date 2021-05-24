# plan

## intro

This communication focuses on the interplay between fiction, style and tools, in order to trace a genealogy of the practices and thought which have led to the current state of AI technologies, specifically GPT-3. Indeed, since the currrent wave of interest into artificial intelligence isn't the first one, I intend to resituate it within a tradition of modern computing technologies—a tradition which started concretely with the second-half of the twentieth century, but has deeper roots. The approach here focuses mostly on approaches to thinking, and on ways of doing, *manières de faire*, in order to highlight three aspects.
First, I want to look at the assumptions within which AI practicioners were working, what were the worldviews they were surrounded with, and some of the hypotheses they grounded their work in. Second, I want to show how these approaches translate into concrete, material ways, taking the specific example of programming languages, from LISP and IPL to Python. Third, I will examine more closely some of the consequences of this shift from one epistemological stance to another, the first one which I will call *atomic*, into the second which I will call *patternic*. This will sketch out what could be some of the evolutions we might anticipate for contemporary works of fiction, through the lense of a literature of patterns.

This investigation starts from the perspective of communication sciences at large, encompassing science and technology studies, media studies, philosophy of science and literature. The main analytical lens I will rely on here is that of *style*, not just as a set of aesthetic manifestations, of formal approaches, but style as an empistemological stance. Developed by Gilles Gaston-Granger in his work *Essai pour une philosophie du style*. What he assumes throughout his work is that specific formal manifestations tend to manifest different tendencies and perspectives on a specific conceptual problem. As he analyzes the different ways of doing mathematics, from Euclides to Descartes and vector math, he identifies different ways to highlight concepts such as "scale", "distance" or "magnitude". The intertwining of "work" and "thought", he says, are ways of structuring the world, a task some also attribute to works of art. Following Gaston-Granger, then, I take style as an epistemological stance.

As the connection between the singular and the collective, style cannot be separated from inspiration. Part of what I would like to show today is also the mutually-reinforcing relationship between the not-so-distant two domains of C.P. Snow. Styles exist across both of those domains, as literary and scientific styles. Fiction and theories aren't so different from each other (such as the formulas to initiate a suspension of disbelief: *Given X...*, *Once upon a time Y...*) we will see how computer scientists themselves mention specific styles and themes of fictions in their scientific work, and how this scientific work in turn influences, more or less directly, writers of fiction.

---

## 0 - programming style and writing style and science style

differentiations of style

style can be explicit or not, from fashion to science

"le style est la fonction expressive du language"

## 0 - the early style of AI

The first approach to Artificial Research in computer science (even though it was barely called that at the time, the first CS department appearing at Purdue University in 1962), was kickstarted in 1956 at the Dartmouth Summer Reasearch Project on Artifical Intelligence. Organized by mainly John McCarthy, Marvin Minsky, Nathaniel Rochester and Claude Shannon, it was intended to formalize the diverse approaches which existed at the time, focusing more on what was then called "thinking machines" rather than Artificial Intelligence—and, indeed, the term itself was coined by McCarthy at the time. The workshop included 24 final participants, and represented what would become two of the main approaches to solving the problem of an artificial intelligence.

The results of the workshop, like so much of AI work at the time, and perhaps still today, vastly underestimated the nature and scale of the task. It did, however, establish AI research as an coherent field, and laid out foundations for two different heuristics for solving the issue of finding, I quote, *"how to make machines use language, form abstractions and concepts, solve kinds of problems now reserved for humans, and improve themselves"*. These two approaches are the physiological approach, and the formal approach. The physiological approach, favored by Minsky, intended to re-create the human brain's plasticity, with the assumption that the simulation of neurons would result in the simulation of thoughts. The formal approach, favored by McCarthy, posits in turn that the problem-space, rather than the phenomelogical space should be abstracted away in formally manipulable symbols in order to enable its processing by the computers of the time, computers designed on the assumption of the vast reach of discreete logic operations.

These two approaches are two distinct epistemological stances, the former specifically phenomenological, the other specifically rational. Historically, it is the rational approach which prevailed for a time, until the first AI winter of the 1970s and the deep learning renaissance of the early 2000s. For both of these, we can highlight two "fictional environments", which have surrounded this stage of research in AI. The first is taken from cybernetics, and the second is taken from logic and children's games. I speak of fictional environments as worldmaking backdrops for human activity. Looking at the constitutive criteria of what can make a work of fiction, according to Genette, we find intents, cultural traditions, the reader's attitude and generic conventions, all things that can shift easily over time and space. Works such as religious texts, political treaties or national epics work as both fiction and non-fiction. The attitude I take here is to consider the texts discussed below as texts of fiction, in so far as they are discursive works which depict hypothetical situations in the world, before attempting to verify them through specific stylistic approaches.

## 1 - the fictions of AI

### 1.1 two fictions

Those participants in the Dartmouth workshop, and their affiliates, are not particularly known for explicitly quoting the works of literary fiction, this connection being done rather *a posteriori* through references such as the Golem, wizards, or the Mechanical Turk. Their immediate lineage, rather, stands more closely within philosophical traditions rather than artistic ones, and in particular can be traced from Liebniz as rediscovered by Russell to Wittgenstein (whose lectures Alan Turing attended at Cambridge) and Frege. **INSERT PROOF WHICH COMES FROM MOST HISTORY OF CS PAPERS**.

#### 1.1.1 formal notations and characteristica universalis

From these works, we can now ask ourselves: which kind of world do they depict? What is the perspectve of mathematical? and how? Stylistically, the two elements which stand out here are the **symbol** and the **list**.

Starting from his Arte Combinatoria, Leibniz presents Logic as relying on two primary propositions. First, that something either exists, or does not exist [source](https://www.math.ucla.edu/~pak/hidden/papers/Quotes/Leibniz-Arte-Combinatoria.pdf), prefiguring. The other proposition is that "something exists", that it is given from outside our logical system. While the latter is a very empirical proposition, almost phenomenological, these external phenomena nonetheless need to be integrated within the logical systems through the means of *symbolization*, the set of which constituted a formal language Leibniz called *characteristica universalis*. The approach here is that of a universal encompassing, based on the combination of smaller, basic units, similar elements (monads), a sort of building blocks to which we will return later. The consequence of such a symbolization is that, in his words,

> If we had it [a characteristica universalis], we should be able to reason in metaphysics and morals in much the same way as in geometry and analysis... If controversies were to arise, there would be no more need of disputation between two philosophers than between two accountants [...] Let us calculate.

![https://en.wikipedia.org/wiki/Characteristica_universalis#/media/File:LeibnizCharacters.jpg](https://en.wikipedia.org/wiki/Characteristica_universalis#/media/File:LeibnizCharacters.jpg)

While Leibniz combines this symbolization process (of events into concept) with his concept the monad, the unary, the singular, his readers, the first of which is Bertrand Russell, depart from this stance. Contemporary predicate logic, while relying heavily on new modes of symbolic notation (such as the Peano-Russell notation), relies more on relationships between these concepts, such that `A is the C of B` doesn't mean separate things for A and B, but is rather an unit in itself, linking A and B.

This integration of the symbol into relationships of many symbols formally takes place through the **list**. Leibniz's De Arte Combinatoria, Russell's Principia Mathematica, Frege's *Begriffschrift* or Wittgenstein's Tractacus are all structured in terms of lists and sub-lists, and as such highlight the stylistic contribution to the epistemological approach of related monads, while extracting them from their original, situated existence. As Jack Goody writes in The Domestication of the Savage Mind,

> [List-making] it seems to me is an example of the kind of decontextualization that writing promotes, and one that gives the mind a special kind of lever on ‘reality’.

The list is then a way of taking symbols, pictorial language elements in order to re-assemble them in order to reconstitute the world, the re-assemble it from atoms, following a cartesianism which states that the world can always be decomposed into smaller discreete and *conceptually coherent* units, and I stress here the conceptually coherent. The next step was going to implement those tools within a computing environment.

#### 1.1.2 mccullough and anti-freud psychology

Another tradition present at the Dartmouth workshop was that of a new wave of psychologists and early cyberneticians, represented in the person of Walter McCullough. The tradition from which McCullough comes from is, at the time, dominated by the ideas of Freud, with an understanding of the mind based on the Id, the Ego and Super-Ego. Here, the stylistic stance is that of narration and interpretation of narrative events based on literary references, perhaps best seen in his *Interpretations of Dreams*. In 1930, Freud is awarded the Goethe prize for literary achievements.

In an address to the Chicago Literary Club, titled *"The Past of a Delusion"*, McCullough thoroughly attacks Freud and his theories in an equally eloquent prose. While he recognizes having similar intents as Freud, understanding the human mind, he accuses his predecessor of having the wrong approach, saying that he established libido as its own "story" and going as far as to say that "his data, method and theory are indissolubly one. Dependence of the data on the theory separates psychoanalysis from all true addresses". McCullough's style, in contrast, is more cybernetic, relying on diagrams and input/outputs.

In what is perhaps his most famous paper, "*A LOGICAL CALCULUS OF THE IDEAS IMMANENT IN NERVOUS ACTIVITY*", co-written with Walter Pitts, he connects the systematic and input-output procedures dear to cybernetics with the predicate logic writing style of Russell and others. Prominently featured, in the middle of the paper is a more visual and diagrammatic approach (pic from https://www.cs.cmu.edu/~./epxing/Class/10715/reading/McCulloch.and.Pitts.pdf). This attachment to input and output, rather than self-contained propositions, finds an echo in his critique of Freud:

> "In the world of physics, if we are to have any knowledge of that world, there must be nervous impulses in our heads which happen only if the worlds excites our eyes, ears, nose or skin". (The Past of a Delusion)

This is to be kept in mind when he is recorded as stating, during the Dartmouth conference, that he "believes that the human brain is a Turing machine" ([source](http://raysolomonoff.com/dartmouth/boxa/dart56more5th6thweeks.pdf))—in this sense, it is seen first and foremost as an input/output machine, where the intake devices are essential. Going further in the processes of the brain, he indeed finds out, with Letvinn and Pitts, that the organs through which the world excites the brain *are themselves* agents of process, activating a series of probabilistic techniques, such as noise reduction, to provide a signal to the brain which isn't the untouched, unary, *symbolical* version of the signal input by the external stimuli.

**INSERT IMAGE HERE**

The cyberneticians such as McCullough, Pitts then took the opposite of the existing conceptions of what the mind is, namely psychoanalysis's, by approaching it through inputs and outputs, and using two-dimensional diagrams of feedback loops and statistical distribution in order to represent the same thought operations as the mathematical logic approach (e.g. see McCcullough's diagrams of logical propositions: https://en.wikipedia.org/wiki/Randolph_diagram more visual).

Now that we've approached to of the main theoretical assumptions, fictions if you will, present at the Dartmouth workshop, either grasping intelligence through formal language, or through statistical, spatial, input-output relations, we can move on to their implementation. If style does affect the research, the tools implementing it also reflect this stylistic stance.

---

## 2 - the role of language

There are two matters in programming: languages and data. First we look at Lisp, in terms of languages, and then we look at Python, in terms of data.

### 2.1 language as abstraction

#### 2.1.1 presentation of lisp

but also talk about newell and simon's Information Processing Language

#### 2.1.2 lisp as self-contained

the interpreter

### 2.2 language as material

as input (programming languages)

and output (data, json, corpus, word2vec, etc.)

### 2.3 the impracticality of working with lisp

### 1.2 practical fictions

#### 1.2.1 games

make believe, rules, etc.   

turing - wittgenstein (opposite approaches?)

arthur samuel made a checkers program: https://en.wikipedia.org/wiki/Arthur_Samuel

selfridge wrote children's books. he also introduced the idea of demons (things that record events as they occur, recognize patterns in those events, and may trigger subsequent events according to patterns they recognize)

#### 1.2.2 children's worlds

thesis of mccarthy

winograd -> blocks world -> symbolic artifical intelligence

#### today

only schools, fantasies (YCombinator), OOP and C worked better

Lisp as a myth for today's programmers

not just computer scientists, but also the of the programmers that come after

---

## 3 styles as epistemological stances

In this section, we've seen the limits to LISP, and why it's not used today anymore. What is the Python style? (data, diagramming, scripting)

### 3.2 today's paradigms

from lisp to python, scripting is anything

### 3.3 from the formal to the embodied

mccarthy -> minsky

patterns: These three factors – creating probabilistic machine learning classifiers for concepts without worrying about their generality, creating and using massive infrastructures to combine and mix-n-match machine learning algorithms, as well as combining the outputs of humans and machines in carefully human supervised ways – it seems to me that these explain better the revival of AI, as well as the reason why many people fear its political-economic implications.

### 3.4 literature and science

it was intertwined before, it is still intertwined

what is the lisp of today? platforms (tensorflow, etc.)

## 4 some consequences: a literature of patterns

???

extending the domain of literature (any input is good input, not just the symbolical ones)

*reducing* from the richness of the world, rather than *essentializing*

a literature of slightly look-alikes. a litterature of genres. the location of the creator shifts once more: (e.g. new layer, see pandemonium architecture also has this weird aspect of "demons" that occur at different stages of the cognition process (THINK OF PATTERN LITERATURE AS STAGE LITERATURE?))

the beauty of the glitch