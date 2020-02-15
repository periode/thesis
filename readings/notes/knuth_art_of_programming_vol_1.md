# the art of computer programming
## donald knuth
### addison-wesley, 1976

#### vol 1: fundamental algorithms

-> "[one needs] an ability to put the solutions to problems into such explicit terms that a computer can 'understand' them. (these machines have no common sense; they have not yet learned to think, and they do exactly as they are told, no more, no less. this fact is the hardest concept to grasp when one first tries to use a computer)"

knuth has a background as a "pure mathematician" (self-described)


p. x: there are problems (i/o, coroutines, recursion), which can only be properly addressed through higher level languages
- preference to write what is simples *in the language* rather than what those which are best for the machine. he says that **machine-language is much closer to reality**. (WTF — which reality?)

EXAMPLE OF POOR CHOICE OF NAMES in section 2.3.1-2.3.3 between first ed. and second ed. (look up?)

most of the book is about the mathematical basis of computing (he even uses a fictional computer to demonstrate examples: `MIX`, and writes all examples in some sort of assembly)

an algorithm as **5** important features:

1. Finiteness (stackoverflow, my love)
A procedure which has all the characteristics of an algorithm but lacks finiteness may be called a "computational" method (might not terminate for some specific input, maybe inifinitely large)

2. Definiteness: steps must be unambiguous and rigorous (*"But since they are specified in the English language, there is a possibility that the reader might not understand what the author intended."*). but even in computer languages, we can always have uncertainty, and a way to get rid of uncertainty is to handle it.

3. Input: can have >= 0

4. Output: can have >= 0

5. Effectiveness: "sufficiently basic that they could be done by a human in a reasonable amount of time using pen and paper"

huh. this book is perhaps the first example of the recipe metaphor for algorithms

the rest of the volume is just intense math, and some jokes about trees in the historiography section of information structures.

#### vol. 4: combinatorial algorithms

the "art" of combinatorial algorithms is more about ideas than about writing

so it seems like there is a theoretical beauty to programming, more closely related to beauty in math. when he mentions "artful" programmers, who is he referring to? apparently, *"the art of computer programming continuously reaches new heights when programmers are faced with new challenges"*

has a quote from henry james: *"art derives a considerable part of its beneficial exercise from flying in the face of presumption"*... ?
