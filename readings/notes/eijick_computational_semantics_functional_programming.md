# computational semtantics with functional programming

## jan va eijick

### cambridge university press, 2012

---

again, mostly NLP

---

#### 1. formal study of natural language

chomsky's *competence* (receiver, able to identify a correct sentence), and *performance* (emitter, able to formulate a correct sentence)

> Grammars can be viewed as models of our language competence. (rulesets)

a beautiful grammar? the beauty of applied grammars? what is the relationship between beauty and grammar?

> Semantics investigates meanings of basic expressions and how meaning is as signed to complex expressions based on the meaning of simpler expressions and
syntactic structure.

and then **pragmatics**, which is the actual use-case, the context, the *extralinguistic structure*.

> In a slogan: syntax studies Form, semantics studies Form + Content, and pragmatics studies Form + Content + Use.

> The difference between natural and formal languages lies in the manner in which the sets of strings are given. In the case of formal languages, the language is given by stipulative definition: a string belongs to the language if it is produced by a grammar for that language, or recognized by a parsing algorithm for that language. A parsing algorithm for C, say, can be wrong in the sense that it does not comply with the International Standard for the C programming language, but ultimately there is no right or wrong here: the way in which formal languages are given is a matter of definition.

> Explanations of meaning fall in two broad classes: meaning as knowing how and meaning as knowing that. If we say that Johnny doesn’t know the meaning of a good spanking, we refer to **operational** meaning. If Helen Keller writes that water means the wonderful cool something that was flowing over her hand, then she refers to meaning as reference, or **denotational** meaning. Often operational meaning is more fine-grained than denotational meaning. For instance, **the expressions seven plus five and two times six both refer to the natural number twelve, so their denotational meaning is the same. But they have different operational meaning, for the recipe for adding seven and five is different from the recipe for multiplying two and six.**

> A very important use of language, and one that we will be concerned with a lot in the following pages, is as a tool for describing states of affairs and as a reasoning tool. This is a use which formal languages and natural language have in common. Formal languages are often designed as query tools or reasoning tools, or at least as tools for formal reconstructions of reasoning processes.

one common part of natural and formal languages is *propositional logic* (aka Boolean logic). when we become more entangled in relationships between actors and objects, we enter *predicate logic*. higher up the ladder of expressivity comes *typed higher-order logic* and finally *epistemic logic*.

natural languages are supposedly understandable via *formal semantics* (logical approaches to natural semantics).

some crucial design features of human languages:

- duality of patterning, or double articulation (morphemes (meaningful) vs. phonemes (useful in distinguishing))
- recursion (structural patterns can repeat themselves: green bird, small green bird, beautiful small green bird)
- contextuality (as expected)
- compositionality (This principle is usually attributed to the German mathematician Gottlob Frege (1848–1925). What it says is that the meaning of a complex expression de- pends on the meanings of its parts and the way they are combined syntactically.)

> Besides natural languages, there are other symbol-manipulating systems that also show some of the properties listed above, for example the language of pred- icate logic and high-level programming languages like C, LISP, and Haskell. But these apparently lack other properties of human languages. For example, they lack the whole pragmatic dimension that human languages employ: deception, irony, conveying information without explicitly stating it, and capabilities like cre- ating and understanding metaphors. Formal languages also lack the flexibility of human languages induced by vagueness together with heavy use of context and background knowledge. These differences, in fact, are the reason why natural lan- guages are well-suited for efficient inter-human communication, whereas formal languages excel for doing mathematics and for interacting with computers.

p.9