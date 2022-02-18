# critiques protocolaires d'internet: scuttlebutt et ipfs

5000 - 8000 mots à envoyer pour le 25/02

## introduction - 1000 mots

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
- every http request can exist on its own, independent of which client or server is involved
- distributed but not decentralized -> the issue is DNS

## 1 - analyse de ipfs - 1500 mots

### 1.1 description

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
- also what it is associated with -> [filecoin](https://docs.filecoin.io/about-filecoin/ipfs-and-filecoin/), blockchain ([brave](https://brave.com/brave-integrates-ipfs/)), [multiformats](https://multiformats.io/), IPLD (fancy name for merkle dag), libp2p

check the [community](https://github.com/ipfs/community)?

### 1.2 discours

- mythe fondateur
- - also their biggest issue with HTTP is the 404 error, and the centralization of servers
- - efficiency, permanence, decentralization, harder to censor content, standardization and interoperability
- - [history of IPFS](https://docs.ipfs.io/project/history/) - they mention that tim berners-lee's vision was about peer2peer, but if you look at RFC 2616 for HTTP, the word peer is mentioned nowhere, only clients and servers [src](https://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html#sec1.1)
- - >  a distributed, uncensorable, and permissionless file system
- - > Jakub Sztandera, an IPFS software engineer, took it upon himself to download the Turkish version of Wikipedia and put the snapshot onto IPFS [src](https://blog.ipfs.io/24-uncensorable-wikipedia/) in response to state censorship -> "one of the goals of IPFS is improving humanity's access to information"
- > While there's lots of complex technology in IPFS, the fundamental ideas are about changing how networks of people and computers communicate [src](https://docs.ipfs.io/concepts/what-is-ipfs/#content-addressing)

- discours des programmeurs et utilisateurs
- - tedx talk
- - - revolution
- - - the internet falling apart (resilience)
- - - crisis of the archived history (src: tedx)
- - web3
- - - even though they are not _directly_ related to the protocol itself, there are a lot of applications built on top of IPFS which 
- - they added a section in the docs on NFTs
- - look at the [notes discussion](https://github.com/ipfs/notes/issues?page=1&q=is%3Aissue+is%3Aopen)
  
- limites
- - "Every single file that could exist on IPFS has the potential to offend someone." [src](https://github.com/ipfs-inactive/faq/issues/36)
- - The issue is that the routing protocol is nominative: the identities are tied!
- - This whole discussion ends up as a political philosophy discussion: [src](https://github.com/ipfs-inactive/faq/issues/156#issuecomment-243339628)
- - [this website](https://ipfs.io/ipns/QmZxWEBJBVkGDGaKdYPQUXX4KC5TCWbvuR4iYZrTML8XCR/en/where-to-vote/index.html) for catalan independence is now down
- - having a private network is opposite to having the benefits of the scale of a public IPFS network [src docs](https://docs.ipfs.io/concepts/privacy-and-encryption/#enhancing-your-privacy)

"If you don't pin your content to IPFS, it goes bye-bye. And if the server pinning your resources ever goes offline and no one else has it pinned, it's gone forever. That's why a market has opened up for services like Pinata, which aim to be permanent pinning services. So you still end up with a centralized business framework even if the technology itself is decentralized, in that, if you don't have the means to provide your own distributed infrastructure, you're going to have to pay someone who does." [src](https://www.reddit.com/r/ipfs/comments/ruxlej/ipfs_is_an_alternative_for/)

__[discussion board](https://discuss.ipfs.io/)__

- filecoin is an incentive to host someone's files (another protocol to act as an incentive to share more content)
- copyrighted content can't be prevented through _just_ ipfs [src](https://discuss.ipfs.io/t/blocking-copyrighted-material-adult-content-on-an-http-gateway/11961/3)
- it is not possible to update content, so yet another protocol on top of a protocol [src](https://discuss.ipfs.io/t/what-is-ipfs-actually-good-for/12958/7) (gossipsub)
- and then the issue of [performance](https://discuss.ipfs.io/t/ipfs-cant-realize-its-promise/5607) (i guess the requirement for any protocol critique)
- [CID concept is broken](https://discuss.ipfs.io/t/cid-concept-is-broken/9733/21) - disconnect between what the CID prentends it is (file hash) and what it really is (a mish mash), which has implications. -> protocol is different from speech -> something no protocol has solved yet (technical issue of having to trust a peer)
- [deleting content](https://discuss.ipfs.io/t/can-i-delete-my-content-from-the-network/301/15) - there is a counter argument by using another protocol: [diaspora](https://diasporafoundation.org/) and then the conversation ends abruptly
- > Law is not cut and dry. It is all arguable. [src](https://discuss.ipfs.io/t/avoid-hosting-of-illegal-material/48/5) - the difference and similarities between law and protocol
- big difference between ipfs and ssb: default trust levels. in ipfs, [you trust everyone by default](https://discuss.ipfs.io/t/avoid-hosting-of-illegal-material/48/15). in ssb, you trust no one by default
- similarly, [this comment](https://discuss.ipfs.io/t/avoid-hosting-of-illegal-material/48/19) highlights the conflict between technical and political

### 1.3 limites et nature de la critique

surtout sur la disparition des données!

---

on a vu une tentative d'universel. maintenant, on va voir comment on peut réutiliser des protocoles pour arriver à une vision du monde différente?

---

## 2 - analyse de ssb - 1500 mots

### 2.1 description

- description du protocole
- - t'as une identité (rsa key pair)
- - tu donnes constamment ta présence sur le LAN (broadcasting over UDP)
- - et puis il y a des __pub__ (public web interface)
- - once they're connected, they can exchange keys and messages

### 2.2 discours

- mythe fondateur
- > "Scuttlebutt can be transformative for society, decentralizing and enabling local community development free of big corp. It is a fast growing decentralized social network. As an alternative to the large corporate social networks it enables autonomy for the users and a free zone from big data harvesting..."
- - first application is as a social network.
- > "Scuttlebutt aims to harmonize four perspectives of life: __Environment__ reflecting __Technology__ reflecting __Community__ reflecting __Society__." [src](https://scuttlebutt.nz/docs/principles/)

- based on the very scientific [gossip protocol](https://en.wikipedia.org/wiki/Gossip_protocol) which deals with multiplicity rather than universality: _There are probably hundreds of variants of specific gossip-like protocols because each use-scenario is likely to be customized to the organization's specific needs.
- ecosysteme:
  - [amazon ssb](https://opencollective.com/secure-scuttlebutt-consortium/updates/p2p-access-point-1-intro-and-proof-of-concept)
  - opencollective
- discours des programmeurs et utilisateurs
- limites

### 2.3 conclusions et direction de la critique

## 3 - rapport protocolaires à l'espace et au temps - 1000 mots

### 3.1 le temps

- différentes positions
- rôle de la technologie au niveau plus "méta", rapport à l'espace et au temps
- et au mouvement! les individus bougent, ou bien c'est la technologie qui bouge

### 3.2 l'espace

univers parallèle avec le web portal
universalisme et localisme

### 3.3 les questions de déterminismes techniques

sha-512 vs. human positions

## conclusion

- différences de la critique protocolaire par rapport aux critiques linguistiques
- autre point: comment développer ca de manière productive? (pros and cons of protocol critique? that it is actually implementable?)