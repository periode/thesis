# Programming Language Pragmatics

## Michael Scott

### Morgan Kaufman, 2009

---

the most recent and referenced textbook in programming languages for software developers

---

Semantics is the **decoration** of parse trees/ASTs (which is the process of evaluating attributes, which can be either *synthesized* or *inherited*)

Since decoration is the addition of a new layer (a semantic layer) on top of a base layer (a syntactic one), then this leads to some sort of *meta*-programming. It happens at a higher level, indeed, but it is still restrained to the fact that it is, indeed, programming (therefore syntax based?).

> Attribute grammars do not really specify the meaning of a program; rather,they provide a way to associate a program with something else that presumablyhas meaning (p.167)

There are two approaches:

- denotational semantics (refer to the domain theory, where they point to something)
- axiomatic semantics (intransitive)

synthesized: attributes are given only on the left side
inherited: attributes are calculated on the right side, and depend on the current context