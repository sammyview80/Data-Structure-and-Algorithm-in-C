//LinkList

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//prototyping
void menu();

//Basic structure
struct linkList {
	int info;
	struct linkList *next;
};

struct linkList *start = NULL;

//UserDefined Function
void menu(){
	printf("\n\n-----------Menu------------\n");
	printf("\n1. Insert Front\n");
	printf("\n2. Insert Last\n");
	printf("\n3. Display All:\n");
	printf("\n4. Exit the program:\n");
}

// Inserting From First
void insertFront(struct linkList *start){
	int userInput;
	struct linkList *nnode;
	nnode = (struct linkList*) malloc(sizeof(struct linkList));		//New node is created with info and next 
	printf("\n Enter the value to insert in the fornt:");			
	scanf("%d", &userInput);
	nnode->info = userInput;						//We assign the value of info as the userInput value 
	nnode->next = start;							//And link the next into the start
	start = nnode;									//Linking the start with the nnode address
	printf("%d", nnode->info);
}

//Inserting In End
void insertLast(struct linkList *start){
	int userInput;
	struct linkList *nnode, *temp;
	nnode = (struct linkList *)malloc(sizeof(struct linkList));
	printf("\nEnter the value to  be inserted:");
	scanf("%d", &userInput);	//Getting the value for the user as userInput
	temp = start;				//assigning the value into the temporay variable
	if (start==NULL){			//To check the linkList is empty or not if empty just add one nnode and exit
		start = nnode;			//Linking the start with the address of the nnode that we just added
		nnode->info = userInput;//assigning the value
		nnode->next = NULL;		//Termination of the linkList
		return ;
	}
	while(temp!=NULL){			//We suppose a new temporary variable for our ease. This loop goes until the last address(or next) is null
		temp= temp->next;		//THis will provide the last index or the shell
	}
	temp->info = userInput;		//After getting the last shell we add the value inputed 
	temp->next = NULL;			//Termination of the linkList
}

//Displaying the list
void listDisplay(struct linkList *start){
	struct linkList *temp;
	temp = start;
	while(temp!=NULL){
		printf("\n%x------------------>%d", temp->next , temp->info);		//Printing the temp->next and temp->info
		temp = temp->next;													//Incrementing the value by assigning the next's next
	}
}

int main(){
	int ch;
	while(1){
		menu();
		printf("\nEnter you choice:");
		scanf("%d", &ch);
		switch(ch){
			case 1: insertFront(start); break;
			case 2: insertLast(start); break;
			case 3: listDisplay(start); getch(); break;
			case 4: exit(1);
		
		}
	}
}








