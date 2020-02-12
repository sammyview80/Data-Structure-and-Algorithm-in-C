//linear queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

//structure
struct queue {
	int rear, front;
	int item[MAX];
};


int isFull(struct queue *q){
	if(q->rear == MAX - 1){
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty(struct queue *q){
	if (q->front == q->rear + 1){
		return 1;
	}
	else {
		return 0;
	}
}

void enqueue(struct queue *q){
	struct queue *temp;
	int userData;
	if(isFull(q)){
		printf("\nQueue is full\n");
		return ;
	}
	printf("\nEnter the data:\n");
	scanf("%d", &userData);
	q->rear++;
	q->item[q->rear] = userData;
}

void dequeue(struct queue *q){
	struct queue *temp;
	int removeData;
	if(isEmpty(q)){
		printf("\nQueue is Empty\n");
		return;
	}
	removeData = q->item[q->front];
	q->front--;
	printf("\nThe data removed is %d\n", removeData);
}

void display(struct queue *q){
	int i;
	if(isEmpty(q)){
		printf("\nQueue is empty\n");
		return;
	}
	for(i=front;i<=rear;i++){
		printf("\n%d\n", q->item[i]);
	}
}

void main(){
	int choice;
	struct queue *q;
	q->front = 0;
	q->rear = -1;
	menu();
	printf("\n Enter your choice:\n");
	scanf("%d", &choice);
	switch(choice){
		case 1: enqueue(q); break;
		case 2: dequeue(q); break;
		case 3: display(q); break;
		case 4: exit(0); break;
		default: printf("\nInvalid choice\n");
	}
}
