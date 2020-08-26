* `if` and `for`:
```c
_if_ loopCount < 2 : B
0
0
  // if true code here ...
.B. 0
0
0
```
```c
_forPostInc_ loopIndex : C
0
0
  // loop body code here ...
.C. 0
0
0
```
An equivalent in C: `for (;; loopIndex[0] += 1)`
```c
_forPostDec_ loopIndex : C
0
0
  // loop body code here ...
.C. 0
0
0
```
An equivalent in C: `for (;; loopIndex[0] -= 1)`

`_compilerCommand_` `0` `0` and `.namedAddress.` `0` `0` replaced by the compiler to jumps to the end of the heap where compiler generated code lives and does what it needs feels the most honest way currently.

* `!namedValue!` user defined compile-time replaced named values.

* `_clike_` syntax sugar:
```c
_clike_ ouput = input1 !+! input2
0
0
0
```

* `+tid+` for a per thread offset, from 0 to N.
