* `?` is the start and the end of a user defined, compile-time replaced named value.

* opcode 3 for relative jump based on the current thread id (from 0 to N) and the next opcode.

* Parameters can be only one of the following types: IV, IC, IA, OV, OC, OA (I: Input, O: Output, V: Value, C: Count, A: Array). Count must always come right before array parameter.
