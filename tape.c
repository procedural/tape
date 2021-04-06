
// The end comments are ignored.
// Each line is 10 64-bit values.
// Empty line means 10 64-bit zeros.
// Partial filling of a line means the rest values of the line are zeros.
// At program start, "program counter" starts at line 1.
// The first 64-bit value of a line is an instruction opcode to execute.
// An instruction can modify all the 64-bit values of the program.
// An instruction can append new lines to the end of the program.
// After an instruction is finished executing, it orders the "program counter" to go to line N, from 0 to N, where 0 means "don't go to line N, proceed to the next line".