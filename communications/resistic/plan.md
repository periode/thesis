# critiques protocolaires d'internet: scuttlebutt et ipfs

## introduction - 2 pages

établir le concept de critique protocolaire

- il ne s'agit pas de critiquer une implémentation technique, mais plutôt un _a priori_ de la vision du monde que cette implémentation suggère

établir les précédentes critiques d'internet:

- critique open-source/free software
- critique commerciale / économique / plateformistique

établir la question principale: __comment se constitue une critique protocolaire d'internet?__

quels sont les points communs de la forme, et les divergences de contenus?

méthodologie

justifier le choix de ces deux projets (points communs et différences)

> _A protocol is a set of procedural rules, information formats, and other conventions which, if followed by the communicating entities, enable their conversation to proceed smoothly and without confusion or error. Communication protocols naturally fall into a hierarchy of levels._[src](https://sci-hub.yncjkj.com/10.1145/639624.802056)

__in this paper wer're at the application layer: influential to the user, but also generalistic__

HTTP:

- client/server
- messages rather than streams of data
- distributed but not decentralized

## 1 - analyse de ipfs - 3 pages

> _The IPFS is not just a theoretical or academic experiment. It is a working software system (although still in alpha) that can be downloaded and switched on right now_ [src](https://medium.com/@tonywillenberg/web-3-0-a-truly-democratised-internet-f4b06cb4077b) this is the point of protocol critique

- description du protocole
- - `Permanent Web` -> distibuted hashtable / incentivized blockchain / self-certifying namespace
- - desire for petabyte datasets and on-demand/real-time media streams, and preventing accidental disparition of files
- - merkle directed acyclic graph
- - best suited for webrtc (implication of realtime)
- - bitswap credit (incentivize to share blocks: nudge? free-market? literally debt)
- - there is also the part where the `want_blocks` also include the ones wanted by the peers of the peer (network effect)
- - the Object Merkle DAG is the Git implementation, and similar to what Scuttlebutt wants to achieve. __but!__ by walking the DAG, one of the features/virtues is that one can access anything
- - __usecases__:
- - - mounted global filesystem
- - - versioned package manager for _all_ (sic) software
- - - as a CDN (synonymous with "always-on, always available")
- - - the permanent web
- - - it also has a _specific_ understanding of the word "decentralized"
- - since most applications are about filesystems, one can argue that it is meant/supposed/hoped to get IPFS to be seamlessly integrated
  
section sur applications
- web UI has a map of the world -> global
- also what it is associated with -> [filecoin](https://docs.filecoin.io/about-filecoin/ipfs-and-filecoin/), blockchain ([brave](https://brave.com/brave-integrates-ipfs/)), [multiformats](https://multiformats.io/), IPLD __lookup__, libp2p

check the [community](https://github.com/ipfs/community)?

- mythe fondateur
- - also their biggest issue with HTTP is the 404 error, and the centralization of servers
- - efficiency, permanence, decentralization, harder to censor content, standardization and interoperability
- - [history of IPFS](https://docs.ipfs.io/project/history/) - they mention that tim berners-lee's vision was about peer2peer, but if you look at RFC 2616 for HTTP, the word peer is mentioned nowhere, only clients and servers [src](https://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html#sec1.1)
- - >  a distributed, uncensorable, and permissionless file system
- - > Jakub Sztandera, an IPFS software engineer, took it upon himself to download the Turkish version of Wikipedia and put the snapshot onto IPFS [src](https://blog.ipfs.io/24-uncensorable-wikipedia/) in response to state censorship -> "one of the goals of IPFS is improving humanity's access to information"
- > While there's lots of complex technology in IPFS, the fundamental ideas are about changing how networks of people and computers communicate [src](https://docs.ipfs.io/concepts/what-is-ipfs/#content-addressing)

- discours des programmeurs et utilisateurs
- - web3
- - they added a section in the docs on NFTs
- - look at the [notes discussion](https://github.com/ipfs/notes/issues?page=1&q=is%3Aissue+is%3Aopen)
- limites

## 2 - analyse de ssb - 3 pages

- description du protocole
- mythe fondateur
- discours des programmeurs et utilisateurs
- limites

## 3 - rapport protocolaires à l'espace et au temps - 2 pages

- différentes positions
- rôle de la technologie au niveau plus "méta", rapport à l'espace et au temps
- et au mouvement! les individus bougent, ou bien c'est la technologie qui bouge

## conclusion

- différences de la critique protocolaire par rapport aux critiques linguistiques
- autre point: comment développer ca de manière productive? (pros and cons of protocol critique? that it is actually implementable?)