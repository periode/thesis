# hapoc 2022 - what is a computer program?

## warren sack - Miniatures, Demos and Artworks: Three Kinds of Computer Program, Their Uses and Abuses

created for teaching, selling, sparking imagination, e.g. minix, mother of all demos, spacewar!

unlike a prototype, they are not a first version of a more elaborate thing, they are rather philosophical statements inscribed as computer programs

"to write a system in miniature is to reorganize the same ideas" e.g. tailspin as a miniprogram ended up being used as the core of Sims 3

ref: inside computer understandings: five programs in miniature

sack did a javascript "translation" (rather than "port"), called narrative: spinner.

literate programming has a next step in the juoyter notebook environment

> demos are created as arguments [...] they're built to see what is possible to do.

chap. 6 of the book __software arts__ deals with rhetoric (an audience member said that there is also a non-verbal part to the rhetoric)

a work can succeed aesthetically but fail functionally (he argues that beautiful art is one that is devoid of purpose, but after duchamp, there is a reunion of the functional and non-functional in art)

sol lewitt says _ideas are a machine to make art_, le corbusier says _a house is a machine for living_

miniature: pedagogical
demo: persuasive
artwork: pleasurable

yeah, and actually the demo would also live in other traditions: craftspeople have demos, finance have alpha funds -> in order to inspire trust in your product

## shoshana simons- Programming practice as a microcosmos of human labor and knowledge relations

programming practice: (e.g. understanding the runtime, the semantics)

ethics perspective with the technical aspect at the center

the practices of programming that are seemingly technical are actually essentially ethical
programmers transpose structures of practices into other domains 

when you do runtime analysis, for instance, you abstract away the "planetary network of labor and energy" into discreete steps, just as apples at the grocery store invisibilize their network through their single price tag

technical practice is hegemonic (it has a unique power in disciplining the body), and a microcosmic training ground

which kinds of ethics?
- ethics as values, in the data, or in the algorithm
- ethics as consequences, uses and impacts

### critical journaling in teaching programming

- having students consistently reflect on thair practices (how are you applying what you've learned technically to the class? e.g. how does your interaction with food delivery change as you learn about functional abstraction?)

- critique to teach responsibly
- critique to enable change over time, but not forget history
- critique to represent other approaches

if programming embeds a certain capitalist order, can it also transform that order? is there anything essentially defining in a programming practice that "destines" it to being in a particular way?

-> programming and capitalism are actually co-productive

##  Lucas Bang - program size

simon penny -> making sense
robin hill -> expamples of phenomenology in computing
simon agre -> computation and human experience

> the quantity of meaning compressed into small space by algebraic signs, is another circumstance that facilitates the resasoning we are accustomed to carry on by their aid
charles babbage

so, interestingly (blum size theorems), if you have a language that guarantees termination, the program size in such a language ends up being much larger than one written in a language that does not guarantee termination

"if you want to optimize your code, you have to write more code"

ref: subrecursive programming systems: complexity and succintness

the difference between theorems and programs is that theorems __must__ be surveyable, while programs are ok if they're not surveyable (most programs are actually non-surveyable since they're abstracting all the time)

phenomenology:
- zuhanden/reayd-at-hand is about the "smoothly operating processes/relationships, which carry less cognitive load"
- vorhanden/present-at-hand is non-cooperating processes

### common knowledge in programm properties

gerald holzmann: nasa's 10 rules for safety-critical code

ref: wadler: propositions as types
ref: soare, computability and recursion

a phenomenology of program size is needed

what is most important? the totality (program termination) or the size? he says size, but not why

## andre dickson - the ohenomena of conceptual integrity

conceptual integrity: coherence (fred brooks), consistency (dave parnas)
disturbances: theory and death (naur)

modes of programs:
- programs as equipment
- programs as performance

conceptual integrity __is not__ correctness, it __is not__ correctness (e.g. changing market demands), __is not__ about fit (e.g. it is possible to construct coherent interfaces that are quite awkward, such as MS-DOS), __is not__ simplicity (dave parnas)

they keep mentionning phenomenology, but maybe they just mean formal, sensual representation

