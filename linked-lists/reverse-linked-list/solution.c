#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *previous = NULL;
    struct ListNode *current = head;

    while (current != NULL) {
        struct ListNode *nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

static void printList(const struct ListNode *head)
{
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) {
            printf(" -> ");
        }
        head = head->next;
    }
    printf("\n");
}

int main(void)
{
    /* Typical case: 1 -> 2 -> 3 becomes 3 -> 2 -> 1. */
    struct ListNode third = {3, NULL};
    struct ListNode second = {2, &third};
    struct ListNode first = {1, &second};
    printf("Typical case: ");
    printList(reverseList(&first));

    /* Edge case: reversing an empty list returns an empty list. */
    printf("Edge case: ");
    printList(reverseList(NULL));

    return 0;
}
