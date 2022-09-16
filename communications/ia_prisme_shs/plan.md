# Lisibilité et fonctionnalité de l’intelligence artificielle dans les systèmes géographiques informatisés

---

en gros il s'agit d'utiliser le GIS pour parler du phénomène d'abstraction de la donnée pour représenter un problème

---

## introduction

Ce que cette communication examine, c'est la notion d'espace telle qu'elle existe dans les systèmes de cartographie et dans les systèmes d'intelligence artificielle. Cette notion va nous montrer qu'il y a deux facettes: une facette de domaine, et une facette de technique. L'espace, au sens physique du terme, est un champ des possibles, qui ne devient opérable qu'à travers l'application d'une technique (i.e. la spatialisation). On verra donc comment un espace devient lisible (Foucault, Scott), à travers l'application d'une grille de lecture, puis la forme spatiale que présente cette grille.

Ce que cela va nous montrer, c'est qu'il y a un peut etre un parallèle dans l'abstraction opérée dans la cartographie et l'abstraction opérée dans la programmation. C'est toujours le cas quand il faut définir le problem domain. En revanche, il y a quelque chose d'intéressant que nous montre la notion d'espace, c'est bien la limitation de ce procédé d'abstraction: on penserait que le GIS est particulièrement riche en termes (1) de données et (2) de formalisation, et pourtant les données sont peu maniables.

> The essence of this theory is that data in the first instance represent abstractions of real phenomena and are preferably  formulated as abstract structures not necessarily realized in common programming language. (hoare)

## types d'espaces, types de problèmes

espace comme formalisable (SHS) vs. espace comme formalisation (IA)

c'est notamment un espace formalisable tel que montré par l'usage de GIS (geography information system) -> retour du positiviste et du quantitatif dans la géographie. C'st la critique la plus souvent addressée à la discipline (https://journals.sagepub.com/doi/10.1068/a230621)

The data-model of geography is space time.

Is AI a new map to an existing territory?

> GIS emphasises pattern-related description and understanding, and provided this objective is maintained it is sufficiently broad to encompass a vast range of geographical activities at many different scales. Also changing scales (1:1000000 vs. 1:100) is itself a data abstraction

Il y avait de grands espoirs pour l'utilisation des techniques d'IA à la fin du 20e siècle, notamment parce que GIS était déjà une abondance de données formalisées: ça semblait donc être une bonne coincidence.

ESRI (ceux qui font arcGIS) vendent une version très commerciale de l'ia

sinon, études de cas pratiques:
- https://www.sciencedirect.com/science/article/pii/S0168192316304269?casa_token=SGRe6K2mzmoAAAAA:okjRuSLkDJY9u5M61enzO4NBJetByecvEcfyT1LZNrtXojuvnf1H_5L7NOACNAsdjATnBdCv
- https://www.sciencedirect.com/science/article/pii/S0341816219303212?casa_token=OiueGESwfEsAAAAA:u7y63WR0oI0DKMrzC7-mJ5qrrcPxNZMyDhiE2V9eLtCFhPM2XbW6KCqHb6Q1DWK-J0i6W9sf

on verra d'abord l'analyse du domaine qui est problématisé: relation entre le problème et l'espace. La formalisation de l'espace permet au problème de devenir solvable.

L'espace, c'est le possible, qui doit ensuite devenir l'actuel. Et cela passe notamment par l'abstraction.

## processus d'abstraction à travers les techniques d'IA

que ce soit les listes, les stats, la logique brouillonne ou les réseaux neuronaux, il y a toujours une interface/représentation entre le problème et sa solution.

example des feux de forêts: les objets connectés sont nécéssaires (via senseurs) pour effectuer cette formalisation

## limitations du rendre lisible

rendre lisible, c'est décider que certaines choses ne sont pas immédiatement nécéssaires

---
Evidently, the first decision [of representation] in this chain is mainly influenced by _the problem situation_, and the later ones are progressively dependent on _the tool and its technology_.