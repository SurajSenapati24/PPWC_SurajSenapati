#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define maxsize 100

int stack[maxsize];
int top = -1;
void push(int data);
int pop();
int postfix(char *exp);
int main() {
    char exp[maxsize] = "234*6*+";
    int result = postfix(exp);
    printf("Result of postfix evaluation: %d\n", result);
    return 0;
}
void push(int data) {
    if (top == maxsize - 1) {
        printf("Stack is full. Cannot push %d\n", data);
        return;
    }
    stack[++top] = data;
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int postfix(char *exp) {
    int i = 0, operand1, operand2, result;
    char ch;

    while ((ch = exp[i++]) != '\0') {
        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            operand2 = pop();
            operand1 = pop();

            switch (ch) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    return -1;
            }
            push(result);
        }
    }
    return pop();
}

