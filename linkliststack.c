//problem of stack using linklist 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//proto-typing
void push();
void pop();
void display();

//structure 
struct slinkList {
	int info;
	struct slinkList *next;
};

struct slinkList *start = NULL;			//This is for global available

void menu(){
	printf("\nMenu\n");
	printf("\n1.Push\n");
	printf("\n2.Pop\n");
	printf("\n3.Display\n");
	printf("\n4.Exit\n");
}

//main function
int main(){
	int choice;
	while(1){
		menu();
		printf("\nEnter the choice:\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("\nInvalid Choice\n");
		}
	}
	return 0;
}

//pre-defined functions
void push(){
	struct slinkList *nnode, *temp;
	int userInput;
	nnode = (struct slinkList *)malloc(sizeof(struct slinkList));
	printf("\nEnter the value:\n");
	scanf("%d", &userInput);
	if(start == NULL){
		nnode->info = userInput;	
		/*
		if start is null we will perform following steps:
			1. Add the node address to the start.
			2. Define the node next address as null (to specify the next is null or define the list terminate).
		*/
		nnode->next = NULL;
		start = nnode;
	}
	/*
	else start is not null :
		1. As the new node is created. Start still have the address of preceding node address. 
		2. The preceding node address is assigned to the newnode next part.
		3. Start is assigned the newnode address.
	*/
	nnode->info = userInput;
	nnode->next = start;
	start = nnode;
}

void pop(){
	struct slinkList *temp;
	int removeData;
	temp = start;
	if(start == NULL){
		printf("\nStack Empty\n");
		free(temp);
		return;
	}
	else if(start->next == NULL){
		/*
		For pop:
		Note: Start always is the top of the linklist containing the preceding node address.
			if the preceding node address is null means there is only one node.
		if start->next == NULL:
			Linklist have only one node
			1. Directly set the start to NULL.
		*/
		removeData = start->info;
		start = NULL;
		free(temp);
		printf("Removed data");
		return;
	}
	removeData = start->info;
	start = temp->next;
	/*
	We need the start->next value so we assign the address of start to the temperory variable.
	and put the unwanted value in the new variable and basically print in the console.
	*/
	free(temp);
	printf("The removed data is %d", removeData);
}

void display(){
	struct slinkList *temp;
	temp = start;
	if(start == NULL){
		printf("\nStack empty\n");
		return;
	}
	else if(start->next == NULL){
		printf("\n%d\n", start->info);
		return ;
	}
	while(temp->next == NULL){
		printf("\n%d\n", temp->info);
		temp = temp->next;
	}
}




