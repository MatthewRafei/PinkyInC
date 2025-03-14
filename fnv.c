#include <stdlib.h>
#include <stddef.h>


const uint32_t offset_basis = 0x811C9DC5;
const uint32_t multiplicative = 0x01000193;

uint8_t fnv1a(




/*

algorithm fnv-1a is
    hash := FNV_offset_basis

    for each byte_of_data to be hashed do
        hash := hash XOR byte_of_data
        hash := hash × FNV_prime

    return hash 

*/


/*
FNV hash function computes a hash value by combining two main components:
1. **A prime number multiplier**: This is used to ensure that each character in the input data contributes uniquely to the resulting hash value.
2. **An initial hash value**: Typically set to a fixed offset basis.

The algorithm processes each byte of the input string, updates the hash value by multiplying it by the prime number and applying a
bitwise XOR with the byte being processed. This produces a unique hash value for each input.

### Steps for the FNV-1 hash function:

1. **Initialize the hash value**: Set the initial hash value (often referred to as the "offset basis") to a constant value.
For FNV-1, the offset basis is 2166136261 (0x811C9DC5 in hexadecimal).
   
2. **Set the prime number**: The prime number used for FNV-1 is 16777619 (0x01000193 in hexadecimal).

3. **Process each byte of the input**:
    - For each byte in the input string, update the hash by performing two operations:
        1. XOR the hash value with the current byte.
        2. Multiply the result by the prime number.

4. **Return the final hash**: After processing all the bytes, the hash value is the final result.

You can now go ahead and start coding the first step! Let me know when you're ready for feedback.
*/
