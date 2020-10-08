# papers about code style (acm, etc.)

## judgment of code style

automated tool to help students, machine learning, acknowledging pylint, etc.

## what is style? by david garland

applies style to software architecture (supe macro), but doesn't quite define style

> architectural styles define a semantic interpretation whereby compositions of design elements, suitably constrained by the configuration rules, have well-defined meanings

but he seems quite limited by OOP / unix style

## teaching programming style with ugly code

refers to McConnell, 2004: "the details of a specific method of structuring a program are much less important than the fact that the program is structured consistently"

## linux kernel coding style

The religious tone by excellence, mentions "heretic", "heed the warning".

claims that K&R is the one and only rationale needed

"First off, I'd suggest printing out a copy of the GNU coding standards, and NOT read it. Burn them, it's a great symbolic gesture."

also provides a linter file for emacs

## programming style ontology-driven tools

three levels of knowledge representation:

- formal description of the programming style
- informatl knowledge of the programming style

## recommended C style and coding standards

"mixed coding style is harder to maintain than bad coding style" -> this is what brings us to the automatic linters

## sometimes style really does matter, david reed

he explains that style is more than aesthetics, and helps understanding

there are uniquivocal rules (everyone agrees on) (e.g. naming conventions)

there are also competing, yet equivalent styles: no real answers, so the answer becomes "consistency" which is enforced by linters

## fractal analysis of programming style

Tools like `indent` are a staple of softeng: it's not about what is beauty, but what is knowable about it, and thus enforceable

> Aesthetic value is not the same as readability

this is from: Posnett, Daryl, Hindle, Abram & Devanbu, Prem, (2011) “A Simpler Model of Software Readability”,

> Gabriel  argues against clarity and conceptual beauty as primary goals of software in favour of what the author calls “habitability.”

Gabriel, Richard, (1996) Patterns of Software, Oxford 

## using javascript type checkers on github systems

js as an important part of the web

