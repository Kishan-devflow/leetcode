#include <stdio.h>
#include <stdlib.h>

/*
 * Returns the two indices whose values add up to target.
 * The caller is responsible for freeing the returned array.
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *answer = (int *)malloc(2 * sizeof(int));
    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
        }
    }

    free(answer);
    *returnSize = 0;
    return NULL;
}

int main(void)
{
    /* Typical case: nums = [2, 7, 11, 15], target = 9 -> [0, 1]. */
    int typical[] = {2, 7, 11, 15};
    int answerSize = 0;
    int *answer = twoSum(typical, 4, 9, &answerSize);
    printf("Typical case: [%d, %d]\n", answer[0], answer[1]);
    free(answer);

    /* Edge case: the matching values are at the two ends. */
    int edge[] = {3, 2, 4};
    answer = twoSum(edge, 3, 6, &answerSize);
    printf("Edge case: [%d, %d]\n", answer[0], answer[1]);
    free(answer);

    return 0;
}
