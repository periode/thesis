# review

## general

- [ ] make the paper shorter, get to the point faster

## done

- [x] **methodologies**
  - [x] how was the discourse analysis done? (answer: identifying key words, identifying user backgrounds (users with strong statement approach would also require a "background check", to contextualize their position in the debate + presented through *user/member/maintainer* typology.), taking into account the emojis—but acknowledge that this might not be a super reliable metric)
  - [x] highlight some limitations and biases (users on github might be a motivated subset of users)
- [x] **effectiveness**
  - [x] find some sources as to why these style guides are considered effective [paradigm for programming style research](https://dl.acm.org/doi/abs/10.1145/57669.57675), also [pike and kernighan feel strongly about it](https://books.google.de/books?hl=en&lr=&id=j9T6AgAAQBAJ&oi=fnd&pg=PR5&dq=programming+style&ots=PWLbxMuD08&sig=SSvzaowOWh97nbCAmCt7sdoDyqk&redir_esc=y), [curious about this one](https://ieeexplore.ieee.org/abstract/document/7271316), and finally [this one](https://ieeexplore.ieee.org/abstract/document/4782496)
  - [x] find some secondary sources/commentary proving that ("it just works", etc.), either through posts or ACM studies, etc. (added the "why style matters article")
- [x] **negotiation or discussion**
  - [x] highlight and discuss more the difference between negotiation and discussion (negotiation leads to a change, and discussion not: how does that manifest on). **how often does one actually *negotiate* a style guide**?
  - [x] touch upon these conflicting expectations from the users (in the end, it's really just prettier who allows that)
- [x] **analysis**
  - [x] make the case studies talk to each other
  - [x] bring together the different case studies in the conclusion
- [x] **references**
  - [x] make clearer each field of research that is mentioned
    - [x] sociology of style (more of this, add the gaston ref (Essai d'une philosophie du style))
    - [x] and  (anthropology of the written word: fraenkel, goody))
    - [x] sociology of organizations (-> scrap, replace with anthropology above)
    - [x] functions of language: better than habermas is jakobson (adding poetic, metalinguistic and phatic). explicit why i choose habermas over jakobson (in a nutshell, it's political rather than literary)
    - [x] intermediary objects -> add this at the beginning of the style guide section/presentation
    - [x] consolidate the different references that are scattered throughout the article
- [x] **description**
  - [x] include more verbatim comments + pictures

## reviewer 1

- the explanation of github is rather late in the article (p.6-7), which could be a lot sooner, and serve the shortening up of the article (-> shorten "the need for style in programming" section)

## changes

I shortened some parts:

- the description of the plan (p.3)
- consolidated the section *Source code, understood as [...]* p.4 -> the whole *need for style in programming* section, in order to make the section on github come sooner. (consider switching the whole section a block up? probs not)

en gros, le début de "enjeux du style dans la programmation doit mettre en place les trois fondements théoriques:

- style (simmel/gaston)
- anthropologie de l'ecriture
- sociologie (objets intermediaires)

et ensuite je peux les re-mobiliser a travers l'article.

I added a reference to "backwards compatibility on page 16.

I added a reference to the "benevolent dictator" re: Linus Torvalds in a footnote. I didn't feel like it would benefit the article much to expand on the role

I added the assessment of programming style by including studies by Cox 1988 and Fisher 2008, showing that style isn't commensurated with existing metrics, but def helps with program comprehension. I also linked the article that is on Prettier's main page (while style matters). I've connected this to the limitations of the study: self-motivation is a big part of this community.

I added a paragraph on limitations of the study: yes, it's a subset, but also it's ok cause it might be phenomena that we can find in the broader population as well.

> It must be noted that a limitation of this study is that the surveyed population might just be a motivated subset of users, putting emphasis on the correct automation of the correct style of their code. While the findings here might not therefore represent the broader software development communities, they nonetheless embody heightened forms of socio-technical interactions, which might only be more faintly manifested in other developers.

I clarified some of the metrics I have used for the study of the comments, as well as what was analyzed within these comments on page 11:

> The gathered corpus consists of 12780 issues and pull requests, totalling 53673 comments. From these, we discarded the least commented issues, under the assumption that meaningful and diverse discursive interaction takes place after 15 or more comments, which leaves a core corpus of 80 issues for airbnb/javascript, 82 issues for standard/standard and 444 for prettier/prettier1. While these were the main point of focus, this study included cursory browsing of lesser issues. As a complementary to the data-heavy studies mentioned above, the approach for this analysis is qualitative: reading through all messages of the most commented issues, evaluating them on multiple dimensions: the lexical field they resort to (emotional, technical, rational, organizational), the subject’s stance (speaking as an individual or on behalf of a group), the user’s background (shown by their status as either Member, Contributor or User, as well as the other repositories of the corpus they might contribute to). Reaction emojis, used to express passive agreement or disagreement with a message, are considered qualifying markers, not creating new meanings in and of themselves.

In terms of "negotiation vs. discussion", I've developed on the different instances in which the discursive action takes these different forms. For airbnb/airbnb:

> shifting the interactions from a negotiation, in which parties reach a compromise, to an explanation, in which the outcome of the exchange is ultimately the alignment of the user to the views of the maintainer (p.13)

and reiterated in the conclusion:

> and therefore shifting a process of negotiation in which all parties are equal, to one in which the maintainer has a larger bargaining power and, more often than not, only accepts to discuss why such a decision has been made, and not whether it should be changed (p.24)

In terms of standard/standard, and prettier/prettier, I added a concluding sentence to clarify that the discussion is about the means, side-stepping a negotiation about the ends

> This shift emphasizes that the most productive issues are those based on a discussion around implementation, rather than a negotiation around style itself. (p.16)

> Once again, the negotiation over the stylistic validity of the automated style guide is superseded by dicussions over its technical implementation. (p.20)

As for methodology of language, I've clarified why I use Habermas's approach, particularly because he introduces a typology of discourses appearing within the context of communicative action. Additionally, I've added a footnote to specify that the linguistic elements I borrow from Habermas for analysis can be complemented by Jakobson's *phatic* function of language. (footnote p.11)

In terms of connecting the different use cases, I've added a sentence in the airbnb section about how the phenomenon identified (shift to the technical) foreshadows the same phenomenon in the other repositories:

> This shift, from the stylistic to the technically feasible, is a recurring pattern which we’ll also observe under different manifestations in the standard/standard and prettier/prettier projects. (p. 14)

I've also qualified further the description of the different projects by specifying how they resemble, and how they differ from each other (p. 15, p.18), and a qualification of how standard/standard and prettier/prettier engage in the same issue:

> It has been shown that, while standard/standard shares this approach of « no-options », their justification is rather by broadening the scope of what is considered acceptable (standard/standardx, standard/doublestandard), therefore growing the community, and not relying on the fact that only one single project should exist. (p.22)

In terms of clarifying the theoretical background I rely on, I've also made clearer the reliance on not the sociology of organization, but rather the social role of writing in organizations, tying it more clearly to the work of Goody and Frankel. I've also clarified how linters, as intermediary objects, are taken into account in this process.

> Here again we see the role that intermediary objects play in the productive activity of writing source code: as objects that lie in between several elements (source code, compilation process, IDE), several actors (programmers in the same team) and successive stages of a work process (drafting code, reviewing it, and committing it to production) (Vinck & Jeantet, 1995), this study will rely on this concept to highlight the very active role that linters play in these negotiations. (p. 6)

---

> particularly, such a competence is backed « universals »: semantic positions taken as universal because they’re either based on experience (e.g. my truth), or on ontology (e.g. the truth). It is the confrontation of these universals between subjects which require communicative competence. We use here Habermas’s notion of a negotiation as a  bargain: in which both parties give up something in order to reach satisfaction, and contrast it with discussion, of which the result can be the change in stance of one, or both, parties. (pp. 9-10)

Habermas doesn't really fit: he states the necessary linguistic units of communicative competence in order to establish the best setup for talking about nice stuff like justice. His approach on "universals" is how there are those general structures of meaning which get formed, and manifest differently (e.g. subjective vs. intersubjective). There's also a nice part about how exclusively working with dichotomies is absurd (basically).

> The  empirical  evidence  of  comparative  ethno-linguistics  indicatesthat  the structures  of culturally  and  historically  changing world  views(Weltbilder) determine   a  system  of  basic,  **mutually  interpreting  meaning-components**  is to be presupposed

Basically he wants to beat Chomsky at his own game. But it wouldn't be impossible to still use it in the article this way: by highlighting the use of pronouns (airbnb, we vs. feross, community), the argument of space and time (backwards compatibility, but also letting others go fork their own repo), of causation and substance (programming and the possibility for automation), obviously the category of "what is and what ought to be", being the main one in this case.

But actually the most important parts of habermas could be **mutually interpreting subjectivities**, speaking from **different worldviews**, and how they attempt at reconciliating (or not, in which case they want to kick out). so it's also about group cohesion, in some sense. **how do you maintain group cohesion in a highly mediated/technical environment**.

But actually Jakobson could still hold.:

- referential is the context in which we operate (airbnb vs. community, technical function or styling desirability)
- poetic: for it's own sake (???)
- emotive: strong feelings (there's a bunch haha)
- conative: directed at someone, imperative (could that be the case where ljharb fixes the code?)
- phatic function is increased by the technical environment: you *literally* close and open discussions
- metalingual: which describe themselves

the compromise would be to take jakobson's referential (contexts), emotional (subjectivities) and phatic (open/close of technology)