phenomenological progams:
- how one __reads__ programs
- how one __writes__ programs

gilbert ryle's theory is _explicit_, while peter naur's theory is implicit

seeing theory as equipment is based on a referent, equipment is in its sense usable for something. having a theory is the tool that allows us to be ready to think with it 

conceptual integrity as equipmentality: when we see how clean the theory is, it becomes a tool to work with

better to have a reflection of one set of design ideas, rather than a bunch of unconnected ideas

can integrity be understood as resilience? open question

## daniel kuby - towards a linguistic conception of programming

programming languages as linguistic frameworks

the question is: what are programming languages?

1. the __machine-centered__ account of PL: they are formal notations for writing algorithms in machine-readable forms (they are not languages in the sense natural languages are) aka they are only languages in the metaphorical sense. the speaker disagrees

the language as metaphor view: PL are not an __object__ of investigation, they do not develop "naturally", they are not acquired as first languages, they do not serve human-to-human communication

the point is to think of PL from a Natural Language NL perspective. (in a wider semiotic view, though, like software studies, it already is a language)

ref: marina umaschi bers at tufts has a cognitive study on this, similar to evelina fedorenko (the language of programming)
ref: janet sigmund: studying programmming in the neuroage: a crazy idea?

2. the __linguistic account__

the invention of higher PL is not developed to be better understood by machines, but to be better understood by humans

PL gave enormous cognitive advantadge, as they exploint our linguistic abilities, which has impications in the design of PL as a form of linguistic engineering

so the philosophy of tech was always focused on artefacts, but one could move towards the study of symbols, discourses, and phil of PL is the perfect moment to do so

PL do lack many features of full-fledged NL, but stand in some relationship with NL. yet, they are complete with respect to their 'situational use'

both wittegenstein's primary languages and frege's begriffschrift can be called _restricted languages_, which develop in a community of speakers, sharing specialized knowledge and/or specialized activities (in linguistics, these can be called fachsprachen, controlled languages, sublanguages)

so the machine-centered account is too limited, the linguistic account recognizies the languagehood of programming, which happens through __restriction processes__

### alice martin nicolas nalpon - why semantics are not only about expressiveness

how PL represent a knowledge about a system is semantic representation

jean krivine - collège de france (2019) about knowledge representation

mathematical frameworks can be expressive, but still diverge in terms of semantic representation

and then he makes the example of taking a process p1 activated by p2 itself activated by a click. when you represent this with a bigraph on one side and lambda on the other side, there are differing results __depending on whether you're doing reactive programming, or non-reactive (function reducation)__

if you're doing reactive, bigraph is 2 step, and lambda is 4 steps. if you're doing non-reactive, you need 4 steps for bigraph, and 1 step for lambda (meaning semantics need to be distorted sometimes)

but is it even possible to find __one__ framework for __two types__ of instructions (currently a debate in reactive programming communities)

quantitatively, some representational systems do result in more steps depending on the task /!\

i'm not sure what is the relation between expressiveness and knowledge representations

and even when you move from diagramming from source code, you're actually changing the epistemic criteria (code has different implications than diagramming), one should then find a "ground truth" that happens across

ref: temporal semantics of reactive systems

### robin hill - hello world? an interrogation

why is hello world useful? it's neither required nor sufficient

1. it's arbitrary
2. tells us sth about the environment
3. tells us sth about the programming

re: 3. it allows you to learn how to use the objects, the paradigms of sequentiality, literalness, sanity check

> the usefulness of the term ',ateriality' is thjat it identifies those constituent features of a technology that are readily available to all users (leonardi, materiality, socio-materiality)

hello world is useful insofar as it is teaching not the algorithm, but the tool use: the tools are program code rather than hammers and engines. hello world focuses on the interface, the programming environment, its materiality. what kind of materiality is that? what are the other levels of expertise?

# day 2 [link](https://programme.hypotheses.org/spring-workshop-iii-what-is-a-computer-program-final-conference)

## baptiste mélès - classifying programs

tension between the unicity of the notion of program vs. diversity of existing programs

comparative analysis: few and isolated classifications / heterogeneous goals / minor subject matter but they are useful in their abstractions

