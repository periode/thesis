# semicolon wars
## brian hayes
### https://www.americanscientist.org/article/the-semicolon-wars


everyone wants a new progrmaming language to make it "better" but we haven't figured out what "good" even is


semi-colons can be statement *separators* (algol, pascal don't need a ; after the last statement) or *terminators* (C does need that last ;)

and then comments: how to write them, *can they be nested?*

**the real criterion in programming languagesis how readily you can express your ideas**

imperative languages: *do this, do that*, they act on stored data, modifying the global state of the system. this used to be the default in early languages (fortran, cobol, algol)

functional languages: based on mathematical functions, wiht always an input and an output (clean in/out)

oop: bind together the commands and the data into encapsulated objects

declarative languages: states facts and relations (used in `prolog` but also in databases or spreadsheets)

structured programming aka bondage and discipline (e.g. `pascal`), which has strong typedef and strong controlflow. the reaction against those constraints produced "hacker-friendly" languages, such as C

but exactly: if C has less constraints, how often do we see beautiful C code? is it that hacking something is always going to be somewhat ugly? do we need to *work with* the constraints of the language in order to write beautiful code? 

and then finally there are applications (science, education, etc.)

in classical mathematics, there was also the debate between leibniz's `dx/dt` and newton's `x-dot`.

`python` and `ruby`: scripting languages moving from "glue" scripts to general-purpose languages

the author finds beauty in lisp's **uniformity**: data and programs are represented in the same way

*When you get to the bottom of it, however, I write programs in Lisp for the same reason I write prose in English—not because it's the best language, but because it's the language I know best.*