#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty. No peek.\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    printf("Top element: %d\n", peek());

    return 0;
}