brooks: flexibility / architecture
lehman: more scientific / technical

classifications have to deal with current state but also have to deal with anticipating future programs

one approach can be through __signs__ (human reading, machine reading, both)

- __autotelic__: server, video games
- __heterotelic__ : producing files, text, video

kinds of machines (physical machines, abstract machines)

interesting question: today people don't speak of programs, they speak of apps. what is the difference?

machine program: a layout of assigns aimed at determining the beahviour of a machine in an environment

turns out that compilers can change the meaning of programs, which defeats the dream of having logic supremacy when it comes to designing programs

logic as motherland, implementations as colonies

## tomas - notation: there is no escape

we need notational pluralism for meaningful programs!

## marteen bullynck - machines - hide and seek

human <--> program interface <--> machine

the point of programming languages has been to try to decouple themselves from a machine

but sometimes the machine strikes back (moore's law coming to an end, for instance)

virtual machines: don't exist, but can see them
tranparent machines: exist, but can't see them

so the argument is that it is important to consider the machine (consider new architectures, ASIC, GPGPU, etc.), and it allows us to shed a new light on how software is written

they also use a lot of energy (e.g. obv blockchain)

## what is a system?

a system is a stabilised heterogeneous situation. its parts, we usually call members. in the case of computing, computing = computers + all the files + all the users

in an open state, in hacker culture, everyone has to take care of everything, implicit knowledge is bound to people

> in programming, there are also systems like type-in systems that are beautiful because they are closed. because they have a self-repair through extensive naming/tagging of what is what. this strict structure helps with the maintenance

explication of unity (systemd, all these different parts of a linux distribution come together) vs. explication of multiplicity, vs. implication of multiplicity

does complexity close the system? by making it too obscure, etc.?

## programmer attention

ranges from undecidability to np completeness to space complexity, to time complexity, to correctness

computing is the interaction of the human with the human, the computer, and the model

## alberto naibo and julian rohruber - Abstract programs – postponing concrete knowledge

a program is __reified future__ (and as such, it might be magic, with ref from: alfred gell, the technology of enchantment and the enchantment of technology)

an ideal program is one which _1_ should work under all circumstances and _2_ should work according to its purpose

but under "all circumstances" means everything, and sadly there is no specification of "everything" because by definition, a specification is special

abstraction is the process of forgetting (neglecting, rpressing, hiding) something concrete; ignoring aspects, selecting only some (color, type, index)

def: concrete objects cause the __convergence__ of determinations, e.g. everyday objects unify touch and sight, an entry in a database unifies memory state and data access

- __concrete objects__ cause a convergence of multiple determinations
- __abstract objects__ cause a divergence of multiple determinations
- __abstraction__ means tuning a medium for abstract objects

concreteness implies immediate recognizability, abstractness requires indirect access, abstraction means organizing indirectness

so, in a sense, abstraction does also have some aspects of concreteness, since it __reduces__

## time in computer

the physical time of machines syncs up with the psychophysical world of human beings, needing a reciprocity of perspectives

## meaning of programs

- newell and simon: programs predict human intelligent behaviour through differential equations
- thagard: building a theory is actually about building a machinery able to give an account of the object phenomenon
- johnson-laird: concepts must be viewed as "models", i.e. tools to decide on a situation and equipped with procedures
- naur: about building a working model of a real-life situation and of the role of the software that enables it

fetzner: there are five layers of models at play:

1. specification
2. algorithm
3. high-level programming language
4. assembly
5. machine code
6. computational system (i.e. machine)

propositional theory of meaning: associating expressions of the language to entities (propositions). this is how this stuff gets connected to one another. otherwise, in PL, there's also _denotational_ semantics (associating instructions of math functions) or _operational_ semantics (associating programs to actions/automata)

## indeterminacy

```c
int x = 0;
bool go_on = true;
while (go_on) {
  x = x + 1;
  []
  go_on = false;
}
```

by djikstra

then, floyd (1967): a non-deterministic program is not governed by efficient causes (cause preceding effect), but by final causes (goals lead to choosing causes for effects).

> We may say that there algorithms are non-deterministic, not in the sense  of being random, but in the sense of having free will.
