#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
int top=-1;
int size_=0;
int stack[maxsize];
int size(){
    return size_;
}
void peek(){
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }
    printf("The item at the top of the stack is: %d\n",stack[top]);
}
void push(){
    if(size_==maxsize){
        printf("Stack is full...\n");
        return;
    }
    int num;
    printf("Enter the number to push: \n");
    scanf("%d",&num);
    stack[++top]=num;
    size_=size_+1;
}
void pop(){
    if(top==-1){
        printf("Stack is empty!!\n");
        return;
    }
    printf("The Popped item is: %d\n",stack[top--]);
    size_=size_-1;
}
void display(){
    if(top==-1){
        printf("Nothing to display as the stack is empty.\n");
    }
    printf("The elements in the stack : \n");
    for(int i=top;i>=0;i--){
        printf("|\t%d\t|\n",stack[i]);
    }                       
    printf("-----------------\n");
}
void main(){
    int choice;
    while(1){
        printf("\nStatic Stack implementation using array: \n");
        printf("1.Push\n2.Pop\n3.Display\n4.Size\n5.Peek\n6.Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("The size of the stack is: %d\n",size());
            break;
        case 5:
            peek();
            break;
        case 6:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Wrong Choice!!\n");
            break;
        }
    }
}