# programming languages as technical artefacts

## raymond turner

### https://doi.org/10.1007/s13347-012-0098-z

---

what is PL?

- formal grammar
- mathematical object
- implementation

a PL allows for *a particular relationship between what a program means and what its specification insists it should achieve*.

again, we have the concrete (specification) and abstract (meaning)


[Moor](../texts/computer_science/James%20Moor,%20Three%20Myths%20of%20Computer%20Science,%201978.pdf) has been the first to question deeply the distinction between software (ideal) and hardware (concrete)

> Programs have their meanings given by the meanings of their contained constructs, and, generally, the semantics must preserve the meanings of the constructs across programs.

the above is hard sapir-whorf

what he proposes to solve is that articulation of concrete and abstract through the concept of *technical artefact* (intentionally produced things, which carry their purpose through their physical manifestation)

technical artefacts have two components;

- functional (what it does)
- structural (how it does it)

#### function

happens through a specification. it is the definition of a mathematical object. this mathematical object can have two kinds of semantics:

- operational semantics
- - -> if the components of a program change given a particular state, the whole program should change as well
- - -> these semantics define what *actually* happens

given an expression `x := E`, one must always *physically* move the (computed) value of E into the physical slot of x

> As a piece of software, it gets its functional definition from the semantic definition of the host programming language and its underlying abstract machine.

what a program means is not just the problem domain, or the programmer intent, but also the language implementation.

> In the case of languages, we require an account of meaning that enables us to determine correctness


#### intention

two kinds of intention are relevant: engineer and user (kroes, 2010)

from an engineer perspective, it has to receive the question *does it work?*, and it must be able to justify the reasons relative to the abstract device (that it is supposed to implement). for instance, if the state transitions of the abstract device and the functional implementation are the same. i.e. the mathematical object is reflected in the implementation such that there are no surprises.

finally, the intention is set in stone, so to speak, by *use*

#### conclusion

so PLs are a blend of pure math and technology