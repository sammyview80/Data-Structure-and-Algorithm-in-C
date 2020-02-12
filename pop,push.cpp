#include<stdio.h>
#include<conio.h>


// prototyping 
void showChoice();
int push(struct stack *ps);
int pop(struct stack *ps);
int displayAll(struct stack *ps);

struct stack {
	int item[10];
	int tos;
};

int main() {
	struct stack s;
	int choice;
	s.tos = -1;
	while(1){
		showChoice();
		printf("Enter Your damn choice:");
		scanf("%d", &choice);
		switch(choice) {
			case 1: push(&s); break;
			case 2: pull(&s); break;
			case 3: printf("The top of stack is: %d", s.item[s.tos]); break;
			case 4: displayAll(&s); break;
			case 5: return 0;
			default: printf("Please enter the valaid choice:");
		}
	}
	getch();
	return 0;	
}


