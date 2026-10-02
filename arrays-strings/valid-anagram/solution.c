#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
 * This version follows the problem constraint that strings contain
 * lowercase English letters.
 */
bool isAnagram(char *s, char *t)
{
    int counts[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }

    return true;
}

int main(void)
{
    /* Typical case: "anagram" and "nagaram" are anagrams. */
    printf("Typical case: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    /* Edge case: two empty strings are anagrams. */
    printf("Edge case: %s\n", isAnagram("", "") ? "true" : "false");

    return 0;
}
