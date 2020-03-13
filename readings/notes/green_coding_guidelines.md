# coding guidelines: finding the art in science
## robert green
### [link](https://cacm.acm.org/magazines/2011/12/142527-coding-guidelines-finding-the-art-in-the-science/fulltext)

---
summary

this paper explains what makes you move from good code to great code, and shows how "artistic flare" (a combination of hard and soft practices) can help us make the transition. the emphasis is on the act of *reading*, on the decryption of the concepts that the machine is acting upon/executing

---

objective components of beautiful code (hard ideas):
- design patterns
- project structures
- common libraries

subjective components (soft ideas):
- naming
- spacing
- context
- syntax highlighting (???)
- choice of IDE (??)

it takes a great programmer to fill in the gaps left by "objective components" with her "subjective choices", in a way that is **clear, concise, understandable**.

interesting parallel between artworks, code and plurality of meanings: if code is like art, does that mean it has a plurality of meanings? (not sure i agree)

also seeing programming as **encryption**: you encrypt the solution in a certain way and then you have to decrypt it later when you return to it.


MOVING FROM FUNDAMENTAL PRINCIPLES OF COMMUNICATION TOWARDS CODING CONVENTIONS (i.e. the relationship between clean code and human communication)

he use of vertical alignment to show symmetry; his is a powerful method of communication:

**poul-henning kamp: quality only happens when somebody is responsible for it [link](https://queue.acm.org/detail.cfm?id=2349257)**. consequences: that somebody can be a group of people, and aesthetics is a way to implicate responsibility.

---

the true challenge is not *creating a name based on a concept*, but rather **inferring a concept based on a name**!

---

they advocate for names to be based on english usage:
- class names as collective nouns
- variable names as proper nouns
- procedure names as verbs
- methods returning a value should be nouns(e.g. `sine(x) instead of computeSine(x)`)
- booleans should be adjectives

try to make name pronounceable!

**context** can be relied on to simplified code, such that a syntactic element gets its meaning through its context (here, we're moving away from the context-free grammar that is the base of most programming languages)

**white-space** is presented as the equivalent of non-verbal cues (but then it creates diff noise)

they dictate the use of white space without justifying why: this reeks of tradition


*letting the structure drive the layout, not the syntax of the programming language*

comments are good, but they are also an indicator of lack of clarity in the code


finally, we find another occurrence of the textbook/academic style vs. industry/practical style