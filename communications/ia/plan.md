# plan

## intro

This communication focuses on the interplay between fiction, style and tools, in order to trace a genealogy of the practices and thought which have led to the current state of AI technologies, specifically GPT-3. Indeed, since the currrent wave of interest into artificial intelligence isn't the first one, I intend to resituate it within a tradition of modern computing technologies—a tradition which started concretely with the second-half of the twentieth century, but has deeper roots. The approach here focuses mostly on approaches to thinking, and on ways of doing, *manières de faire*, in order to highlight three aspects.
First, I want to look at the assumptions within which AI practicioners were working, what were the worldviews they were surrounded with, and some of the hypotheses they grounded their work in. Second, I want to show how these approaches translate into concrete, material ways, taking the specific example of programming languages, from LISP and IPL to Python. Third, I will examine more closely some of the consequences of this shift from one epistemological stance to another, the first one which I will call *atomic*, into the second which I will call *patternic*. This will sketch out what could be some of the evolutions we might anticipate for contemporary works of fiction, through the lense of a literature of patterns.

This investigation starts from the perspective of communication sciences at large, encompassing science and technology studies, media studies, philosophy of science and literature. The main analytical lens I will rely on here is that of *style*, not just as a set of aesthetic manifestations, of formal approaches, but style as an empistemological stance. Developed by Gilles Gaston-Granger in his work *Essai pour une philosophie du style*. What he assumes throughout his work is that specific formal manifestations tend to manifest different tendencies and perspectives on a specific conceptual problem. As he analyzes the different ways of doing mathematics, from Euclides to Descartes and vector math, he identifies different ways to highlight concepts such as "scale", "distance" or "magnitude". The intertwining of "work" and "thought", he says, are ways of structuring the world, a task some also attribute to works of art. Following Gaston-Granger, then, I take style as an epistemological stance.

As the connection between the singular and the collective, style cannot be separated from inspiration. Part of what I would like to show today is also the mutually-reinforcing relationship between the not-so-distant two domains of C.P. Snow. Styles exist across both of those domains, as literary and scientific styles. Fiction and theories aren't so different from each other (such as the formulas to initiate a suspension of disbelief: *Given X...*, *Once upon a time Y...*) we will see how computer scientists themselves mention specific styles and themes of fictions in their scientific work, and how this scientific work in turn influences, more or less directly, writers of fiction.

There are two matters in programming: languages and data. First we look at Lisp, in terms of languages, and then we look at Python, in terms of data.

---

## 0 - programming style and writing style and science style

**TODO MORE**

differentiations of style

style can be explicit or not, from fashion to science

"le style est la fonction expressive du language"

## 0 - the early style of AI

The first approach to Artificial Research in computer science (even though it was barely called that at the time, the first CS department appearing at Purdue University in 1962), was kickstarted in 1956 at the Dartmouth Summer Reasearch Project on Artifical Intelligence. Organized by mainly John McCarthy, Marvin Minsky, Nathaniel Rochester and Claude Shannon, it was intended to formalize the diverse approaches which existed at the time, focusing more on what was then called "thinking machines" rather than Artificial Intelligence—and, indeed, the term itself was coined by McCarthy at the time. The workshop included 24 final participants, and represented what would become two of the main approaches to solving the problem of an artificial intelligence.

The results of the workshop, like so much of AI work at the time, and perhaps still today, vastly underestimated the nature and scale of the task. It did, however, establish AI research as an coherent field, and laid out foundations for two different heuristics for solving the issue of finding, I quote, *"how to make machines use language, form abstractions and concepts, solve kinds of problems now reserved for humans, and improve themselves"*. These two approaches are the physiological approach, and the formal approach. The physiological approach, favored by Minsky, intended to re-create the human brain's plasticity, with the assumption that the simulation of neurons would result in the simulation of thoughts. The formal approach, favored by McCarthy, posits in turn that the problem-space, rather than the phenomelogical space should be abstracted away in formally manipulable symbols in order to enable its processing by the computers of the time, computers designed on the assumption of the vast reach of discreete logic operations.

