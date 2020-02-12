//Linear Queue
/*
Initialize the value of rear and front : rear = -1 and front = 0.

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//structure queue
struct queue {
	int item[5];
	int rear , front ;
};


// pre-defined functions
void menu(){
	printf("\nMenu\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Display\n");
	printf("4.Exit\n");
}
void enqueue(struct queue *q){
	int userData;
	if (q->rear == 5){
		printf("\nQueue full\n");
		return;
	}
	printf("\nEnter the data:\n");
	scanf("%d", &userData);
	q->item[q->rear] = userData;
	q->rear++;
}

void dequeue(struct queue *q){
	int removeData; 
	if(q->front == q->rear + 1){
		printf("\nStack Empty\n");
		return;
	}
	removeData = q->item[q->front];
	q->front++;
	printf("\nThe removed data = %d\n", removeData);
}
void display(struct queue *q){
	int front = q->front, rear = q->rear;
	while(front!=rear){
		printf("\n%d\n", q->item[front]);
		front = front + 1;
	}
}

//main function
void main(){
	int choice ;
	struct queue *q;
	q->front = 0;
	q->rear = -1;
	menu();
	printf("\nEnter your choice:\n");
	scanf("%d", &choice);
	switch(choice){
		case 1: enqueue(q); break;
		case 2: dequeue(q); break;
		case 3: display(q); break;
		case 4: exit(0); 
		default: printf("\nInvalid Choice\n");
	}
}



