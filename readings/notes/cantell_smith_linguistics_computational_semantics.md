# linguistic and computational semantics

## brian cantwell-smith

---

if computational artefacts are fundamentally linguistic (apparently a widely held view), what is the proper relationship betweenm the so called computational semantics and more standard linguistics?

this seems to have been disproved by recent neuropsychology experiments, and therefore the paper might only be interesting as the linguistic base of source code (a base that is no longer the only one, there is also architecture)

---

> because the very concept of computation rests on notions of interpretation, the semantics of natural languages and the semantics of computational formalisms are in the deepest sense the same subject.

he has a system to understand computational semantics, and attempts to apply it to (computationally-oriented) natural semantics

there should be both __declarative__ and __procedural__ expressions

computers are devices that we understand by deploying our linguistic faculties, meaning we take the ingredients of computation to be _symbolic_ (and not literal)

the computer's _raisn d'être_ is dual: their mechanical objects and their semantic interpretability.

he based this on the fact that linguistic domain permeates the CS jargon (symbol manipualation, langue, intepreter, value, variable, expression, etc.)

one thing to keep in mind is that, in CS, semantics are always __operational__ semantics, wihle natural semantics are __denotational__ or __referential__.

we move from the syntactic domain to the semantic domain through an _interpretative function_ (whether is domain is syntactic or semantic is a matter of point of view)

(1) internal representations between symbols (what he calls procedural consequence) vs. (2) external representations towards the world (what he calls declarative imports). the __formality condition__ is that a programming language can give a full account of (1) without referring to (2)

> In particular, we demonstrated that the universally a:cepted LISP evaluation protocol is semantically Confused, in the following sense: sometimes it preserves • (i.e. ~(,I,(S)) = ~,(s)), and sometimes it embodies • (i.e., ,l,(s) = ,~,(s)). The traditional LISP notion of evaluation, in other words, conflates _simplification_ and _reference_ relationships, to its peril (in that report we propose some LISP dialects in which these two are kept strictly separate).

> In other words, in a computational process that deals with finance, say, the general data structures will likely designate individuals and money and relationships among them, but the terms in that pan of the process called a program will not designate these people and their money, but will instead designa:~' the data ztructures that designate people and money (plus of course relationships and functions over those data structures).

the above quote is the computational investigation equivalent of _sinn und bedeutung_, such that there are similar issues in natural and programming languages


he also has fairly nice examples using MacLisp

> procedural semantics and declarative semantics are two pieces of a total story; they are not alternatives