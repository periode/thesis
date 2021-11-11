# clever vs. insightful code

## hillel wayne

---

```
```c
send(to, from, count)
register short *to, *from;
register count;
{
    register n = (count + 7) / 8;
    switch (count % 8) {
    case 0: do { *to = *from++;
    case 7:      *to = *from++;
    case 6:      *to = *from++;
    case 5:      *to = *from++;
    case 4:      *to = *from++;
    case 3:      *to = *from++;
    case 2:      *to = *from++;
    case 1:      *to = *from++;
            } while (--n > 0);
    }
}
```

> This code is “clever” because it exploits knowledge about the language, in this case the peculiarities of fall-through. Clever code can also exploit knowledge about the operating environment or special topics like bit twiddling. Conventional wisdom says this clever code is “bad”.

> There’s a second kind of “clever code”: code which exploits knowledge about the _problem_.


clever is specifc, niche knowledge about the material or the problem which cannot be extended to another material or problem (respectively) -> acknowledging contextual constraints

in the case of exploiting the problem, that often means that the problem is made simpler, and so the code is made simpler -> that's __insightful__

but if the problem changes, that insight might disappear: such a code is _read-only_ because relies on tacit knowledge and doesn't transfer between people

> Expert C programmers argue they don’t need memory safety, expert Clojurists argue that static types wouldn’t help them, etc.