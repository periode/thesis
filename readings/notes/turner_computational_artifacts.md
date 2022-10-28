# computational artefacts

## raymond turner

---

> computer scientists construct things.

technical artefacts have _functional_ properties (purpose) and _structural_ ones (physical makeup which allow for the completion of the functional purpose). and something like `A:=7x34` involves both physical and abstract machines.

Moor (1978): [[James Moor, Three Myths of Computer Science, 1978.pdf]]

> Computer programs can be understood on the synmbolic level, as well as on the physical level.

add the above to [[outline/outline#introduction]]

__both the symbolic and the physical are programmable in their own right__

### the languages of computer science

at the highest level, architectural description languages involve

- components (data stores, with input port and output port)
- connectors (pipes, procedure calls, event broadcasts)
- systems (configurations of components and connectors)

at the other hand are hardware description languages (e.g. VHDL)

### semantics

> Any discussion on the foundations of computing runs into severe problems right at the start. The difficulty is that although we all use words such as name!, value!, program!, expression! or command! which we think we understand, it often turns out on closer investigation that in point of fact we all mean different things by these words, so that communication is at best precarious. (stratchey, 2000)

so in order to use those languages, we need some account of their _intended meaning_, which some argue must be mathematical in nature because:
- it's not ambiguous
- they facilitate formal exploration without the cost of implementation
- is a resort when the computational artefact (program, architecture) must be reasoned about on an abstract level (which it some point always ends up being a necessity)
- allows for proof of _correctness_

Notions such as _threading_ and _synchronization_ are ambiguous! We need better conceptual understanding for a more exact formulation

basically programming languages are the child of concrete one one side (hardware can do anything) and abstract on the other (mathematics are highly specific)

### implementation

> A paradigm computational example is furnished by a compiler for a programming language, where the compiler is the artefact and together the syntactic and semantic definitions of the language constitute the functional specification.The medium of implementation will include the programming language in which the compiler is written

a relation between three things: a definition, a medium of implementation and the artefact (Artefact A is an implemtation in medium M of the definition F)

> The programmer constructs the program from the medium of the Java programming language.

> Instead of properties such as _made from carbon fiber_, we have properties such as _constructed from arrays in the Pascal programming language, implemented in Java_

### semantics and implementation

programs have a different _semantic significance_ than theorems, because theorems lack such a significance: lines and sequences in a proof aren't intended to run on the machine.

programs are always stuck between the abstract machine and the physical machine

### agency

agency determines what the function is (i can use the computer as a doorstop): it is the difference between specification (intent-free) and semantic interpretation (intent-rich); one can dictate the other (and vice versa!)

this intentional model is an extension of the mental-model approach (aka programmers don't care about theory, they just do and tinker). there are no norms and this is hell for a logician.