# typographic style is more than cosmetic

## paul oman, curtis cook

### https://www.cs.tufts.edu/~nr/cs257/archive/curtis-cook/typo.pdf

---

typographic style is important for program comprehension, even if secondary to code clarity. they conduct empirical results to back it up. another key finding is that the difference in performance levels between expert programmers and novice programmers was more drastic in poorly-formatted (i.e. non-styled) code.

All programmers' mental comprehension studies report:
- mental schematas that plan or guide the programmer's comprehension of code (long-term memory, evolve over time)
- meaningful units that programmers use to remember code
- beacons/highlighted semantic clues to search, chunk, check hypothesis (such as consts, `go`, etc.)
- multiple strategies (kinda like discourse comprehension)

based on these, there are macro-typographic principles (__still need to be made clear _how_?__):

- must make the compoments and organization of the program obvious. aka module separation
- identify the purpose and use of each component
- make the control flow apparent
- enable non-linear code-tracing

it's also programming style/paradigm agnostic: modules can be done in any different way, as long as they are done!

for instance, pascal `var` and `const` can be styled (bold) to mimick section headers in a book (that's remediation)