#include <stdbool.h>
#include <stdio.h>

#define MIN_STACK_CAPACITY 10000

typedef struct {
    int values[MIN_STACK_CAPACITY];
    int minimums[MIN_STACK_CAPACITY];
    int size;
} MinStack;

void minStackInit(MinStack *stack)
{
    stack->size = 0;
}

void minStackPush(MinStack *stack, int value)
{
    if (stack->size >= MIN_STACK_CAPACITY) {
        return;
    }

    stack->values[stack->size] = value;
    if (stack->size == 0 || value < stack->minimums[stack->size - 1]) {
        stack->minimums[stack->size] = value;
    } else {
        stack->minimums[stack->size] = stack->minimums[stack->size - 1];
    }
    stack->size++;
}

void minStackPop(MinStack *stack)
{
    if (stack->size > 0) {
        stack->size--;
    }
}

int minStackTop(const MinStack *stack)
{
    return stack->values[stack->size - 1];
}

int minStackGetMin(const MinStack *stack)
{
    return stack->minimums[stack->size - 1];
}

int main(void)
{
    MinStack stack;
    minStackInit(&stack);

    /* Typical case: minimum changes as values are pushed and popped. */
    minStackPush(&stack, -2);
    minStackPush(&stack, 0);
    minStackPush(&stack, -3);
    printf("Typical case minimum: %d\n", minStackGetMin(&stack));
    minStackPop(&stack);
    printf("Typical case top: %d, minimum: %d\n",
           minStackTop(&stack), minStackGetMin(&stack));

    /* Edge case: one item is both the top and the minimum. */
    MinStack oneItem;
    minStackInit(&oneItem);
    minStackPush(&oneItem, 7);
    printf("Edge case top: %d, minimum: %d\n",
           minStackTop(&oneItem), minStackGetMin(&oneItem));

    return 0;
}