These two approaches are two distinct epistemological stances, the former specifically phenomenological, the other specifically rational. Historically, it is the rational approach which prevailed for a time, until the first AI winter of the 1970s and the deep learning renaissance of the early 2000s. For both of these, we can highlight two "fictional environments", which have surrounded this stage of research in AI. The first is taken from cybernetics, and the second is taken from logic and children's games. I speak of fictional environments as worldmaking backdrops for human activity. Looking at the constitutive criteria of what can make a work of fiction, according to Genette, we find intents, cultural traditions, the reader's attitude and generic conventions, all things that can shift easily over time and space. Works such as religious texts, political treaties or national epics work as both fiction and non-fiction. The attitude I take here is to consider the texts discussed below as texts of fiction, in so far as they are discursive works which depict hypothetical situations in the world, before attempting to verify them through specific stylistic approaches.

## 1 - the fictions of AI

### 1.1 two fictions

Those participants in the Dartmouth workshop, and their affiliates, are not particularly known for explicitly quoting the works of literary fiction, this connection being done rather *a posteriori* through references such as the Golem, wizards, or the Mechanical Turk. Their immediate lineage, rather, stands more closely within philosophical traditions rather than artistic ones, and in particular can be traced from Liebniz as rediscovered by Russell to Wittgenstein (whose lectures Alan Turing attended at Cambridge) and Frege. **INSERT PROOF WHICH COMES FROM MOST HISTORY OF CS PAPERS**. https://archive.org/details/arguingai00samw

#### 1.1.1 formal notations and characteristica universalis

From these works, we can now ask ourselves: which kind of world do they depict? What is the perspectve of mathematical? and how? Stylistically, the two elements which stand out here are the **symbol** and the **list**.

