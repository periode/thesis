# understanding code - 80,000

[outline](./outline.md)

> Coding is [...] the technique of providing a dynamic background to controle the automatic evolution of meaning. (von neumann and goldstine)

I highlight the issue of *understanding* between humans and machines through the medium of source code, as an ambivalent notion which necessitates a symbolic interface. This concept of *understanding* is also understood in the light of the different *fields* of programming practice (professional, amateur (hobbyist+hacker), educational, scientific/academic)

__define understanding__ (perspectives: reader/writer)

## 1. general overview of understanding theory - 

references, between objective and subjective:
- simon penny and representation -> mind-body duality
- lakoff & turner -> mental models
- gregory chaitin -> data compression and simplicity of rules
- wittgenstein (formal, absolute understanding vs. felt, contextual understanding)

- also philip agre (his book is more about AI and mental models, but he makes a point about having a different definition of understanding: that is, situated understanding). meaning that there is at least one theory of the mind that matches a theory/model of computation

> The narrow understanding of "working" as "conforms to spec".

> Since everything is defined mathematically, it does not matter what words we use to describe the system; we could use words like "plan", "learn", and "understand"; or we could use words like "foo", "bar", and "baz". In fact, programmers frequently employ nonsense terms like these when testing or demonstrating the logical behavior of a procedure. 

- simondon with his definition of technology as being a connection between magic and rational?

- feigenbaum and thought (historical, this seems to be the first anthology published on the topic)

**UNDERSTANDING AS MENTAL MODEL AFFECTED BY LANGUAGE** [[abelson_sussuman_abelson_sicp]] 

dual-positioning of source code text
1. against text (against literary)
2. against text (against productive software)

[[fedorenko_language_of_programming_cognitive_perspective]], about the cognitive implications of programming languages: does it change something in our brain if we learn more PLs?

[[fishwick_aesthetic_programming]] an answer to this question of the cognitive impacts of PLs, by using aesthetic as a link (_un liant_)

## the problem of understanding in humans and humans

this section redefines the concept of understanding, not as human to human, and not as human to machine, but as human to machine to human, and highlights some of the hurdles that appear in terms of collectivity vs. subjectivity. it makes the claim that contrary to writing literature, in which writing is potentially public and reading private, writing source code is a private act (as illustrated by passages like weizenbaum, computer boys) and reading it is highly public. because of a change in concept, i would argue that the change in *manifestation* of concept is also necessary.

[[mckenzie_cutting_code]]
[[tomov_role_of_aesthetics_in_software]]
[[vee_coding_literacy]]
[[vee_procedural_literacy]]

### Embodiment and tacit knowledge

also note the place and role of tools (IDEs, teletypes, fast compiling, etc.)

\subsection{Tacit knowledge}

%or at least the role of knowledge, mind as matter:https://dl.acm.org/doi/10.1007/s11023-007-9060-8

## the problem of understanding in human and machines

this section investigates the main challenge that source code tends to address as a human-machine communication tool

temporality (fast) and spatiality (jumps)

[[cantell_smith_introduction]] - computing as _meaning mechanically realized_ <- this whole introduction is a good reference on the tension between the linguistic and the mechanical

another philosophical approach highlighting the tension in software is [[irmak_software_abstract_artifact]]

[[detienne_software_design_cognitive_aspects]], psychology of programmers, beacons

[eye-tracking study of programmers of different levels readingn source code](https://dl.acm.org/doi/10.1145/3387904.3389279)

### the problem of implementation

> The most influential conception of computational principles comes from David Marr (1982), who prescribed a definite format for computational theories. For Marr, each theory had three tiers: a computational theory of some problem, a specification of the algorithm by means of which the brain solves this problem, and the implementation of this algorithm in neural machinery. (agre)

### the metaphors of code

this section focuses on the many ways people designate code and digital systems

berry, code as:
- engine
- image
- communication medium
- text [[cummings_coding_with_power_rhetoric_coding]]

limits to a literary approach: [[hayles_print_flat_code_deep]], and confirmation via a psychological study [[ivanova_comprehension_computer_code]]

[Critical code studies](../readings/notes/critical_code_studies.md), and rhetorical code studies

### the computer as a technical apparatus

this section talks about computation, symbolic logic, math and turing and lambda functions and all that beautiful stuff.

[hapoc 21 presentation](https://hapoc2021.sciencesconf.org/data/pages/_Toscano_Intentionalities_of_code_presentation.pdf)

and to humans

overall principles: http://denninginstitute.com/pjd/GP/gp_summary_toplevel.html

slide 25 shows the relation between quantity and quality and code and speech in computer systems [link](https://hapoc2021.sciencesconf.org/data/pages/_Hildebrandt_written_and_coded_speech_acts.pdf)

https://www.amazon.com/What-Robots-Studies-Cognitive-Systems/dp/9401050872

but maybe we can get more by relating it to other fields of aesthetics and see what they have to offer

complexity to understand streams: https://hapoc2021.sciencesconf.org/data/pages/_Biboudis_streams_hapoc2021_slides.pdf

### the computer as cognitive apparatus

[[rapaport_philosophy_of_computer_science]]
[[suber_what_is_software]]
[[weinberg_psychology_of_programming]]

this section talks about the computer as a cognitive tool, as a way to think (rokeby, wolfram), along the lines of algorithmic thinking, coding literacy. this will highlight the necessity of translating concepts from one frame of mind to another (formal vs. informal)

"expert programmers know how to choose the level of abstraction appropriate to the task" (sicp)