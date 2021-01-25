# the study of programming languages

## ryan stansifer

---

pat scanned it. thanks pat.

---

> Simplicity enters in four guises: uniformity (rules are few and simple), generality (a small number of general functions provide as special cases a host of more specialized functions), familiarity (familiar symbols and usages are adopted whenever possible), and brevity (economy of ex­pression is sought). p. 20

thoughts:

- the computer understands only bits, or understands only self-referential statements
- the point of shannon/turing is that it doesn't need to understand anything
- in the end, it only understands on or off.
- it makes distinctions between entities and the name of entities (called the *use-mention problem*)
- the association of a name to an attribute is called *binding*
- - one thing that the computer/compiler knows but not the programmer is the **location** of everything

computers understand **structure** and humans understand **names** one example of this separation is when you check for type equivalence: either you check for *structural* equivalence, or your check for *name* equivalence. because it's easier to reason about, modern programming languages choose *name* equivalence. (p.118)

typoologies of programming languages:

- imperative programming
- - moving data around in storage locations, dominating until the 80s
- - it's all about assignments -> place value into storage, most statements end up in that

pointer semantics:

- identifier can point to a location (*environment*)
- a location can point to a value (*state*)

a language without contingency, in which the context does not affect the meaning of expressions is said to be *referentially transparent* aka **the meaning of a sentence must remain unchanged when a part of a sentence is replaced by an expression having the same meaning** (frege, über sinn und bedeutung)

