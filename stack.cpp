#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//proto-typing 
void menu();
void pop(struct stack *s);
void push(struct stack *s);
void display(struct stack *s);

//structure for the stack
struct stack {
	int item[10];
	int tos;
};

//pre-defined function
void menu(){
	printf("\nMenu\n");
	printf("\n1.Push Operation\n");
	printf("\n2.Pop Operation\n");
	printf("\n3.Display\n");
	printf("\n4.Exit\n");
}

void push(struct stack *s){
	int userData;
	if (s->tos == 9){
		printf("\nStack Full\n");
		return;
	}
	printf("\n Enter the value to insert\n");
	scanf("%d", &userData);
	s->tos++;
	s->item[s->tos] = userData;
}

void pop(struct stack *s){
	int removeData;
	if (s->tos == -1){
		printf("\nStack Empty\n");
		return ;
	}
	removeData = s->item[s->tos];
	s->tos--;
	printf("\nThe removed data = %d", removeData);
}

void display(struct stack *s){
	int count;
	for(count=0;count<=s->tos;count++){
		printf("\n%d\n", s->item[count]);
	}
}

//main function
int main(){
	struct stack s;
	s.tos = -1;
	int choice;
	while(1){
		menu();
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1: push(&s);break;
			case 2: pop(&s);break;
			case 3: display(&s);break;
			case 4: exit(0);
			default: printf("\nInvalid choice\n");
		}
	}
}
