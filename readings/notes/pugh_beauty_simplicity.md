# the beauty of simplicity
## ken pugh
### communications of the ACM, vol 55, april 2012

---
summary

a reaction to the *Coding Guidelines* article by Green and Ledgard arguing that there are different levels of aesthetics, that they treat of surface level ones while leaving aside semantic ones.

---

disappointed by the highlight on the "alignment, naming, use of white space, use of context, syntax highlighting, and IDE choice" by Green and Ledgard in *Coding Guidelines*.

"there is a more compelling beauty in the deeper semantic properties of code than layout and naming"
> abstraction
> balancing precision and generality
> elegant structure of class hierarchy
> balance between breadth and depth
> order of parameter lists
> leverage library code with minimal effort


**formalizing such semantic properties is more difficult than coding conventions**


ralph waldo emerson: "we ascribe beauty to that which is simple; which has no superfluous patterns; which exactly answers its ends; which stands related to all things; which is the means to many extremes".


---

in the same column, a discussion of the C one-liner:
`while (*s++ = *t++)`

translated into assembly:
```
A mov (@R0)++,(@R1)++
    bne A
```

which was beautiful and elegant as it was running in the PDP-11 at the time, but the condition that enabled it (having null-terminated strings) makes it a lot harder to write C code today.


---

why do we compute?

Richard Hamming, Bell Labs: *"we compute because we want to know and understand"*