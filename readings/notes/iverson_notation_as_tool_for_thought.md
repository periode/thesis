# notation as a tool for thought

## kenneth iverson

### [link](https://www.jsoftware.com/papers/tot.htm)

---

paper by someone at IBM, who is developing the J programming language

---

> Concerning language, George Boole in his Laws of Thought [1, p.24] asserted “That language is an instrument of human reason, and not merely a medium for the expression of thought, is a truth generally admitted.”

> Mathematical notation provides perhaps the best-known and best-developed example of language used consciously as a tool of thought.

cajori, *a history of mathematical notation*

> By relieving the brain of all unnecessary work, a good notation sets it free to concentrate on more advanced problems, and in effect increases the mental power of the race. -A.N. Whiteheads

> The quantity of meaning compressed into small space by algebraic signs, is another circumstance that facilitates the reasonings we are accustomed to carry on by their aid. -Charles Babbage

> Nevertheless, mathematical notation has serious deficiencies. In particular, it lacks universality, and must be interpreted differently according to the topic, according to the author, and even according to the immediate context. Programming languages, because they were designed for the purpose of directing computers, offer important advantages as tools of thought. Not only are they universal (general-purpose), but they are also executable and unambiguous. Executability makes it possible to use computers to perform extensive experiments on ideas expressed in a programming language, and the lack of ambiguity makes possible precise thought experiments.

so apparently programming languages are better than mathematical notation because of the unambiguity and universality (but i'd argue that the universality is actually a negative aspect of communicating specific, local ideas).

In addition to the executability and universality emphasized in the introduction, a good notation should embody characteristics familiar to any user of mathematical notation:

- Ease of expressing constructs arising in problems.
  - > If it is to be effective as a tool of thought, a notation must allow convenient expression not only of notions arising directly from a problem, but also of those arising in subsequent analysis, generalization, and specialization.
- Suggestivity.
  - >A notation will be said to be suggestive if the forms of the expressions arising in one set of problems suggest related expressions which find application in other problems.
- Ability to subordinate detail.
  - > As Babbage remarked in the passage cited by Cajori, brevity facilitates reasoning. Brevity is achieved by subordinating detail, and we will here consider three important ways of doing this: the use of arrays, the assignment of names to functions and variables, and the use of operators.
- Economy.
  - > The utility of a language as a tool of thought increases with the range of topics it can treat, but decreases with the amount of vocabulary and the complexity of grammatical rules which the user must keep in mind. Economy of notation is therefore important.
  - cf. Java and verbosity
  - > Economy requires that a large number of ideas be expressible in terms of a relatively small vocabulary. A fundamental scheme for achieving this is the introduction of grammatical rules by which meaningful phrases and sentences can be constructed by combining elements of the vocabulary.
- Amenability to formal proofs.
  - this is essential to mathematics. actually, the whole idea of a formal proof is that you don't have to redo the proven process yourself, you don't have to debug it, just by reading you are *certain* that it works. so formal proofs do have a connection to the exclusive reading of source code.

#### conclusions

> It is necessary to ask further questions concerning the total bulk of notation required, the degree of structure in the notation, and the degree to which notation introduced for a specific purpose proves more generally useful.

factors in notation:

- amount
- structure
- specificity/generality (scope)

> Secondly, it is important to distinguish the difficulty of describing and of learning a piece of notation from the difficulty of mastering its implications.

> Finally, overemphasis of efficiency leads to an unfortunate circularity in design: for reasons of efficiency early programming languages reflected the characteristics of the early computers, and each generation of computers reflects the needs of the programming languages of the preceding generation.

^ ends on a nice material note