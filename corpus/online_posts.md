# online posts and comments on aesthetics of code

## overall review

a lot of conventional wisdom about what it means to write beautiful code. a lot of blogs posts repeating best practices (clean code, software craftsmanship), constant re-appearance of structure vs. layout.

things that come back over and over:

- structure vs. layout vs. (meaningful) naming
- write for other programmers, not for yourself
- aesthetics are subjective, but I give the same advice as everyone else

but then there are disagreements:

- idiomatic vs. not idiomatic?
- clever vs. explicit?
- keeping vs. not keeping curly braces

really what this highlights is both some sort of common knowledge, based on practices and thinkers/mentors ("uncle bob"), but at the same time a diversity of communities of practices, and different levels of expertise, which ultimately results in different understandings.

---

## beautiful code according to blogger

[link 1](https://zinascii.com/2020/goodbye-joyent.html) - [link 2](https://github.com/illumos/illumos-gate/commit/2428aad8462660fad2b105777063fea6f4192308)

he talks about a beautiful patch for a faster clocktime on illumos, a version of BSD. `reached out to the author for explanation`. (he never replied)

## beautiful code exists (acm queue)

[link](https://queue.acm.org/detail.cfm?id=1454458)

he is working on a hadware counter monitor for FreeBSD and explains why this is beautiful code.

- header files as introduction of the structure
- header constants are directed at what the program does, but at who else is going to modify it (i.e. version numbers)
  
``` C
#define PMC_VERSION_MAJOR 0x03
#define PMC_VERSION_MINOR 0x00
#define PMC_VERSION_PATCH 0x00
```

names are significant, even more so in C/hw-level in which sometimes you have to deal with hex codes. (aesthetic is going against set practices, individual display of skill, for others -> **the reader**).

a bit later, he separates the variables that are machine-dependent, and variables that are machine-independent. this is the most important and effective categorization/labelling. (this constitutes a part of *conceptual distancing*)

and a final commentary on using C because drivers are written in C, but still remembering lessons and practices from other languages (i.e. data encapsulation in C++)

## stackexchange answer on "what is beautiful code"

[link](https://softwareengineering.stackexchange.com/questions/49189/writing-discussions-about-the-aesthetics-of-code)

these are recommendations on reading *Beautiful Code*, *Literate Programming*.

## hamon: beautiful code and japanese swordmaking

[link](http://www.deadprogrammer.com/hamon-or-the-skin-deep-beauty-of-code)

the author states that ugliness is self-explanatory, but that beauty is elusive (they still don't define ugliness).

his main argument is that of *hamon*, the wavy pattern on the edge of a japanese blade which indicates its quality. they see the same thing with code, there's a pattern that's an indicator of its quality.

- indentation
- spacing
- length of keywords
- length of function names

this introduces the possibility of **different scales** at which we read code. a glance, a deep-dive, a spelunking. and also **different timings** (glancing first, then reading)

## literate programming resources (after knuth, lots of snippets from different authors)

[link](http://www.literateprogramming.com/)

a series of excerpts from the knuth fan club. one interesting point is that Lit Programming is a *paradigm*, a sort of *meta-text* that goes on top. it's a target. but is it still source code? does it qualify as a craft, or does it just move the craft to another layer, that of writing TeX docs? (which is def a fucking craft). however, while LP highlights the human reader more than the machine reader, i'd argue that the way that humans read source code is different from the way humans read books (i.e. you should be able to understand what the code does by reading/jumping to any part of it *and yet* you should be able to read it linearly without jumping back and forth: this multiple requirement of code-reading represents the multiple expected uses of code),
and that there are techniques in source code which help understand the code better (conceptual distances, metaphors, separating concerns), and that those are poorly represented in LP. in fact, LP is efficient, but not elegant on the aesthetic level; because it abstracts the details, some of the beauty is lost.

## stackexchange answer on explaining beautiful code ot non-programmers

[link](https://softwareengineering.stackexchange.com/questions/65216/how-can-you-explain-beautiful-code-to-a-non-programmer)

(answers are listed by decreasing upvotes)

David Thornley: the one that uses the simpler and fewer ideas whilst doing the job correctly.

user21007: makes an analogy with architecture, but without going beyond "[...] And it is aesthetically pleasing"

Steven Evers: "All of the code is present, is required, and none of it requires explanation" (ideal goal? any code requires explanation, though.)

Mason Wheeler: "When it requires a lot of explanation like that, it's not "beautiful code" it's a "clever hack".

asoundmove: adds "it must also subjectively feel perfect & light"

user21007 (as above): adds that if it's self-explanatory, it must also be non-trivial. and it must take into account that it is **maintainable**, and in the **right language**. given that, `hello, world!`, couldn't be called beautiful; because the *why* and the *how* are actually already solved before even looking at it.

Macneil: "coding problems are about conceptualization, so beautiful code represents a remarkable conceptualization of the problem", and a beautiful execution. (programming really is just the craft of ideas). "for instance, when a problem can be reduced to an existing problem, it gives us an insight into the nature of the problem itself." (and elegance uses simple trucks to achieve difficult tasks). he concludes with `quicksort`.

dsmicha: beautiful code can't be attained because it implies conflicting interests. is it then about *balance* and *compromise*?

- Readability
- Conciseness
- Efficiency
- Flexibility
- Explicitness
- Robustness
- Safety/idiot- proofness
- Completeness
- Consistency
- Ease of use (for APIs)

Chris Cudmore: compares beautiful code to beautiful math proofs.

tp1: talks about behaviour than actual writing

guidhouse: states they're a craftsman

paul d. waite: it's beautiful when it's *readable*.

fortran: you should be able to read it like a book. page after page, without skipping ahead or skipping back to understand the current page.

Erik Reppen: compares it to efficient vs. sloppy bureaucracy

## quora question on "what makes beautiful code" (cf. WR archive for more)

[link](https://www.quora.com/What-makes-some-code-beautiful)

Pierre Chapuis: states that it is simplicity, and quotes David Gelernter—"Beauty is more important in computing than anywhere else in technology because software is so complicated. Beauty is the ultimate defence against complexity."—as the CS who thought most about the beauty of code.

- decoupling
- simplicity of interface
- evolutivity (can be adapted to new constraints)
- coherence

David Seidman: makes a difference between simple (organization) and simply written (naming, structures, etc.), then lists the usual suspects, and then adds **does something interesting** (aka a login page couldn't be nice). i'm not sure about login pages not being nice, but it says something about ingenuity, craftsmanship.

Brian Schmitz: the python one-liner that makes use of `decorators`.

``` python
@lru_cache(3)
def fib(n):
    return n if n < 2 else fib(n - 1) + fib(n - 2)
```

after a lengthy, technical explainer, he concludes in saying that "the beauty here is the *power* of a single line of code" (emphasis my own)

Christian Baune: gives thorough code examples, demonstrating that naive approaches can be the most optimal. in the end, beautiful code is:

- concise without compromising readability
- follows the solution outline (problem domain) closely)
- can be improved without changing the implementation
- it's abastracted (changing for loops to maps with a name)
- don't compromise on correctness for performance

Bill C. Reimers: makes the point that what is considered beautiful depends on the data context (adding 10 positive ints, vs. adding all ints between -10^38 to 10^38). his point is that "When you come up with code that is both simple and accurately computes the results, then you have something beautiful.", followed by the conclusion that, depending on the usage, it's about *divide and conquer*

Lucas Wiman: difference between two attemps of solving sudoku (norvig vs. ron jeffries). the first one displays a keen understanding of both the problem and the tools. referenced [here](http://pindancing.blogspot.com/2009/09/sudoku-in-coders-at-work.html)

Alexey Spizhevoy: the balance between easiness (to read, maintain) and smart ideas, originality. he refers to *Zen and The Art of Motorcycle Maintenance* (craft)

John Rainey: quoting his college prof, "elegant code provides the simplest solution to a problem"

Mario Hines: gives an example, but doesn't say why.

Anders Borg: code symmetry, using the same constructs for the same tasks. *make for easier to understand code, and it looks better too* (sic)

Hitesh Sajnani: thinks code isn't beautiful, the architecture is. if you have a shit architecture, you can't have beautiful code.

Mark Roberts: it's not about the *what* that the comments describe, but the *why* that they describe (business requirements, problem domain). indeed, for the first case, correct names can take care of the *what* comments.

Cornel Masson: "fluid interfaces that make it read like natural languages"

Nabarun Mondal: gives an example of beautiful code, but prefaces it with **"Oh, and if you understand predicate logic, this is cake walk."**, which touches directly upon issues of understanding and requirements.

James Liu ([here](https://www.quora.com/What-is-beautiful-code)): code that everyone can appreciate (i.e. read), disregarding their level of expertise

Peat Bakke: beautiful code enlightens the person reading it. "when you read a bit of code that makes you go "ah hah!" ... That is beautiful code."

## data scientist on general description of beautiful source code

[link](https://towardsdatascience.com/beautiful-code-ad8a0c6b19)

"beauty is conferred by simplicity and architectural coherence, which go hand in hand with functional precision and creativity applied to the problem". simplicity, because there is a (at-least) linear relationship between number of lines of code and amount to be understood. but even that isn't certain (cf. one liners). rather, it is **the amount of tokens** that need to be reduced (semantic elements).

no two people will write exactly the same code: voice of the programmers.

quote of knuth to explore further: "computer programming is an art, because it applies accumulated knowledge to the world"

"The visual appearance of well-formatted code is strongly associated with its quality and many programmers who take pride in their work, derive great satisfaction from polishing it, as they realise that a programmer is remembered for their style and discipline and very rarely for the code itself."

he calls small enough functions "pure" functions

## IT manager on general description of beautiful source code

[link](https://medium.com/swlh/excellent-code-clean-and-beautiful-code-b541ca4b5a39)

follows bob martin (*Clean Code*) a lot. following this idea of software craftsmanship, describes two components necessary to it: *knowledge* (heuristics, patterns, principles) and *work* (the embodided component). it's all about practice.

the name of a variable/function should answer: why it exists, what it does, and how it is used. this requires descriptive/syntactical skills but also a shared cultural background.

"master programmers think of functions as stories to be told rather than code to be written" > but to what extent is that a fantasy? is it confirmed anywhere? by yukihiro matsumoto, i guess.

cleanly formatted code is a matter of presentation, of communication, of reputation

## 15 ways to make code more beautiful from devops perspective

[link](https://dzone.com/articles/15-ways-to-write-beautiful-code)

addresses code clarity as the goal.

- format it
- hungarian notation for non built-in datatypes (+ RESPECTING CONVENTION)
- common (reader-known) architecture
- eliminate nesting, example:

```C
void SomeMethod(){
    if(x != y){
        //-- stuff
    }
}

void SomeClearerMethod(){
    if(x == y) return;

    //-- do stuff
}
```

- do not reference variable names in comments
- SOLID
  - single responsibility of classes
  - open/close principle
  - liskov substitution
  - interface segregation
  - dependency inversion

- force yourself to create a new method everytime you copy 3+ lines of code (hmm, not sure why... `TOTHINK`)
- use the vocab of your language

## what makes code readable

[link](https://simpleprogrammer.com/what-makes-code-readable-not-what-you-think/)

there are standard answers (usual suspects), but he puts the emphasis on "background experience levels". the experienced programmer bypasses syntax for semantics, while the beginner programmer focuses on syntax. (here: goodman). the essential example is the ternary operator.

also states that the languages constrain your means of expression (they have an upper-limit, but is that upper-limit)

"What we really need to focus on now is programming languages with small vocabularies that can be easily understood and learned, even though they might not be as expressive as more complicated languages." -> processing language

comments:

informatimago: prog languages are different in that you are constantly redefining the language.

tz1: variable name length should also hint at the importance (hierarchy) of the variable

Spudley: actually, breaking down into smaller functions doesn't make it more readable, but it makes it more re-usable. *there's a difference between reading to understand, and understanding to act*.

rph: Also I don't agree that large grammars are worth their expressiveness. Firstly, I think languages, like C, with small grammars can still be sufficiently expressive. Sometimes, a large grammar doesn't really give you the ability to express more types of things. It gives you the ability to express the same thing in multiple ways. I like to contrast Perl and Python in this respect. I can't stand reading other's Perl code because it usually uses a style I'm not accustomed to. Python is just as expressive but there's usually an obvious way to express an algorithm, making it universal, Languages like, C++, with large grammars, are extremely hard to read and it has contributed to developer's all adopting their own styles, much like natural languages have different dialects and lingoes. How do programming teams solve this problem? They adopt coding guidelines that restrict the developers to a subset of the language's grammar.

Tamas Rev (related to above): lower level languages express more in terms of computers, and higer level languages express more in terms of humans.

## review of *Beautiful Code*

 [link](https://blog.codinghorror.com/code-isnt-beautiful/)

(justly) complaining about lack of beauty and familiarity in most of the authors examples, and compares it to explaining poetry in a foreign language. he then goes on to say that what matters is the architecture, the design of the code (in sennett's terms, still separating the hand from the head)

"focusing on the code is like focusing on the brushstrokes, pigments of the mona lisa". but i think the discourses around the mona lisa are already established, and already reveal things about our humanity. it is the discourses around *the making* of the mona lisa that need to catch up.

justinC: highlight that `(3…6).each { |num| puts num }` is elegant

Jheriko: `*dst = *src; while(++*dst = ++*src);` is ugly

## style is substance, by ken arnold (selected by joel spolsky for his book)

[link](https://www.artima.com/weblogs/viewpost.jsp?thread=74230)

about the strict, compiler-level enforcment of coding styles (number of spaces, etc.). he seems excited by the prospect of no more style wars, but to what extent is the "style war" an essential part of the practice?

implied: whitespaces do matter (cause that's what a lot of styles are about amyways, and whitespaces make things clearer or more confusing, especially in `FORTRAN`, cause it has columns-as-whitespace)

## rob martin (clean code) publishes the programmer's oath (related to craftsmanship)

[link](https://blog.cleancoder.com/uncle-bob/2015/11/18/TheProgrammersOath.html)

a manifesto of sorts, tying even further the idea of craftmanship

## account of a software rewrite

[link](http://damienkatz.net/2005/01/formula-engine-rewrite.html)

with anecdote about MS source code: the expletives in the MS source code, that attest to the very reality of making something in groups.

## does beautiful code matter? medium post wit sc examples

[link](https://blog.prismatik.com.au/does-beautiful-code-matter-281934ed7363)

definition of beauty: that which pleases the senses, but which pleases the beholder's senses. then he immediately acknowledges that comprehension is first and foremost (both a priori and a posteriori).

in any case, **beautiful code will be readable**.

like playing an instrument, there is personality and soul in coding.

so, professionally, where does commercial responsibility end, and artistic license begin?

## medium post as lit review of code complete

[link](https://developerzen.com/how-do-you-define-good-code-c8a383c207a4)

how do you define good code? maintainability, efficiency, elegance (simple, proper use of language constructs)

the holy grail of self-documenting code!

quotes [this post](https://docs.microsoft.com/en-us/archive/msdn-magazine/2004/july/%7B-end-bracket-%7D-what-makes-good-code-good) from microsoft on what good code is.

"Elegance combines simplicity, efficiency, and brilliance, and produces a feeling of pride. Elegance is when you replace a procedure with a table, or realize that you can use recursion—which is almost always elegant"

and then he gives the example of `fibonacci`, so i'd need to investigate if fibonacci is elegant on its own, or if it's a playground for elegance. (a couple of months later: nah. there are definitely ugly implementations of fibonacci)

Clarity of code. Clarity of design. Clarity of purpose.  (related to the differrent scales of appreciation)

and, sure, you can do clever hacks, but they *need* to be clever to be justified.

but really, good code is balance.

## python code style

[link](https://docs.python-guide.org/writing/style/)

because python is praised for readability, it has (needs?) idioms, and they're all illustrated with code:

- be explicit
- one statement per line
- more than knowing possibilities, the important part is knowing when *not* to use them.
- community responsibility over the defensiveness of languages like java

## overview of clean code (the book)

[link](https://www.butterfly.com.au/blog/website-development/clean-high-quality-code-a-guide-on-how-to-become-a-better-programmer)

- names:
- intention-revealing names
- pronounceable name
- namespaces
- don't be cute
- one word per concept (goodman)
- solution/problem domain names
- nouns for classes, verbs for functions

- functions:
- smaller the better
- function should do one thing
- no nests
- less arguments (not more than 3 ideally)
- no side effects
- no output arguments (`email.addSignature() > addSignature(email)`)
- handle errors
- dry

- comments:
- don't comment bad code, rewrite it
- explain *why*
- warn of consequences
- noise comments are bad
- never commit commented code (why?)

- general heuristics:
- dead code
- speculative generality ("... what if?")
- large classes
- god object
- multiple languages in one file
- framework modifications
- overuse of static
- long if conditions
- call super's overwritten methods
- circular dependency
- circular references
- sequential coupling
- hard-coding

## the rails doctrine, with best practices and paradigms and beautiful code

[link](https://rubyonrails.org/doctrine/)

programmer happiness above all else... "doing programming because I fell in love with it as a mode of intellectual exercise and expression"

convention over configuration

ruby/rails looks like domain-specific language (like it's speaking the language of the problem)

subtlety, flow and focus in: `if people.include? person` vs. `if person.in? people`

expressing ideas, what we want to say is as close to the truth as possible.

EXPLICITNESS is valuable

## same thing but for python (PEP8) style guide

[link](https://realpython.com/python-pep8/)

use blank lines sparingly inside function definitions to show clear steps (like sennett's "decisive moment")

## learning and finding out the beauty of cobol

[link](https://devops.com/the-beauty-of-the-cobol-programming-language-v2/)

> "Well-written code is a work of art. Always has been, always will be. A programmer pulls a thought pretty much out of nowhere and transforms it into a working idea that can be used by others. It’s abstract expression made real"

COBOL is forcing layout through its division/section/paragraph/statement/character

also considered "natural-language" expressive: the author says it's similar to `chai` in `nodeJS`

## the beauty of doom's source code

[link](https://kotaku.com/the-exceptional-beauty-of-doom-3s-source-code-5975610)

*Code should be locally coherent and single-functioned: One function should do exactly one thing. It should be clear about what it’s doing.*

*Local code should explain, or at least hint at the overall system design.*

Self documenting

*The const rule, and no input/output parameters is probably the single most important thing, in my eyes, that separate good code from beautiful code.*

examples of ugly libraries (unreadable because of C's Standard Template Library's complexity) <http://loki-lib.sourceforge.net/index.php?n=Main.Download> / <https://www.boost.org/>

reading id's source code, there is the hint that "good practice" isn't beautiful. beautiful could mean leaving "best practice" behind

Doom is beautiful because it is "anti-generic". in that, it has style.

PARSING BY THE MACHINE VS. PARSING BY THE HUMAN

**const** and **no input/output**. Why?? (a couple of months later: local coherence)

beautiful code can be edited (using brackets {} everywhere even when optional)

## more detailed version

[link](http://fabiensanglard.net/doom3/index.php)

**TODO** lol

## princeton's guide to writing clear code

[link](https://introcs.cs.princeton.edu/java/11style/)

> "You will appreciate the importance of good style when it is your task to understand and maintain someone else's code!"

- short and manageable
- language-specific idioms
- straightforward control flow
- no magic numbers

they hint at the difference between *meaning* and *value*

again, the comments are the *why*

## how to write unmaintainable code

[link1](https://archive.is/Pn5hH#selection-233.172-233.174) - [link2](https://www.mindprod.com/jgloss/unmain.html)

definition by the opposite

## freecodecamp opinion on writing comments in code

[link](https://www.freecodecamp.org/news/code-comments-the-good-the-bad-and-the-ugly-be9cc65fbf83/)

comments:

- documentation (for APIs and such, because it's reading the software (applications) and not the code (actual lines)). still, it should be as close as possible to the actual code.
- clarification (others + future self)

## review of "beautiful code"

[link](https://blog.eisele.net/2011/01/review-beautiful-code-leading.html)

"you have to understand the equations before you understand the beauty of the code"

excerpt from an interview with the editor:

"Safari: What was the most challenging part of putting together Beautiful Code?
Wilson: Believe it or not, it was persuading people that they actually had something to contribute. Many of the authors' first reaction when we approached them was, "That sounds great, but I don't think I've ever written any code I'd call 'beautiful'.""

this relates to craftsmanship

## testimony on why someone loves to code (re: psychology of programming)

[link](https://www.regpacks.com/blog/5-reasons-im-passionate-coding-whats-passion/)

- code is "usable art" (within the realm of softare engineering)
- collaborative effort
- has a positive effect (...)
- "if i can think it, i can make it reality"

## clean code in angular

[link](https://itnext.io/clean-code-checklist-in-angular-%EF%B8%8F-10d4db877f74)

"Programmers are really authors and other developers are their target audience."

usual coherence, meaningfulness

"code never lies, comments do"

otherwise it's highly specific to Angular, advising a lot of tool uses (TS, etc.), but at the same time remaining at the level of "write readable code that is easy to understand" -> this is not a definition at all

## best comments in source code from stackoverflow

[link](https://stackoverflow.com/questions/184618/what-is-the-best-comment-in-source-code-you-have-ever-encountered)

classic, mostly about fun, personality, emotions
also about stupidity.

there are no "beautiful comments" (ornament is crime?)

## interview with one of the authors included in *beautiful code*

[link](https://www.zdnet.com/article/the-secret-to-creating-pretty-code/)

"blending theory": code that is included should blend in with the original style

## personal account of coding

[link](http://letsblogalot.blogspot.com/2014/01/code-code-beautiful-code.html)

different kinds of learning: documentation or examples or trial and error (these could be separate fields of practice)

the author is a highschool kid who's very excited

## javascript specific clean code

[link](https://blog.risingstack.com/javascript-clean-coding-best-practices-node-js-at-scale/)

yet another *clean code* quote

meaningful naming is *intention-revealing* names

we never want side-effects

stepdown rule of function declaration (always have the more general functions at the top, the more specific at the bottom)

## summary of *clean code*

[link](https://cvuorinen.net/2014/04/what-is-clean-code-and-why-should-you-care/)

easy to understand:

- the execution flow of the entire application (HOW)
- how the different objects collaborate with each other (HOW)
- the role and responsibility of each class (WHAT)
- what each method does (WHAT)
- what is the purpose of each expression and variable (WHY)

## personal take on the aesthetics of code

[link](http://theorangeduck.com/page/aesthetics-code)

this is written by an **artist**, who assigns to programming "the joy of self-expression".

> "The key is this: to express yourself within programming all decisions must be personal. They cannot be prescribed from a boss, textbook, or dogma. They must come from the head and heart."

and

> "At my most cynical Java, and Design Patterned Object Orientation are paint by numbers. No one would dispute that guidelines, techniques and study are important in all craft - but just ensuring not to color outside the lines doesn't give any satisfaction. One could never write poetry in Java. It wouldn't compile."

the tension between individual creativity/genius and need to work in a group

## stackoverflow: do you care about the aesthetics of your code

[link](https://stackoverflow.com/questions/1079645/are-you-concerned-about-the-aesthetics-of-your-code)

this was asked in 2009, so a little dated

"beautiful code is not always good, but good code is always beautiful" bauhaus as fuck

David Hall: "I always make my code look good. It's a visual representation of who I am"

## art of readable code (book), chap. 4

[link](https://www.oreilly.com/library/view/the-art-of/9781449318482/ch04.html)

mostly about layout. (not as relevant with color-coded IDEs?)

again, the author states that it's OBVIOUS that it's easier to work with code that is aesthetically pleasing. and that is because aesthetics alleviate cognitive pain, by leveraging "the emotional side of our brain" (for lack of a better phrase describing the non reason-side of things). there are also two means of understanding: understanding groups of people, understanding groups of languages, (and understanding groups of concepts?)

and does code-as-craftmanship have anything to do with language/litterature?

still, code as paragraphs.

consistency is more important than correctness

## sql aesthetics

[link](https://sql.marcus-belz.de/?p=143)

sql is unique because is doesn't have a "style" --> does that mean you require a certain level of complexity to get into that style? cf. unix v6

sql is based on mathematical set theory

beauty = structure + format (because meaning and intent can be derived from appearance only, if the appearance is well-enough made)

the rest of the article is more about making it IDE-friendly (another level of machine-understanding?) than about the syntax of sql itself

## interesting personal post on aesthetics, understanding and familiarity in code

[link](https://avraam.dev/posts/greek-to-me/)

understanding languages is about familiarity, and not ability

*Idiomatic: Using, containing, or denoting expressions that are natural to a native speaker.*

**who is reading?** (here, ideally it's the least experienced developer on the team)

"there is no space for poetry in production systems" > doom? unix?
probably what they meant is that there is no space for poetry in production organizations.

## medium post on clean code

[link](https://medium.com/@raihansyah.dean/clean-code-aesthetics-of-coding-6ff207f08771)

"clean code should make you smile, the way something that makes you happy would" > emotion in reading

## refactoring and aesthetics

[link](https://www.sitepoint.com/cleaning-up-code-is-refactoring-for-aesthetics-worth-it/)

obvious summary + examples of clean code

## discussion on improving the aesthetics of perl code

[link](https://www.perlmonks.org/?node_id=423968)

from [this comment](https://developers.slashdot.org/comments.pl?sid=126697&cid=10598210), one of the interesting things is "do not use `unless` because it's unique to Perl and confusing"... but what about idiomatic?

and then in the original post comes a lot of (polite) disagreements

AnonymousMonk: "When I was a programming novice, I didn't comment much.
When I was a programming acolyte, I commented a lot.
Now I am a programming master, and I try to minize the comments in my programs. "

## personal account of beautiful code

[link](http://hennessy.iat.sfu.ca/wp/stc2018/2018/03/22/programming-esthetics/)

"why is it hard to write clean code?"

## [google groups discussions about perl poems](https://groups.google.com/forum/?hl=en#!msg/comp.lang.perl/jVu7Zjn9JcY/yPMby6sCyyEJ)

## [hastac code critique forums](http://www.hastac.org/forums/hastac-scholars-discussions/code-critiques)

## [writeup on code poetry slam](https://www.i-programmer.info/news/200-art/6808-writing-code-as-poetry-poetry-as-code.html)
