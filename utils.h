#ifndef UTILS_H
#define UTILS_H

// Macro to safely look at an index in an array safely
// by checking to see if the item at that index is NULL
// or not. The parenthesis are there to make sure that
// you are doing the correct expression.
#define SAFE_PEEK(arr, i, el) ((arr)[(i)] && (arr)[(i)] == (el))

#endif // UTILS_H