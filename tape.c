2                    // 2 is a reserved opcode for jump
main                 // to address 19
jump                 // if this parameter address value is non-zero; the value of address 30 is 1, so jump
.helloWorld. 'H'
'e'
'l'
'l'
'o'
','
' '
'w'
'o'
'r'
'l'
'd'
'!'
'\n'
.helloWorldCount. 14
.main. 1
3                    // 3 is an opcode for, say, "print" procedure that takes two parameters addresses: an address to count and an address to the first character
helloWorldCount
helloWorld
4                    // 4 is an opcode for, say, "decrement" procedure that takes one parameter address: an address to the value to decrement
loopCount
2                    // to
main                 // main
loopCount            // if loopCount != 0
0
.loopCount. 3
.jump. 1
// The end comments don't take heap space
// The program starts at address 1
// Every line is a 64-bit value
// Spaces are optional
// . is the start and the end of a named address declaration
// ' is the start and the end of a character
// 0-9 is a part of value
// a-Z is a part of named address
// opcode 0 is reserved for program exit
// opcode 1 is reserved for next opcode
// opcode 2 is reserved for "jump to the first parameter address if the second parameter address value is non-zero; if zero, continue to the next opcode"
// ; is the start and the end of a binary number. For example:
// ; 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 ;
// No opcode is allowed to jump except opcode 2
