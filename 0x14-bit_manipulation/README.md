# 0x14. C - Bit manipulation

## Mandatory

0-binary_to_uint.c

- a function that converts a binary number to an unsigned int.
- parameters: takes one argument, binary number in string format (char *).
- returns: converted decimal number, or 0 if it failed.

1-print_binary.c

- a function that prints the binary representation of a number.
- parameters: takes one argument, a long integer.
- returns: void.

2-get_bit.c

- a function that returns the value of a bit at a given index.
- parameters: takes two arguments, a long integer and an index of the bit, starting from 0.
- returns: value of the bit at the index, or -1 if there is error.

3-set_bit.c

- a function that sets the value of a bit to 1 at a given index.
- parameters: takes two arguments, a pointer to a long integer, and an index of the bit, starting from 0.
- returns: 1 if it worked, or -1 if an error occurred.

4-clear_bit.c

- a function that clears the value of a bit to 0 at a given index.
- parameters: takes two arguments, a pointer to a long integer, and an index of the bit, starting from 0.
- returns: 1 if it worked, or -1 if an error occurred.

5-flip_bits.c

- a function that returns the number of bits you would need to flip to get from one number to another.
- parameters: takes two arguments, the first integer and  second integer.
- returns: number of bits to flip.

## Advanced

100-get_endianness.c

- a function that check for endianness
