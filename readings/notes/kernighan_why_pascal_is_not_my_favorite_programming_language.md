# why pascal is not my favorite programming language
## brian kernighan
### [link](http://www.lysator.liu.se/c/bwk-on-pascal.html)

- comparisons between languages depend on whether the purpose of these languages is the same. **and pascal is made for teaching, as he concludes**.

*strong typing is telling the truth about data*

there is also additional literature: [link](http://www.lysator.liu.se/c/bwk-on-pascal.html#lit-7)

---

#### types and scope

-> strong typing is good because it prevents errors

1. the size of an array is part of its type (so it prevents from applying the same procedure to multiple arrays, from having common, general-pupose sub-routines). size shouldn't be a part of the type. that's obvious but **WHY**

2. no static attributes to variables means its forcing global scoping and cognitive overload (partly because it is far removed from the place where it is actually used). the *locality* is important

3. procedures must be declared before they are used (which is the opposite of how they are used: separation of similar/related things). this is mitigated by `#include` statements. *this is for the convenience of the compiler rather than the convenience of the writer*

4. no separate compilation, aka no *standard* for specifying that compilation

5. having to declare type names is useful for types that are used often (aka `vector3 = arr[0..2]`) but is a _distraction_ for things used only once.

6. no casting (tihis seems to be a problem rather in terms of use than in terms of comprehension)

#### control flow

1. cannot guarantee the evaluation of a statement before the other (problem with `i < max index && arr[i]> 0`).

2. no `break` statements to exit loops

3. `case` statements do not have a `default`.

#### environment

1. hard to make a REPL environment (and hard to simulate input). but again, this is on purpose rather than appearance

#### cosmetic

1. ; is a separator, and not a terminator. he doesn't like that because that means that *"one hsould have a sophisticated understanding of what a statement it"*. this implies that syntax should relieve us from cognitive load (cf. python indents)

2. no way to separate a function call from a variable: they both look like names (e.g. without the `()`)


#### perspective

it's fine for non-efficient programs (i.e. non-real programs)

enum data types are nice






---

*clumsiness*
 
 ---