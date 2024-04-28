#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct TwoStacks {
    int arr[MAX_SIZE];
    int top1, top2;
};

void initializeTwoStacks(struct TwoStacks *ts) {
    ts->top1 = -1;  // Initialize top of the first stack
    ts->top2 = MAX_SIZE;  // Initialize top of the second stack
}

int isFull(struct TwoStacks *ts) {
    return ts->top1 + 1 == ts->top2;
}

int isEmpty1(struct TwoStacks *ts) {
    return ts->top1 == -1;
}

int isEmpty2(struct TwoStacks *ts) {
    return ts->top2 == MAX_SIZE;
}

void push1(struct TwoStacks *ts, int value) {
    if (isFull(ts)) {
        printf("Stack overflow. Cannot push to stack 1.\n");
        return;
    }

    ts->arr[++ts->top1] = value;
    printf("%d pushed to stack 1.\n", value);
}

void push2(struct TwoStacks *ts, int value) {
    if (isFull(ts)) {
        printf("Stack overflow. Cannot push to stack 2.\n");
        return;
    }

    ts->arr[--ts->top2] = value;
    printf("%d pushed to stack 2.\n", value);
}

int pop1(struct TwoStacks *ts) {
    if (isEmpty1(ts)) {
        printf("Stack 1 is empty. Cannot pop.\n");
        return -1;
    }

    int value = ts->arr[ts->top1--];
    printf("%d popped from stack 1.\n", value);
    return value;
}

int pop2(struct TwoStacks *ts) {
    if (isEmpty2(ts)) {
        printf("Stack 2 is empty. Cannot pop.\n");
        return -1;
    }

    int value = ts->arr[ts->top2++];
    printf("%d popped from stack 2.\n", value);
    return value;
}

void displayStacks(struct TwoStacks *ts) {
    if (isEmpty1(ts)) {
        printf("Stack 1 is empty.\n");
    } else {
        printf("Elements in stack 1: ");
        for (int i = 0; i <= ts->top1; ++i) {
            printf("%d ", ts->arr[i]);
        }
        printf("\n");
    }

    if (isEmpty2(ts)) {
        printf("Stack 2 is empty.\n");
    } else {
        printf("Elements in stack 2: ");
        for (int i = MAX_SIZE - 1; i >= ts->top2; --i) {
            printf("%d ", ts->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct TwoStacks myStacks;
    initializeTwoStacks(&myStacks);

    int choice, stackNum, element;

    do {
        printf("\nTwo Stack Operations:\n");
        printf("1. Push to Stack 1\n");
        printf("2. Push to Stack 2\n");
        printf("3. Pop from Stack 1\n");
        printf("4. Pop from Stack 2\n");
        printf("5. Display Stacks\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push to Stack 1: ");
                scanf("%d", &element);
                push1(&myStacks, element);
                break;
            case 2:
                printf("Enter the element to push to Stack 2: ");
                scanf("%d", &element);
                push2(&myStacks, element);
                break;
            case 3:
                element = pop1(&myStacks);
                if (element != -1) {
                    printf("%d popped from Stack 1.\n", element);
                }
                break;
            case 4:
                element = pop2(&myStacks);
                if (element != -1) {
                    printf("%d popped from Stack 2.\n", element);
                }
                break;
            case 5:
                displayStacks(&myStacks);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
