#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack structure
struct Stack {
    char arr[MAX];
    int top;
};

// Initialize stack
void initStack(struct Stack *s) {
    s->top = -1;
}

// Check if empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Push
void push(struct Stack *s, char ch) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = ch;
}

// Pop
char pop(struct Stack *s) {
    if (isEmpty(s)) {
        return '\0';
    }
    return s->arr[(s->top)--];
}

// Function to check matching pair
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}

// Function to check balanced parentheses
int checkBalanced(char exp[]) {
    struct Stack s;
    initStack(&s);

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        // If opening bracket, push
        if (ch == '(' || ch == '{' || ch == '[') {
            push(&s, ch);
        }
        // If closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty(&s))
                return 0;  // No matching opening

            char popped = pop(&s);
            if (!isMatchingPair(popped, ch))
                return 0;  // Not matching
        }
    }

    // If stack empty → balanced
    return isEmpty(&s);
}

int main() {
    char expression[MAX];

    printf("Enter expression: ");
    scanf("%s", expression);

    if (checkBalanced(expression))
        printf("Parentheses are Balanced\n");
    else
        printf("Parentheses are NOT Balanced\n");

    return 0;
}