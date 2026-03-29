#include <stdio.h>

#define MAX 10

int st[MAX];
int top = -1;

// Push Function
void push(int value) {
    if (top == MAX - 1) {
        printf("\nStack Overflow");
    } else {
        top++;
        st[top] = value;
        printf("\n%d pushed into stack", value);
    }
}

// Pop Function
void pop() {
    if (top == -1) {
        printf("\nStack Underflow");
    } else {
        int deleted = st[top];
        top--;
        printf("\n%d popped from stack", deleted);
    }
}

// Peek Function
void peek() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nTop element is %d", st[top]);
    }
}

int main() {
    int choice, value;

    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Peek");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter value: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        default:
            printf("\nInvalid choice");
    }

    return 0;
}