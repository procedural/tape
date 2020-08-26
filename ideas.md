* `_` is the start and the end of a compiler command.

* C-like `if` and `for`:
```c
_if_ loopCount < 2 : A
0
0
  // if true code here ...
.A. 0
0
0
```
```c
_forPostInc_ loopIndex : B
0
0
  // loop body code here ...
.B. 0
0
0
```
An equivalent in C: `for (;; loopIndex[0] += 1)`
```c
_forPostDec_ loopIndex : B
0
0
  // loop body code here ...
.B. 0
0
0
```
An equivalent in C: `for (;; loopIndex[0] -= 1)`

`_compilerCommand_` `0` `0` and `.namedAddress.` `0` `0` replaced by the compiler to jumps to the end of the heap where compiler generated code lives and does what it needs feels the most honest way currently.

* `!` is the start and the end of a user defined, compile-time replaced named value.

* `_clike_` syntax sugar:
```c
_clike_ ouput = input1 !+! input2
0
0
0
```

* `+tid+` for a per thread offset, from 0 to N.
