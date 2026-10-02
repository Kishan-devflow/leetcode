#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char *s)
{
    int length = (int)strlen(s);
    char *stack = (char *)malloc((size_t)(length + 1) * sizeof(char));
    if (stack == NULL) {
        return false;
    }

    int top = 0;
    for (int i = 0; i < length; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[top++] = current;
        } else {
            if (top == 0) {
                free(stack);
                return false;
            }

            char opening = stack[--top];
            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = top == 0;
    free(stack);
    return valid;
}

int main(void)
{
    /* Typical case: each opening bracket has a matching close. */
    printf("Typical case: %s\n",
           isValid("()[]{}") ? "true" : "false");

    /* Edge case: the empty string is valid. */
    printf("Edge case: %s\n", isValid("") ? "true" : "false");

    return 0;
}
