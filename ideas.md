* `if` and `for`:
```c
_if loopCount < 2 B
0
0
  // if true code here ...
.B 0
0
0
  // if false code here ...
```
```c
_forPostInc loopIndex C
0
0
  // loop body code here ...
.C 0
0
0
```
```c
_forPostDec loopIndex C
0
0
  // loop body code here ...
.C 0
0
0
```
`_` `0` `0` and `.label` `0` `0` replaced by the compiler to jumps to the end of the heap where compiler generated code lives and does what it needs feels the most honest way currently.
