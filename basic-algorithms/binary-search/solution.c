#include <stdio.h>

int search(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main(void)
{
    /* Typical case: target 9 is at index 4. */
    int typical[] = {-1, 0, 3, 5, 9, 12};
    printf("Typical case: %d\n", search(typical, 6, 9));

    /* Edge case: an empty array does not contain the target. */
    printf("Edge case: %d\n", search(NULL, 0, 5));

    return 0;
}
