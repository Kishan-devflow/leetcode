#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode dummy = {0, NULL};
    struct ListNode *tail = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    tail->next = (list1 != NULL) ? list1 : list2;
    return dummy.next;
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
    /* Typical case: merge 1 -> 2 -> 4 and 1 -> 3 -> 4. */
    struct ListNode a3 = {4, NULL};
    struct ListNode a2 = {2, &a3};
    struct ListNode a1 = {1, &a2};
    struct ListNode b3 = {4, NULL};
    struct ListNode b2 = {3, &b3};
    struct ListNode b1 = {1, &b2};
    printf("Typical case: ");
    printList(mergeTwoLists(&a1, &b1));

    /* Edge case: merging an empty list with one node. */
    struct ListNode only = {5, NULL};
    printf("Edge case: ");
    printList(mergeTwoLists(NULL, &only));

    return 0;
}
