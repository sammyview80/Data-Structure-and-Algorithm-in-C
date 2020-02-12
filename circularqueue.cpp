//Circular queue using structure

/* 
For circular queue the initilization:
front = 0;
rear = 0;
count = 0;
1. For enqueue: increase the rear by : rear = (rear+1)%10 [because it is circular queue].
2. For dequeue: increase the front by : front = (front+1)%10.
3. To check the full condition : use of count variable is great. count = max;
4. To check the null condition : use of count variable is great. count = 0;
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//prototyping
int enqueue(struct queue *que);
int dequeue(struct queue *que);
int display(struct queue *que);

//structure for the circular
struct queue{
	int item[4];
	int front, rear, count;
};

//pre-defined function
void menu(){
	printf("\nMenu\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Display\n");
	printf("4.Exit\n");
}

int enqueue(struct queue *que){
	int userValue;
	if (que->count == 4){
		printf("\n Queue is full\n");
		return 0;
	}
	printf("\nUserValue: \n");
	scanf("%d", &userValue);
	que->item[que->rear] = userValue;
	que->rear = (que->rear + 1)%10; // This is for incresing the rear by one and the modulus is used for circular motion
	que->count++;
	return 0;	
}
int dequeue(struct queue *que){
	int removeValue;
	if (que->count == 0){
		printf("\n The queue is empty\n");
		return 0;
	}
	removeValue = que->item[que->front];
	que->front = (que->front + 1)%10;
	printf("The removed value is : %d", removeValue);
	que->count--;
	return 0;
}
int display(struct queue *que){
	struct queue *temp;
	int front , rear;
	temp = que;
	printf("que->count=%d\t", que->count);
	printf("que->front = %d\t", que->front);
	printf("que->rear = %d\n\n\n", que->rear);
	front = temp->front;
	rear = temp->rear;
	while(front!=rear){
		printf("\n%d\n", que->item[front]);
		front = (front+1)%10;
	}
}

//Main function
int main(){
	int choice;
	struct queue *que;
	que = (struct queue*)malloc(sizeof(struct queue));
	que->rear = que->front = que->count = 0;
	while(1){
		menu();
		printf("\n Please enter you choice:\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: enqueue(que); break;
			case 2: dequeue(que); break;
			case 3: display(que); break;
			case 4: exit(0);
			default: printf("Invalid Choice");
		}
	}
	getch();
	return 0;
}
