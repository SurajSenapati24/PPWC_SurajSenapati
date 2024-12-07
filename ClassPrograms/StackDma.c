#include <stdio.h>
#include <stdlib.h>

int *stack;
int top=-1;
int maxsize;
int size=0;
//push Operation
void push(){
int num;
	if(top==maxsize-1){
		printf("Stack is full\n");
		return;
	}
	printf("Enter element to push into the stack: \n");
	scanf("%d",&num);
	top+=1;
	stack[top]=num;
	size+=1;
}
//pop operation
void pop(){
	if(top==-1){
		printf("Stack is empty.\n");
		return;
	}
	printf("The popped element is: %d\n",stack[top--]);
	size-=1;
}
//display operation
void display(){
	printf("Elements of the stack are: \n");
	for(int i=top;i>=0;i--){
		printf("|\t%d\t|\n",stack[i]);
	}
	printf("-----------------\n");
}
//get size of the stack
int getSize(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	return size;
}
void stackResize(int ns){
	stack=(int*)realloc(stack,ns*sizeof(int));
	if (stack == NULL) {
        printf("Memory not allocated.\n");
        return;
    }
    maxsize=ns;
}
void main(){
	printf("Enter the size of stack you want: \n");
	scanf("%d",&maxsize);
	stack=(int*)malloc(maxsize*sizeof(int));
	if (stack == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
	int choice;
	while(1){
		printf("Static Implementation of stack\n");
		printf("1. Push\n2. Pop\n3.Display\n4.Size\n5.Resize Stack\n6.Exit\n");
		printf("Enter your choice: \n");
		scanf("%d",&choice);
		int ns;
		switch(choice){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4:printf("The size of the stack is: %d\n",getSize());
					break;
			case 5:printf("Enter the new size of the stack: \n");
					scanf("%d",&ns);
					stackResize(ns);
					break;
			case 6: printf("Exiting...\n");
					exit(0);
			default: printf("Wrong input!!\n");
			
					
		}
	}
}