Starting from his Arte Combinatoria, Leibniz presents Logic as relying on two primary propositions. First, that something either exists, or does not exist [source](https://www.math.ucla.edu/~pak/hidden/papers/Quotes/Leibniz-Arte-Combinatoria.pdf), prefiguring. The other proposition is that "something exists", that it is given from outside our logical system. While the latter is a very empirical proposition, almost phenomenological, these external phenomena nonetheless need to be integrated within the logical systems through the means of *symbolization*, the set of which constituted a formal language Leibniz called *characteristica universalis*. The approach here is that of a universal encompassing, based on the combination of smaller, basic units, similar elements (monads), a sort of building blocks to which we will return later. The consequence of such a symbolization is that, in his words,

> If we had it [a characteristica universalis], we should be able to reason in metaphysics and morals in much the same way as in geometry and analysis... If controversies were to arise, there would be no more need of disputation between two philosophers than between two accountants [...] Let us calculate.

![https://en.wikipedia.org/wiki/Characteristica_universalis#/media/File:LeibnizCharacters.jpg](https://en.wikipedia.org/wiki/Characteristica_universalis#/media/File:LeibnizCharacters.jpg)

While Leibniz combines this symbolization process (of events into concept) with his concept the monad, the unary, the singular, his readers, the first of which is Bertrand Russell, depart from this stance. Contemporary predicate logic, while relying heavily on new modes of symbolic notation (such as the Peano-Russell notation), relies more on relationships between these concepts, such that `A is the C of B` doesn't mean separate things for A and B, but is rather an unit in itself, linking A and B.

This integration of the symbol into relationships of many symbols formally takes place through the **list**. Leibniz's De Arte Combinatoria, Russell's Principia Mathematica, Frege's *Begriffschrift* or Wittgenstein's Tractacus are all structured in terms of lists and sub-lists, and as such highlight the stylistic contribution to the epistemological approach of related monads, while extracting them from their original, situated existence. As Jack Goody writes in The Domestication of the Savage Mind,

> [List-making] it seems to me is an example of the kind of decontextualization that writing promotes, and one that gives the mind a special kind of lever on ‘reality’.

In his work *The Domestication of the Savage Mind*, Goody examines lists as inventories, early textbooks, administrative lists as public mnemotechnique. The list is then a way of taking symbols, pictorial language elements in order to re-assemble them in order to reconstitute the world, the re-assemble it from atoms, following a cartesianism which states that the world can always be decomposed into smaller discreete and *conceptually coherent* units, and I stress here the conceptually coherent. The list, Goody continues, establish clear-cut boundaries, they are simple, they are abstract and discontinuous. Both being based on some singular, symbolical entity, it becomes possible to apply logical calculus to lists and their elements. The next step was going to implement a way to do so within a computing environment.

## 2 - putting these ideas into Lisp

This took the form of a programming language, LISP. LISP stands for *LISt Processor* and, as such, processes lists. LISP was developed in 1958, the year of the Dartmouth workshop, by its organizator, John McCarthy. It built on some of the ideas of another programming language, the first geared towards AI, IPL (Information-Processing Language). IPL was created by Allen Newell, Cliff Shaw and Herbert A. Simon (who would go on to work a Nobel prize in Economics for his work in that field). IPL's fundamental construct is the symbol, which are more or less mapped to physical addresses and cells in the computer's memory.

IPL was designed to demonstrate the theorems of Russell's *Principia Mathematica* and as such represents the very concrete link between the ideas exposed in the writing of the mathematical logicians and the actual design and construction of electrical machines activating these ideas, an interplay between thinking and doing which has been shown in the anthropological work of Sennett, Pye, Ingold.

IPL was used to write a couple of early AI programs, such as the *Logic Theorist*, the *General Problem Solver* and some computer chess and checkers programs, all programs which separated the knowledge of the problem (input data) and ways to solve it (internal rules), but soon displaced by LISP.

The base structure of LISP are not symbols, but lists (of symbols, of lists, of data), and they themselves act as symbols (as with the empty list). [http://jmc.stanford.edu/articles/lisp/lisp.pdf] and [http://web.cse.ohio-state.edu/~rountev.1/6341/pdf/Manual.pdf] By manipulating those lists recursively—that it, processing something in terms of itself—Lisp highlights some tendency to separate itself from the problem domain, in other terms the real world. One of the features of LISP that have stood out the test of time (it's the second oldest programming language to still survive today, younger only that FORTRAN) is that it can be defined in terms of itself. Its structure is atomistic and relational: in order to solve what it has do, it evaluates each symbol and traverses a tree-structure in order to find a terminal symbol. **TODO it also is functional, so it's this linearity of logic**

```lisp
(define (eval exp env)
  (cond ((self-evaluating? exp) exp)
        ((quoted? exp) (text-of-quotation exp))
        ((variable? exp) (lookup-variable-value exp env))
        ((definition? exp) (eval-definition exp env))
        ((assignment? exp) (eval-assignment exp env))
        ((lambda? exp) (make-procedure exp env))
        ((conditional? exp) (eval-cond (clauses exp) env))
        ((application? exp)  (apply (eval (operator exp) env)
                                          (list-of-values (operands exp) env)))
        (else (error "Unknown expression type -- EVAL" exp))))


(define (apply procedure arguments)
  (cond ((primitive-procedure? procedure
            (apply-primitive-procedure procedure arguments)))
        ((compound-procedure? procedure)
            (eval-sequence (procedure-body procedure)
                                  (extend-environment
                                     (parameters procedure)
                                     arguments
                                     (procedure-environment procedure))))
        (else  (error "Unknown procedure type -- APPLY" procedure))))
```

This sort of procedure is actually quite similar to the approach suggested by Noam Chomsky whe he published his *"Syntactic Structures"*, a study highlighting the tree structure of language, and a heuristic to decompose sentences until the smallest conceptually coherent parts (Phrase -> Verb-Phrase + Noun Phrase). The style is similar, insofar as it proposes a general ruleset (or the at least the existence of one) in order to construct more complex constructs through simple parts, agin in a very cartesian way.

Because of its direct manipulation of conceptual units upon which logic operations can be executed, Lisp became the language of AI, an intelligence conceived as first and foremost logical, if not algebraic. The first projects developed in LISP were PhD theses on algorithmic manipulation, using mathematical formulas as highly formalized version of a mathematical expression, with a strong background of a quest for artificial intelligence. One of them, Joel Moses's 1967 doctoral dissertation, supervised by Minsky, features the dedication:

> To the descendants of the Maharal,
> who are endeavoring to build a Golem.

This thesis also highlights another tendency of the AI research at the time—an ambiguity towards embodiment. Programs are given human names (STUDENT, SOLDIER, DOCTOR, ELIZA, and more dramatically SIN and SAINT) and somewhat anthropomorphized, as their performance is often measured in comparison with a freshman, an amateur, etc. Lisp here is the diagram of a brain, with a generic name but no specific situatedness.

The use of LISP culminated in the *SHRDLU* program, a natural language understanding program built in 1968-1970 by Terry Winograd which aimed precisely at tackling this issue of situatedness. The program had the particularity of functioning with a "blocks world" a highly simplified version of the world, nonetheless made physical. The computer system is expected to take into account the rest of the world and interact in natural language with a human, about this world. While incredibly impressive at the time, SHDRLU's success was nonetheless relative. It could only succeed at giving barely acceptable results within highly symbolic environments, devoid of any noise. Writing in 2004, its author Terry Winograd writes:

> There are fundamental gulfs between the way that SHRDLU and its kin operate, and whatever it is that goes on in our brains. I don’t think that current research has made much progress in crossing that gulf, and the relevant science may take decades or more to get to the point where the initial ambitions become realistic.

[http://hci.stanford.edu/winograd/shrdlu/]

Indeed, LISP-based AI was working on what Seymour Papert has called "toy problems"—children's stories, or simple puzzles or games. In these, the world is reduced from its complexity and multi-consequential relationships to a finite, discreete set of concepts and situations. Confronted to the real world—that is, to commercial exploitation—LISP's model of symbol manipulation, which proved successful in those controlled scenarios, started to be applied to issues of natural language understanding and generation in broader applications. Despite disappointing reviews from government reports regarding the effectiveness of these AI techniques, commercial applications flourished, such as Lisp Machines, Inc. and Symbolics. Yet, in the 1980s, over-promising, under-delivering often stemming from the combinatorial explosion deriving from the list- and tree-based representations required a new approach.

#### 1.1.2 mccullough and anti-freud psychology

Coming back to the Dartmouth workshop, there was another tradition than that of logical mathematics, with a different stylistic approach. These were a new wave of psychologists and early cyberneticians, represented in the person of Walter McCullough. The tradition from which McCullough comes from is, at the time, dominated by the ideas of Freud, whose understanding of the mind is based on the Id, the Ego and Super-Ego. Here, the stylistic stance is that of narration and interpretation of narrative events based on literary references, perhaps best seen in his *Interpretations of Dreams*. In 1930, Freud is awarded the Goethe prize for literary achievements.

In an address to the Chicago Literary Club, titled *"The Past of a Delusion"*, McCullough thoroughly attacks Freud and his theories in an equally eloquent prose. While he recognizes having similar intents as Freud, understanding the human mind, he accuses his predecessor of having the wrong approach, saying that he established libido as its own "story" and going as far as to say that "his data, method and theory are indissolubly one. Dependence of the data on the theory separates psychoanalysis from all true addresses". Here again, it seems that style is undoubtedly tied to content. McCullough's style, in contrast, is more cybernetic, relying on diagrams and input/outputs.

In what is perhaps his most famous paper, "*A LOGICAL CALCULUS OF THE IDEAS IMMANENT IN NERVOUS ACTIVITY*", co-written with Walter Pitts, he connects the systematic and input-output procedures dear to cybernetics with the predicate logic writing style of Russell and others. Prominently featured, in the middle of the paper is a more visual and diagrammatic approach (pic from https://www.cs.cmu.edu/~./epxing/Class/10715/reading/McCulloch.and.Pitts.pdf). This attachment to input and output, rather than self-contained propositions, finds an echo in his critique of Freud:

> "In the world of physics, if we are to have any knowledge of that world, there must be nervous impulses in our heads which happen only if the worlds excites our eyes, ears, nose or skin". (The Past of a Delusion)

This is to be kept in mind when he is recorded as stating, during the Dartmouth conference, that he "believes that the human brain is a Turing machine" ([source](http://raysolomonoff.com/dartmouth/boxa/dart56more5th6thweeks.pdf))—in this sense, it is seen first and foremost as an input/output machine, a reading/writing machine, where the intake devices are essential. Going further in the processes of the brain, he indeed finds out, with Letvinn and Pitts, that the organs through which the world excites the brain *are themselves* agents of process, activating a series of probabilistic techniques, such as noise reduction, to provide a signal to the brain which isn't the untouched, unary, *symbolical* version of the signal input by the external stimuli.

**INSERT IMAGE HERE** https://neuromajor.ucr.edu/courses/WhatTheFrogsEyeTellsTheFrogsBrain.pdf

**SECTION ON DIAGRAMS** [https://userpage.fu-berlin.de/~sybkram/media/downloads/Epistemology_of_the_line.pdf]

The cyberneticians such as McCullough, Pitts based their conception of the mind by approaching it through inputs and outputs, and using two-dimensional diagrams of feedback loops and statistical distribution in order to represent the same thought operations as the mathematical logic approach (e.g. see McCcullough's diagrams of logical propositions: https://en.wikipedia.org/wiki/Randolph_diagram more visual).

In the endeavour of grasping intelligence, we've seen two epistemological stances: either through formal notations, deriving from mathematical logic, or through statistical, diagrammatic, input-output relations, coming from a more biological approach. In the latter approach, it lead to the rise (and not appearance) of the field of machine learning, often conflated with artificial intelligence.

**SECTION ON MINSKY**

minsky 1985 society of mind -> switch

minsky was also a consultant on HAL

---

### 4 python and machine learning

Artificial Intelligence today is no longer written in Lisp, but rather in Python and C++, illustrating what I consider a shift to digital materiality. While McCarthy's earlier approach to AI was based on way of representing the world that was decontextualizing it, since the early 2000s the opposite has taken a firm grasp on the field.

There are three factors which can explain this new rise in AI:

- creating probabilistic machine learning classifiers for concepts without worrying about their generality
- creating and using massive infrastructures to combine and mix-n-match machine learning algorithms
- combining the outputs of humans and machines in carefully human supervised ways

Following Gaston-Granger, we can ascribe to the move from Lisp to Python what he considered being a loss in rigorousness (in defining concepts through symbols), for a gain in effectivity. Indeed, most machine learning methods construct hypotheses from data.  So (to use a classic example), if a large set of data contains several instances of swans being white and no instances of swans being of other colors, then a machine learning algorithm might make the inference that “all swans are white.” Suchan inference is “inductive” rather than “deductive.” Deductive inferences follow necessarily and logically from their premisses, whereas inductive ones are hypotheses, which are always subject to falsification by additional data. [https://ai.stanford.edu/~nilsson/QAI/qai.pdf]

Additionally, Python is not a specific language, in the sense that it doesn't actually ascribe to a particular style, or paradigm, but is rather a scripting language: it allows for multiple styles, and solves *ad hoc* situation, in a similar way that Perl is considered a "glue language". GPT-3's current model is called DaVinci, echoing the Renaissance man's various expertises.

![https://imgs.xkcd.com/comics/lisp.jpg](https://imgs.xkcd.com/comics/lisp.jpg)

To what extent does Python match McCullough and the cybernetic approach to intelligence? It does so in several ways. First, it provides an easy interface to a variety of complex datatypes, external sources of information which machine learning models depend heavily on. While Lisp took pride on focusing on a small, abstract set of primitive types, Python allows for complex spatial inputs, called *data frames*. Second, Python couples this external input with "under the hood" C++ bindings such as Keras, Torch or Tensorflow, a fast, complex and somewhat lower language than either Python or Lisp. C++ stands as close to the machine as Lisp, but doesn't bother itself with complex abstractions—it does the job and it is *fast*. We could interpret this as a similar mind-body duality, but this one is much more intertwined, taking into full account the need for external stimuli, and the need for fast processing, two things which Lisp did not excel at.

### 5 digital matter

So what difference does it make that the official implementation of OpenAI's GPT-3 is written in Python? First, the requirement is that we are no longer considering language as a connected list of atomistic entities, but rather as a continuous, highly-dimensional vector space built from deductive methods. Text is transformed into spatial data, and retrieved as spatial data, before being converted again into a human-readable format for us to read. Instead of assuming a pre-existing abstract structure, a generative grammar of sorts, it builds a landscape of all the writings on the web and looks for directions within that landscape.

Second, the fact that the input step is itself a semantic processing of sorts, as in McCullough and Pitts. The Transformer architecture, on which GPT-3 is based, extracts the words from a source document and, in doing so, relates it to every other words in the same document, creating a multidirectional web of relations rather than being restricted to the immediate previous and following words, in a process called **attention**.

![https://cdn-images-1.medium.com/max/1200/1*HunNdlTmoPj8EKpl-jqvBA.png](https://cdn-images-1.medium.com/max/1200/1*HunNdlTmoPj8EKpl-jqvBA.png)

Third, it is that scale makes a difference. GPT-3 is huge, and gets its impressive language generation features from the massive number of parameters it has been trained on (175 billion, two orders of magnitude than its predecessors). Architecturally, it is similar to GPT-2, so its prowess comes essentially from this dataset. It should also be noted that this performance in text generation is well above average, but that its reasoning and explaining skills are well below average, making it far from being a closer candidate to artificial intelligence.

### 3.4 exploring text

Python then allows for text being treated as an incredibly vast landscape, and GPT-3 allows us to navigate that landscape with disconcerting accuracy. A very literal application of this new phenomena can be seen in the game AI Dungeon. Mimicking the classic *Colossal Cave Adventure*, in which players explore multi-dimensional text spaces in the 1970s, *AI Dungeon* allows us to read and write our way through a complex and self-generating maze of places and characters, none of it being ever pre-written by the developers.

And yet, they were pre-written. Not by the developpers, but by all the humans and bots who have written the hundreds of billions of words that compose GPT-3's training data; there is nothing novel in the output, only in the recombination of the output. With GPT-3, text is always contiguous, it's always on the edge of something else, to which it can jump easily and most of the time very coherently.

## 4 some consequences: a literature of patterns

From logical to diagram, from Lisp to Python, human texts are now represented in such a spatial, almost materialistic (if we consider data being a computer's matter, and indeed training GPT-3 required so much electricity that the bill raked up 100 of millions of dollars!). Since this landscape is constructed, it is a snapshot of who we are as a networked, writing species. It finds the patterns in our collective work, and extracts them back to us. David Rokeby considered the computer as a *prosthetic organ for philosophy*, and I think GPT-3 can be a prosthetic organ for literature. Whatever output it gives us, we still have the agency to accept, reject or adapt it. When asked to write, GPT-3 gives us a literature of slightly look-alikes. a litterature of genres, something Pierre-Carl Langlais has very well exposed in [his communication](https://ia-fictions.net/en/participants/pierre-carl-langlais). Turing would indeed be amused, because it's not creating anything, rather it's imitating everything, without ascribing any particularly meaning of aggression, empathy, love or loss, unless specifically told what these are. This equivocal treatment begs the question of originality.

Perhaps we can also answer this in terms of style. Style is the connection between the individual and the collective, how one structures one's own thoughts and creations to the existing thoughts and creation of other which were, or are, present in the world with us. An individual stands out so much from the landscape, a glitch of sorts, and performs so well that others integrate it within the common unconscious. So if we cannot escape the fact that there is nothing truly original or something truly autotelic, whose meaning is absolutely pure, style, and literature, can set a direction for the rest of the writers, those who blog, tweet, post and comment, as long as it integrates with these other forms of literature.