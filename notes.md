# notes - fall 2020

## reading and writing

there could be different beauties in writing and in reading (case of Mike's APL) - easier to read vs. easier to type

## aesthetic analysis

luigi pareyson: aesthetics and interpretation [https://www.fabula.org/actualites/luigi-pareyson-esthetique-theorie-de-la-formativite_21236.php]

## found
> My personal style guide is to copy Erlang: double quotes for text, single quotes for programmatic strings (atoms/symbols). The single quote is slightly more convenient to type on a qwerty keyboard, but text regularly contains single quotes (apostrophes). It also provides a semantic visual shortcut. 

I like the concept of **semantic visual shortcut**, also **semantic compression** (developed [here](https://caseymuratori.com/blog_0015))

https://dl.acm.org/doi/abs/10.1145/1869542.1869627
https://www.semanticscholar.org/paper/The-Elements-of-Pattern-Style-Sane/664c6bd6f494d5121999071703e595175ebf7aa1?p2df
https://dl.acm.org/doi/abs/10.1145/78607.78611 - typography is proven to be helpful

this could be an interesting theory about the reading process: [https://www.fabula.org/actualites/luigi-pareyson-esthetique-theorie-de-la-formativite_21236.php]

## meeting with advisors

questions:


- would you like to see the corpus? how should i display/save it?

- categories of people are relevant? should i look into academic as well? i'm afraid there might not be so much information/sources

- are metaphors contributing to the research project? should i stick to the functional part of aesthetics.

- the difference between syntactical and semantic metaphors?

the intent overall is to see to what extent there is an overlap between each of those communities of practice


next steps:

- do the same with code poetry for this semester
- also look at hackers
- what about mathematic/academic beauty?
- perfect the aspect of readability (luigi pareyson? umberto eco/the open work?)
  - psychology of programming

---

## chat w/ nick

- look into operational semantics
- programming language research (what are the semantics of computer code? does refactored code have the same semantics as the original code?)
- how are semantics different for a human and a computer?
  
- semantics in experiential types of framework
- metaphors: mapping between a source domain and a target domain
- *More than Cool Reason: A Field Guide to Poetic Metaphor* (poets start from the conventional metaphor, towards the less conventional)

- reading: there is a myth of the linearity of reading
- how are authors reading their manuscript?
- how is related to craftsmanship? to architectural reading? an architect doesn't look at the whole plan when they read it, only the parts they need to change


### whole email

Your four categories could be refined a bit. I think data scientists working for businesses are very much like the "academics" you identify, in
that they don't ship their software to others and their outcomes are external research and insight. A minor issue, but it leads to thinking
about the distinction between custom software development for corporate clients (only one piece of software is made) and massively distributed
games, apps, operating systems, etc. that run on a variety of platforms and need to be maintained in that context. What a "software engineer" does
in these contexts is fairly different, and even if the category holds, I would expect different style guides (for instance) to be used in both
cases.

I wonder if source code can ever explain "why" it does anything outside of its own systematic workings. This perhaps comes to the issue of the
meaning code has to people vs. the meaning it has to the computer -- a good topic for verbal discussion.

I think there is something higher-level than a specific programming language and lower-level than the abstract algorithm which is important to
your discussion, and which you brush up against without directly confronting. That's what is called paradigm or (in a conflict with your
terminology) idiom: functional, imperative, object-oriented, etc. We can call Ruby Lisp-like or say that Python's lambda is Lisp-like, but really
Lisp itself is lambda-calculus-like, as are the lambda operators in these two languages. Choosing a recursive or iterative solution, using more
functional or more imperative frameworks, is facilitated by many languages. This means that what is "good style" in ML depends not only on
the specifics of ML, but whether you think functional or imperative programming is better, since ML supports both.

The connection to architecture is a great one. As I was reading the beginning of the paragraph, I was wondering if you were going there, and
you were. Can you continue this and map your emerging understanding of code aesthetics into architectural aesthetics? Are the intentionally
obfuscated productions of hackers similar in any way to sometimes uninhabitable but structural follies (see
https://urldefense.proofpoint.com/v2/url?u=https-3A__en.wikipedia.org_wiki_Folly-29-3F&d=DwIDaQ&c=slrrB7dE8n7gBJbeO0g-IQ&r=PzETIgMD0q9M9MuN-Qfb-8mokR3XuAfMcQJfIzs3Lys&m=NWnwPwQw3df5Qif9i4gZntsF5Wd7PucZ9dvI6UO9zcE&s=M5hUoJLmyfuK-BGayUtxsFeWlFC3xvaZd_TWrjdXkKs&e=

Details: Some claims are understated, some may need substantiation. "The vast majority of code written today has been done by software engineers"
doesn't seem like a controversial claim, but how exactly do you know? Lots of code has been written by students, researchers, hobbyists. When you
describe code practitioners, you say "These categories include" ... but you mean "These categories are ..." And a very minor item: Beautiful Code,
because it is an edited collection, can be called a book but is not a monograph.