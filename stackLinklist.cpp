//Implementation of stack using linklist 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//structure for stackLink
struct stackList {
	int info;
	struct stackList *nnode;
};


//proto-typing
void push(struct stackList *start);
void pop(struct stackList *start);
void display(struct stackList *start);
void menu();

//pre-defined function
void menu(){
	printf("\nMenu\n");
	printf("\n1.Push Operation\n");
	printf("\n2.Pop Operation\n");
	printf("\n3.Display\n");
	printf("\n4.Exit\n");
}

void push(struct stackList *start){
	int userInput;
	struct stackList *node , *temp;
	node = (struct stackList *)malloc(sizeof(struct stackList));
	temp = (struct stackList *)malloc(sizeof(struct stackList));
	printf("\nEnter the data to insert:\n");
	scanf("%d", &userInput);
	if (start == NULL){
		node->info = userInput;
		node->nnode = NULL;
		start = node;
		return;
	}
	temp = start;
	temp->info = userInput;
	temp->nnode = NULL;
}

void pop(struct stackList *start){
	int removeData;
	struct stackList *temp;
	if (start == NULL){
		printf("\n The stack is Empty\n");
		return;
		
	}
	temp = start;
	while(temp->nnode != NULL){
		temp = temp->nnode;
	} 
	removeData = temp->nnode->info;
	temp->nnode = NULL;
	printf("\n The removed data = %d\n", removeData);
}

void display(struct stackList *start){
	struct stackList *temp;
	temp = start;
	printf("\nThe element in stack:\n");
	while(temp!=NULL){
		printf("\n%d\n", temp->info);
		temp = temp->nnode;
	}
}


//main function
int main(){
	int choice;
	struct stackList *start;
	start = NULL;
	while(1){
		menu();
		printf("\n Enter your choice:\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: push(start); break;
			case 2: pop(start); break;
			case 3: display(start); break;
			case 4: exit(0);
			default: printf("\n Invalid choice\n");
		}
	}
	return 0;
}
