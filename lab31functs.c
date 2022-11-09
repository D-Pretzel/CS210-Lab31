/** lab31functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 31
* ===========================================================  */

#include "lab31functs.h"
#include <math.h>


/** ----------------------------------------------------------
 * @fn int powerN(int base, int exp)
 * @brief Calculates the value of the base number raised to the exponent
 * @param base is the base number
 * @param exp is the exponent
 * @return the value of base^exponent
 * ----------------------------------------------------------
 */
int powerN(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * powerN(base, exp - 1);
    }
}

/** ----------------------------------------------------------
 * @fn int count_char(char str[], char c)
 * @brief Counts the number of characters in str[] that match c
 * @param str is the character array to search
 * @param c is the search character
 * @return the number of characters matching c in str[]
 * ----------------------------------------------------------
 */
int count_char(char str[], char c) {
    // Recursively count the number of characters in str[] that match c

    // Base case:  if the string is empty, return 0
    if (str[0] == '\0') {
        return 0;
    }

    // Recursive case:  if the first character matches c, return 1 + the number of
    // characters in the rest of the string that match c
    if (str[0] == c) {
        return 1 + count_char(str + 1, c);
    }

    // Recursive case:  if the first character does not match c, return the number of
    // characters in the rest of the string that match c
    return count_char(str + 1, c);
}

/** ----------------------------------------------------------
 * @fn int count_num(int array[], int x, int i, int len)
 * @brief Counts the number of ints in array[] that match x
 * @param array is an array of integers to be searched
 * @param x is the int value to be searched for
 * @param len is the number of values in the array
 * @return the number of integers in array[] matching x
 * ----------------------------------------------------------
 */
int count_num(int array[], int x, int len) {
    // Recursively count the number of times x appears in array

    // Base case:  if the array is empty, return 0
    if (len == 0) {
        return 0;
    }

    // Recursive case:  if the first element matches x, return 1 + the number of
    // times x appears in the rest of the array
    if (array[0] == x) {
        return 1 + count_num(array + 1, x, len - 1);
    }

    // Recursive case:  if the first element does not match x, return the number of
    // times x appears in the rest of the array
    return count_num(array + 1, x, len - 1);

}

/** ----------------------------------------------------------
 * @fn void reverse_print(char str[])
 * @brief Prints the character array str[] in reverse
 * @param str is the character array
 * @return none, only prints the input parameter in reverse
 * ----------------------------------------------------------
 */
void reverse_print(char str[]) {
    // Recursively print a string in reverse

    // Base case:  if the string is empty, return
    if (str[0] == '\0') {
        return;
    }

    // Recursive case:  print the rest of the string in reverse
    reverse_print(str + 1);

    // Recursive case:  print the first character
    printf("%c", str[0]);
}

/** ----------------------------------------------------------
 * @fn int fibonacci(int N)
 * @brief Recursively calculates the value of fibonacci at N
 * @param N is the input parameter
 * @return the int value of fibonacci(N)
 * ----------------------------------------------------------
 */
int fibonacci(int N) {
    // Recursively calculate the value of fibonacci at N

    // Base case:  if N is 0, return 0
    if (N == 0) {
        return 0;
    }

    // Base case:  if N is 1, return 1
    if (N == 1) {
        return 1;
    }

    // Recursive case:  return the sum of fibonacci(N-1) and fibonacci(N-2)
    return fibonacci(N - 1) + fibonacci(N - 2);
}