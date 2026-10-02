#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    /* Even digit count: x == reversedHalf.
       Odd digit count: ignore the middle digit in reversedHalf. */
    return x == reversedHalf || x == reversedHalf / 10;
}

int main(void)
{
    /* Typical case: 121 reads the same forwards and backwards. */
    printf("Typical case: %s\n", isPalindrome(121) ? "true" : "false");

    /* Edge case: a negative number is not a palindrome. */
    printf("Edge case: %s\n", isPalindrome(-121) ? "true" : "false");

    return 0;
}
