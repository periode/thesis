# reading, writing and code
## diomidis spinellis
### acm communications

---
summary

---

the example of going somewhere you don't know vs. going somewhere you know.

when you go somewhere you don't know, every decision you make opens up more and more unknown tree branches, but when we go somewhere we know, the task is just to eliminate unknown tree branches


writing code is going somewhere we know, with immediate payoffs

reading code is going somewhere we don't know, with delayed payoffs (and not always paid back to us)


very little material on *reading* code

types of code: system-code (hard, well-written), over engineered OOP (easy, bloated, and more complicated because the behaviour of the code actually changes at runtime based on the object values)


**example of the `quicksort` algorithm**:
- the theoretical implementation, by Sedgewick in *Algorithms In C++, Parts 1-4* is 19 lines of code
- the practical implementation in a C library is > 130 lines



languages can leave little room for experimentation: *dull beauty*

issues affecting the readability of programs:
- it is language-dependent
- some of these do not have "dangerous features" (he e.g. Pascal and Java)
- some features are just abused (`goto`, pointers, operator overloading, dynamic memory allocation, inheritance, etc.)


comments are needed to compensate for our poor coding abilities, and he actually makes the point that expressing ourselves in *programming languages* is pretty easy, while epressing ourselves in *natural languages* is actually quite hard (on top of the *context-swtich* needed in that case), and this is why comments are sometimes frowned upon. 