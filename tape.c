1                    // 1 is a reserved opcode for jump
jump                 // jump if this parameter address value is non-zero; "jump" is replaced with 28, the value of address 28 is 1, so jump
main                 // to address 18
.helloWorld. 'H'
'e'
'l'
'l'
'o'
' '
'w'
'o'
'r'
'l'
'd'
'!'
'\n'
.helloWorldCount. 13
.main. 2             // 2 is an opcode for, say, "print" procedure that takes two parameters addresses: an address to count and an address to the first character
helloWorldCount
helloWorld
3                    // 3 is an opcode for, say, "decrement" procedure that takes one parameter address: an address to the value to decrement
loopCount
1
loopCount
main
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
// opcode 1 is reserved for "jump to the second parameter address if the first parameter address value is non-zero, if 0 continue to the next opcode"
// ; is the start and the end of a binary number. For example:
// ; 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 ;
// No opcode is allowed to jump except opcode 1
