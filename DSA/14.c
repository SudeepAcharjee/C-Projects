#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    char arr[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push a character onto the stack
void push(struct Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push.\n");
        exit(EXIT_FAILURE);
    }
    stack->arr[++stack->top] = value;
}

// Function to pop a character from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop.\n");
        exit(EXIT_FAILURE);
    }
    return stack->arr[stack->top--];
}

// Function to get the precedence of an operator
int getPrecedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0; // Default precedence for operands
    }
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    struct Stack operatorStack;
    initializeStack(&operatorStack);

    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (isdigit(infix[i])) {
            postfix[j++] = infix[i++];
        } else if (infix[i] == '(') {
            push(&operatorStack, infix[i++]);
        } else if (infix[i] == ')') {
            while (!isEmpty(&operatorStack) && operatorStack.arr[operatorStack.top] != '(') {
                postfix[j++] = pop(&operatorStack);
            }
            if (!isEmpty(&operatorStack) && operatorStack.arr[operatorStack.top] != '(') {
                printf("Error: Mismatched parentheses.\n");
                exit(EXIT_FAILURE);
            } else {
                pop(&operatorStack); // Pop '('
                i++;
            }
        } else {
            while (!isEmpty(&operatorStack) && getPrecedence(infix[i]) <= getPrecedence(operatorStack.arr[operatorStack.top])) {
                postfix[j++] = pop(&operatorStack);
            }
            push(&operatorStack, infix[i++]);
        }
    }

    while (!isEmpty(&operatorStack)) {
        postfix[j++] = pop(&operatorStack);
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

// Function to evaluate a postfix expression
int evaluatePostfix(char postfix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i = 0;

    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(&operandStack, postfix[i] - '0'); // Convert char to int
        } else {
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);

            switch (postfix[i]) {
                case '+':
                    push(&operandStack, operand1 + operand2);
                    break;
                case '-':
                    push(&operandStack, operand1 - operand2);
                    break;
                case '*':
                    push(&operandStack, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        printf("Error: Division by zero.\n");
                        exit(EXIT_FAILURE);
                    }
                    push(&operandStack, operand1 / operand2);
                    break;
                default:
                    printf("Error: Invalid character in postfix expression.\n");
                    exit(EXIT_FAILURE);
            }
        }
        i++;
    }

    return pop(&operandStack); // Result is left on the stack
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);

    printf("Result of the postfix expression: %d\n", result);

    return 0;
}
