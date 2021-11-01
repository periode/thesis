# concrete aesthetics

[[outline/outline]]

ultimately, we highlight a certain number of properties which would be indicative of source code being considered beautiful. these include:  naming, data structures, double-coding, layout, spatial structuring, reader flow, etc.

finally, this section concludes as a recapitulation of how attributes contribute to clarity, by providing a different heuristic than in [2.1]. instead of starting from separate texts and extracting different parts and grouping these parts with others, extracted from other texts, we group our practical and theoretical findings under the umbrellas of several aesthetic features we've identified, and described on which levels they operate.

## typology of aesthetics

a class within a class [link](https://blog.royalsloth.eu/posts/the-complexity-that-lives-in-the-gui/) is a visual/spatio-mental pattern which means "complexity", "unmaintainability", "unsustainability"

> My personal style guide is to copy Erlang: double quotes for text, single quotes for programmatic strings (atoms/symbols). The single quote is slightly more convenient to type on a qwerty keyboard, but text regularly contains single quotes (apostrophes). It also provides a semantic visual shortcut.

I like the concept of **semantic visual shortcut**, also **semantic compression** (developed [here](https://caseymuratori.com/blog_0015))

[[cohen_on_holy_wars_and_peace]]
[[pugh_beauty_simplicity]]
[[green_coding_guidelines]]
[[spinellis_reading_writing_code]]
[[perrin_program_elegance]]
[[hayes_semincolon_wars]]
[[raymond_wesley_metric_for_code_readability]]

[[hill_what_makes_a_program_elegant]]

[[hunt_pragmatic_programmer]]

[[kernighan_elements_programming_style]]

[[kernighan_why_pascal_is_not_my_favorite_programming_language]]

### double-coding / metaphor

use nouns for variables, verbs for functions, try to mimick an abstracted version of the human language (question: what is the limit of that mimicking the human language -cf. `code/render.rb`? what integrity does it have to keep? a possible answer is the **input data** or the **problem-domain**)

### metonymy

as a corollary to metaphor, it's just about implying something with a minimal sign (the *density*, as goodman would say, becomes very high)

### functional distance

basically put your variables where you use them, avoid gotos

### layout

a word on (automated) consistency

### relational independence

abstracts stuff but not too much: it's kinda like the UNIX philosophy, where the goal is to do one thing, but do it well

### lack of cognitive noise/minimalism

like tobi's example of using `select{}` rather than `mtx.Lock()` in `GO`. select is slower but something like `mtx.Lock()` is actually never going to be required in a design document: it's extraneous when wanting to understand what a software *effectively doing*. another example of that is the un-necessity of `diff noise`.

## case studies

finally, this section will confront our set of aesthetic features to several case studies of existing source code. the choice of these case studies will attempt to be as broad and representative as possible (e.g. commercial, functional, hobbyist, artistic), with the aim of using diverse approaches in order to further qualify the aesthetic approaches defined heretofore.

### case study 1 (Latex)

the reason why UNIX is chosen is as a canonical example of low-level, functional programming with a rich social history

### case study 2 (Carnivore)

the reason why react is chosen is because it has aspects of modern development practices (big corp + open source), and that prod vs. dev is an interesting example to build on

### case study 3 (CODE POEMS)

this is taking it in a completely different literary terrain