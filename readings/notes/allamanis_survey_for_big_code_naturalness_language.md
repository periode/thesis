# A Survey of Machine Learning for Big Code and Naturalness

## allamanis et. al

### https://arxiv.org/pdf/1709.06182.pdf

---

they make interesting assumption: using ML to generate code is starting from the hypothesis of similarity to human language

---

**The naturalness hypothesis**: Software is a form of human communication; software corpora have similar statistical properties to natural language corpora; and these properties can be exploited to build better software engineering tools

> Programming languages narrow the gap between computers and the human mind: they construct palatable abstractions out of a multitude of minute state transitions. Source code has two audiences and is inherently **bimodal**: it communicates along two channels: one with humans, and one with computers. Humans must understand code to read and write it; computers must be able to execute it. The bimodality of code drives the similarities and differences between it and text

> Code is often semantically brittle —small changes (e.g. swapping function arguments) can drastically change the meaning of code; whereas natural language is more robust in that readers can often understand text even if it contains mistakes. (p.5)

> Programming languages, on the other hand, can be translated between each other exactly, as all mainstream programming languages are Turing-complete. (That said, porting real-world programs to new languages and platforms remains challenging in practice).

[ruby parsing ambiguities](https://po-ru.com/2008/01/28/ruby-parsing-ambiguities)

> Finally, executability gives rise to additional modalities of code — its static and dynamic views (e.g. execution traces), which are not present in text. **Learning over traces or flows are promising directions**

the trace is an interesting concept: like ariadne's thread

CODE MUST BE SYNTACTICALLY AMBIGUOUS, but it's conceptuall ambiguous (e.g. what does `counter` refer to?)

> Code’s two channels, the algorithmic and the explanatory channels, interact through their semantic units, but mapping code units to textual units remains an open problem. Natural semantic units in code are identifiers, statements, blocks, and functions. None of these universally maps to textual semantic units.

> an arbitrary statement is far more likely to use domain-specific, even project-specific, names or neologisms than an arbitrary sentence is. Blocks vary greatly in length and semantics richness and often lack clear boundaries to a human reader. Functions are clearly delimited and semantically rich, but long.

> A function differs from a sentence or a sequence of sentences, i.e. a paragraph, in that it is named and called, while, in general settings, sentences or paragraphs rarely have names or are referred to elsewhere in a text. Further, a single function acts on the world, so it is like a single action sentence, but is usually much longer, often containing hundreds of tokens, and usually performs multiple actions, making a function closer to a sequence of sentences, or a paragraph, but paragraphs are rarely solely composed of action sentences

#### patterns

they are necessary for a statistical ingestion of code, such as Hellendoorn and Devanbu [84] noticed that code has a high degree of *localness*, where identifiers (e.g. variable names) are repeated often within close distance.

aka patterns have a technical manifestation as well