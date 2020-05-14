# structure and interpretation of computer programs
## abelson, sussman, abelson
### mit press

## chap 1

first chapter, locke's concerning human understanding, exposes that all human ideas are made of:
- combination
- comparison
- abstraction

of the three, **combination** could be linked to aesthetics: the way one thing flows into another

**abstraction**, too, obviously, through symbols and depictions

and of **comparison**? perhaps the human part? the comparison with an ideal model? with a pre-conception? that's more software architecture, though.


---

well designed computer programs are *modular* (constructed, replaced, debugged separately)


justifies LISP prefix syntax by the fact that "no ambiguity can arise" and is a *straightforward* way to "nest procedures"

says the humans are confused but the machine isn't

pretty printing: operands are aligned vertically (what kind of reading pattern is this?)

displays the *clear* *structure* of the expression

footnote:
*Lisp obeys the convention that every expression has a value. This convention, together with the old reputation of Lisp as an inefficient language, is the source of the quip by Alan Perlis (paraphrasing Oscar Wilde) that “Lisp programmers know the value of everything but the cost of nothing.”*

the value is the moment, the cost is the goal?

a program is the step by step increase in complexity

*In comparison with most other programming languages, Lisp has a very simple syntax; that is, the evaluation rule for expressions can be described by a simple general rule together with specialized rules for a
small number of special forms.* > less is more, minimalism (as opposed to Pascal)

a function is declarative, describing the properties of things, while a procedure is imperative, it states how to do things.

a procedure definition should be able to suppress details: *"One of the things we should demand from a powerful programming language is the ability to build abstractions by assigning names to common paerns and then to work in terms of the abstractions directly."*

to what extent should beauty be independent of data?

the program can compute, but can our language express that conmputation?

They have mixed feeligs about syntactic sugar: p.115, he says `let` is syntactic sugar, but seems to encourage it while at the beginning, they were firmly against it (need to find exact part again)


p. 88, on understanding:

"Understanding internal definitions well enough to be sure a program means what we intend it to mean requires a more elaborate model of the evalution process than we have presented in this chapter".

Understanding relates to models, to practical applications of theories, which can however change over time. Is having a good enough mental model enough to prevent getting lost in syntax? Or is a programming language always changing that mental model (and to what extent? they do interact differently with the flow of data, but do they also create arbitrary demarcations? in the mind of most programmers, yes)

**UNDERSTANDING AS MENTAL MODEL AFFECTED BY LANGUAGE**

they introduce error as a by product, while in Go it's first and foremost: possibly because CS at the time was about translation of clear concepts (i.e. math existing, and written before), while now the concepts are born with programming, and therefore aren't so clear beforehand. in this sense, it becomes more like human writing over time.

this book might be the very beginning of computer programming as expressive, with higher languages and such? or the last after "the art of computer programming", and a more mental beauty

"expert programmers know how to choose the level of abstraction appropriate to the task"

## chap 2

all about data abstraction