linters have warnings about bad code logic (i don't care), and bad code style (i care)

doesn't state what are "commonly accepted rules"

teams know about mistakes, because they've customized it

baseline: for large projects, custom static code analyzers are used

## visual studio refactoring

some guy's master thesis from prague

there is a large gap between knowing the rules and following them: so we need tools not just to detect, but also to take action

## style is substance - ken arnolds - [https://www.artima.com/weblogs/viewpost.jsp?thread=74230]

the guy argues that style should be built into the language grammar

> Of course, you will never enforce any style globally unless people have literally no choice

the important part is that it comes *from the language*, therefore limitation on the power of community in the sense that the community should be able to crowd-decide what is best.

## programming style: examples and counter examples - kernighan

foundational paper written in 1974, it surveys the beginning of modern style concerns (expression, structure)

## a taxonomy for programming styles - oman [https://dl.acm.org/doi/10.1145/100348.100385] - 1990

sets the stage for an empirically-backed style checking process

## paradigm for programming style research - oman - 1988 - [https://www.researchgate.net/deref/http%3A%2F%2Fdx.doi.org%2F10.1145%2F57669.57675]

difference between typographic and structural style

---

github papers

---

## got issues? who cares about it?

good references for ground work in OSS user contributions

> Our study exploits data from GitHub, a super-repositoryof software projects containing millions of projects. GitHubis free for open source projects and implements an in-houseissue tracking system where users can file issues and tag theminto self-defined categories. The issue tracking system is easyto use and is systematically provided to all projects hostedin GitHub.

- Bagozzi etal. [3], Iivari [14], Hendry [10] and Singh et al. [22] haveinvestigated the role of users in open source communities. Inthese studies they make the point that users actually drive the software project and its evolution. 
- G. Hendry, “Public participation in proprietary software developmentthrough user roles and discourse,” Int. J. Hum.-Comput. Stud., vol. 66,no. 7, pp. 545–557, Jul. 2008
- Iivari, “Empowering the users? a critical textual analysis of the roleof users in open source software development,” AI Soc., vol. 23, no. 4,pp. 511–528, Oct. 2008.

## Perceived Language Complexity in GitHub IssueDiscussions and Their Effect on Issue Resolution

> Rhetoric and technical language are on opposite endsof a language complexity spectrum: the former is stylisticallynatural; the latter is terse and concise. Issue discussions embodythis duality, as developers use rhetoric to describe technical issues.The style mix in any discussion can define group culture andaffect performance, e.g., issue resolution times may be longer ifdiscussion is imprecise.

findings:

> We find that experienced users conform to project-specific languagenorms, popular individuals use overall GitHub language ratherthan project-specific language, and conformance to project-specific language norms reduces issue resolution times

technical language vs. community language (both subject to *perceived language complexity*)

> project-specificterms and perceived language complexity exist, andsomeprojects have more project-specific perceived languagecomplexity than others.

as for users,

> they gravitate towards the project languagenormandpopular users (measured by the number of timesthey are @mentioned in issue discussions) are betterrepresented by the GitHub global language model thanproject-specific language models.

a **speech community** describes a group of people who use language in a way that is mutually accepted among the group, which requires communitative competence (they must speak in a manner that is standard within the speech community—norm conformity) --- less structured, end users

a **community a practice** (wenger & lave) have shared practices, membership is internally constructed, co-construction of personal and group identities, with a shared social/instrumental goal. Kleinnijenhuis describes **networks of practice** --- more structured, developers of project

> GitHub discussions are a push-and-pull effort betweenthe push to use technical language that is relevant to theproject, and the pull to provide a narrative which frames one’sposition through rhetoric

## Tool Choice Matters: JavaScript Quality AssuranceTools and Usage Outcomes in GitHub Projects

> Based on these anecdotes, we hypothesize that a complexproject with project-specific code style requirements may bemore likely to useESLintorJSHint, while a smaller projectmay opt forstandardJSbecause it is easier to set up.While highly configurable tools likeESLintandJSHintrequire more effort in configuration, they may nullify disputesover code formatting and facilitate code review.standardJSrequires less initial effort from project maintainers and maybe appealing to new contributors who are familiar with thecommon code style. However, since its adoption likely entailedless configuration effort, maintainers may need to spend moretime on code review or address more issues about code styling.

## Open-Source Style Collaborative Development Practices in Commercial Projects Using GitHub - 10.1109/ICSE.2015.74

commercial projects and corporations are influenced by the OSS style of working

## Social Coding in GitHub: Transparency and Collaboration in an Open Software Repository

> We find  that  people  makea  surprisinglyrich  set  ofsocialinferences   from   the networked activity information in GitHub, such as inferring someoneelse’s technical goals and vision when they edit  code, or  guessing which of several  similar  projects  has  the  best  chance  of  thriving  in the long term.

In the end, communication happens at the end of transparency: when the information isn't readily available, when it is unclear. also signs of attentions.

## On measuring affects of github issues' commenters - [https://dl.acm.org/doi/abs/10.1145/3194932.3194936]

there are *users* (regulars) and *commenters* (only post without opening issues or source code changes)

commenters are less polite than users, and more negative

commenters are also more aggressive (but only aggressive, actually; there is few variation in their emotion)

## Let's Talk About It: Evaluating Contributions through Discussion in GitHub (jason tsay, laura dabbish)

> We  found  that  developers raised issues around contributions over  both  the  appropriateness of  the  problem  that the submitter  attemptedto  solve  and  the correctness   of   the   implemented   solution.

I'm only interested in the first part (appropriateness)

They also resort to external stakeholders: dependent projects or companies

> Tsay et al. [23]found in a study of contributions in GitHub that a number  of  social  and  technical  factors influenced  the  probability of a contribution being accepted. When contributions were highly discussed,  contributions  were  much  less  likely  to  be  accepted.

in the end it's just a typology of discussions, not sure how useful

similar to [https://doi.org/10.1145/2568225.2568315]
