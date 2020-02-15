# the art of computer graphics programming
## w.j. mitchell, r. s. liggett, t.kvan
### van nostrand reinhold company, 1987

---

UCLA + Harvard Grad Design text book

---

"the objective of this book is to help you write **concise, elegant, well-structured** computer programs to generate graphics display"

Pascal is used here because it is simple but has a lot of constructs

-> distinction between *specifying* and *performing* a work (aka like an art form). the only way to be skilled in an art form is by doing (note to self).

a program is composed of:
- input instructions (input streams)
- data declarations (variables)
- arithmetic instructions (function processing)
- output instructions (print, display, write)

- control flow (sequence, loop, branch)

"machine language programming is like trying to describe how to construct a building by specifying the coordinates of each brick." this is why we have *assemblers*

programming languages:
- english language mnemonics
- elements of standard logic and arithmetic


however, **machine language has unambiguous meaning**


fortran, eldest of programming languages -- basic is a beginner's version of fortran

PASCAL: Niklaus Wirth!

people today say that it's a bit verbose https://systembash.com/experimenting-with-pascal-on-ubuntu/

---

# syntax error

---

programming languages have *vocabulary*, *syntax*, and *semantic properties* (i.e. the correlation between statement and action/representation —it does what is says it will do). *"there is no latitude for the vagueness, incompleteness, ambiguities, and errors that we tolerate in everyday speech"*

-> the name PASCAL was chosen knowingly: Pascal syntax encourages an awareness of fundamental (**what is fundamental?**), computational principles, clarity and economy of expression, and a concern for logical elegance (**AS COMPARED TO WHAT?**)

on top of symbols, reserved words and operators, there are also *identifiers*, which are user-defined names

*separators*: blanks and line breaks, different from *delimiters*

lower case and upper case "to accommodate stylistic preferences"

while learning a programming language, you can **systematize the understanding of the language by looking at the formal** (as opposed to practical?) **definition**

a pascal program is always divided between header and body (where did these go in modern languages?). there is also *an order* in which to declare things.

-> what is a **type** in pascal? (cause pascal is strongly typed)

"it is best to use clear, descriptive names" (on page 132, he says that poor names are **infuriating**, the only occurence of emotional language in the whole chapter), "use parentheses to make it clearer" "never write an expression that leaves you unsure about how it will be evaluated", "break down statements instead of one liners (he says that to students though)"

"In general, as a matter of good programming style, code describing arithmetic calculations should read easily and naturally and should explain itself to the reader (*in familiar ways*)"

is clarity simplicity?
there is also convenience


comments make the program *self-documenting*, and clarify names when these aren't clear enough there is also *indentation*

some programmers have *fun* in writing complex programs. is clarity the opposite of fun?

complex statements have a zen-like reverence for perfect simplicity of expression

prove that the program works: break it down into short, easily understandable and verifiable pieces.

stylish programming prevents bugs: **"in programming as in other crafts, good styles pay off"**

program composition as interfaces with subsystems (systems and subsystems! i need to read object-oriented software design) + working down the details from an initial, rough sketch of the whole

a record is like a JSON object
