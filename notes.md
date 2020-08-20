# notes

## meta-questions

- what is the distinction between **creative** and **aesthetic** writing of source code?
- decide between **writing** and **reading**? **usage** and **possibilities**?
- what definition of **code** do i want to choose?

---

aesthetics in software engineering is not about the program, it's about the programmer.

the aesthetics of clarity in executable source code

questions of clarity vs. simplicity (how often do they correspond? oppose?) - is one within time, or within space, or within [people](https://en.wikipedia.org/wiki/Peopleware)?

semantics? -> programming languages have semantics (either denotational or operational, stratchey) -> operational is whatever the machine says, and we can realize/describe/use a symbol without understanding it -> understanding the symbol vs. understanding what the symbol refers to.

there is always a bit of giving up the understanding (linux kernel, APIs, etc.). does it remove the essence or in contrary highlight it?

---

STRATEGY VS. TACTICS

but tactics could actually be the tip of the manifestation of a yet unknown (the personal?) strategy. *two months later: hmmm....*

aesthetics as a relationship to the human: if tactics is what makes the individual, strategy is what forces the group > as code matures, there is a switch to a different kind of individuality (mass-production of code)

---

## questions

- what are the literary standards to which code can be held to? what are **OTHER** standards?

### tools

- what is *source code*, as a ~~literary~~ **linguistic** object? (theoretical linguistics, craft linguistics, literary linguistics)

- what are the *unique* ways that code can demonstrate/express an aesthetic sentiment?
- - what are its *structures*, *vocabularies* and *syntaxes* (Cayley)?
- - ~~what are the (interpretative, critical) *techniques* to identify these aforementioned?~~ i guess it's just practice. reading source code is by definition an exercise in interpretation
- - how do those establish a *tension*? (tension being a prerequisite for an aesthetic experience -or a (re)solving of said tension) > the tension is already established from the get go as a programming is inherently hard to comprehend (**why**?)

- ~~what are the useful conceptual tools that i use from the research on e-lit (e.g. combinations, potential, interactivity, ... **check the book by hannes bajohr, code und Konzept**)?~~ these tools are cayley's vocabulary, syntax, structure

- are existing theories applicable? to what extent do we need to modify them? to what extent do we need new ones?
- - theories for what? theories to explain *how* source code can be a means of creating aesthetic objects. <- **this is important**
- ~~what are the notions of literature? text, fiction, account, figure, materiality, author, literarity, context, commitment (?), fragment (**this one works with source code modules**, in space rather than time)~~ these are too rigid to use at the onset of the research

### typology

- ~~how can source code be categorized according to different periods?~~
- - ~~historically?~~
- - ~~linguistically (i.e. different programming languages)~~
- - ~~socio-economically (enterprise, hack, poet)?~~

done (separated in socio-economic categories of practicioners)

### object (object of code's discourse)

- what is code trying to make visible (following deleuze on bacon --> **actions, or the description of actions (states as well?)**)? rather it doesn't make visible, but rather "intelligible"? how (semiotically and aesthetically > making the thought process *graspable*
- how does the creative/aesthetic use of code start to involve the rest of the world rather than simply the self-reference? (references to the problem domain. in fact, code *always* refers to something else).

---

## materiality

"efficient code" depends on knowing the material that you are working with: in the 1970s, it was the compiler (kernighan, *elements of programming style*). in the 2000s, it might be just the language spec.

code as substitute-material

---

## thoughts

- double-meaning (paloque) is the fact that one can play between machine-language and human-language
- - ~~possible triple-meaning with an interplay in conceptual structures (OOP)~~ this is more in the realm of creativity rather than aesthetics.
- - ~~creativity might then be that we're applying software metaphors to classes of concordance~~
    - this means that there are two aspects of beautiful code:
      - one (software engineering), code is being written such that it matches the world/problem-domain/hardware/something else. code **should** disappear.
      - two (code art), the world is being encoded to match the limitations of code, opening up new reflexions on this "world". code **should not** disappear.
- ~~referring to software itself~~ **done** > hardware, language, algorithm
- referring to the environment in which software exists > problem domain, collaborators
- - productive software **done**
- - - ~~need to identify the place of uselessness in productivity~~ there are other things that are useless (e.g. erroneous comments), but not aesthetics (that's what the russian says: that beauty is essential to motivation)
- - ~~is it relevant that the domain of application of software can always expand? (from a computational perspective, and from a practical perspective)~~ **not really**

- expressing vs. explaining (Kurosawa) / hinting at (Tolstoi) **important ideas to keep**

- *'There is no such thing as elegance or subtlety in the way I use software.'* Belgrade-based sound artist Svetlana Maraš > there are other aesthetics: brutality, organicness, rococo, etc. elegance and subtlelty are only subsets, but very very large ones

- programming languages define sets of aesthetic relationships, and as such are *resources for intellectual/thoughtful work/formulation*
- - actors in actor network theory?
- - this is kinda what los pequenos glazier was saying when he was asking "how does materiality influence the text itself?"
- - on a less formal level, the sociohistorical approach to literature implies that literature judges a society, and a society can explain its literature.
- - - e lit can therefore help us formulate our being in this society (bouchardon)
- - - this could be extended to *programming languages-as-literature*. **no, because literature as we define it today is more than that**

- there is the reader, and there is the act of reading. does it need to be out loud? how are things pronounced?
- ~~who is the subject, in a code-text?~~ **is there a subject, in a code-text?**
- what are the parallels and separations between lit and code? **still not figured out**

- *In linguistics, prosody is concerned with those elements of speech that are not individual phonetic segments (vowels and consonants) but are properties of syllables and larger units of speech, including linguistic functions such as intonation, tone, stress, and rhythm. Such elements are known as suprasegmentals. Prosody may reflect various features of the speaker or the utterance: the emotional state of the speaker; the form of the utterance (statement, question, or command); the presence of irony or sarcasm; emphasis, contrast, and focus. It may otherwise reflect other elements of language that may not be encoded by grammar or by choice of vocabulary.* (wiki)

- marino: *"Much of this preliminary work on code has tried to determine what constitutes this unique semiotic system, work that prepares the discussion of code analysis, but CCS needs techniques for developing particular coding structures."*

~~can source code support multiple readings? should it?~~ **depends on the context**. on the engineering side, it should have only one meaning. on the education side, it could have gradual meanings. on the artistic side, it could have parallel meanings.

however, source code doesn't seem to have any depth: it is what it does > but hidden depths have to do with the nature/function of the work **and the social field in which it exists**
"What it means for something to have “depth” is that its explanation requires bringing in something like that, something of a different nature, something that does a kind of work no additional detail ever could." **depth is different from detail**
perceivable (but still hidden) vs. shown
looking harder vs. looking differently

*Some colleagues (such as Thomas Kühne from Victoria University of Wellington) have taken this further to explicitly define the limited properties of any model. Kühne (2005) describes this in three ways:mapping–(i.e. acknowledging that models are projections of an original);reduction–(i.e. acknowledging that models only represent a selection of relevant properties of the original); and pragmatics–(i.e. acknowledging that any model isaccepted as a proxy for the original only for a specific purpose).*

**problematiques importantes**: dispositifs et mediations

DRY is actually a problem: humans understand if you repeat them over and over. how do you compromise that? -> **proof of the multiplicity of contexts**

**IS THERE A RIGHT WAY TO WRITE BEAUTIFUL CODE?** no, it depends on contexts

## concepts / frames

- the dynamic (living in space/time, calculated in real-time, reacting to external input)
- a rhetoric of structs
- non-linearity of reading (what are the practices of reading? is it the same as reading a book? obv not. writing source code shouldn't assume a linear reading)

## structure

*acknowledgment of socio-cultural context within which code poetry emerges, then formal examination of language through which these are written, and circling back towards what these formal uses have to contribute about the purpose/meaning of writing source code poetry (communities, hackers, exploitative economic systems, etc.), and allow for a new perspective on contemporary literature.*

- extending that range of study (what has been explored so far are *themes*, *distribution*, *communities* (at least CPB, Bouchardon)):
- - empirically, at the macro-level (genre, types, communities), (other domains, such as style guides, comments, new corpuses that have been released since the previous studies (source code poetry, etc.))
- - stylistically, at the micro-level (style), (developing theoretical tools, frames of analysis, close readings, new reading postures -e.g. readers as compilers and interpreters **epistemology**)
- - linguistically (analysis and design of programming languages) (parts 1 and 2 will have to solidly argue as to why one should care about languages/materiality)

~~Is there something that makes something inherently beautiful? As relations to humans/human condition of that time -studying tools.~~ i would argue it's "attention to readership"

esolangs have a "wimpmode": esolangs do imply some sort of "skill". wimpmode is the implication of different readerships

## OBSOLETE

there is also the idea that, even when the code might not work properly, or might barely work (in a functional perspective), it might *still* work in a literary perspective, the same way that flaubert works, or that beckett works, i.e. **does what is intended of it to do** (how do we know that? we need critical tools to assess the "aestheticity"). we also need to assess **what** it is that it is intended to do.

what is the difference between poetics and aesthetics? poetics put together an effect (formal, subjective) vs. aesthetics are more universal, inherent, contemplative? **solved**

the role of case studies: develop an outline from looking at code, then confront that outline (which will probably be multifaceted) with case studies (2-3) **solved**

how is the aesthetic value of source code different from the aesthetic value of digital art? **irrelevant**