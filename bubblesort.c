//bubble sort
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 8

void main(){
	int count, array[MAX], exchange, phase= 0,cnt;
	printf("\nEnter the numbers:\n");
	for(count=0;count<MAX;count++){
		printf("\n[%d]", count+1);
		scanf("%d", &array[count]);
	}
	printf("[");
	for(count=0;count<MAX;count++){
		printf("%d\t", array[count]);
	}
	printf("]");
	while(exchange != 0){							// If exchange = 0 that means there is no any exchange in the sorting ie sorted.
		exchange = 0;								//for the check of the sorting process. initilize it with zero for each iteration
		
		printf("\n\n---------------------------------------------------------------------\n\n");for(count=0;count<MAX;count++){
			if(array[count]>array[count+1]){
				printf("\n%d > %d\n", array[count], array[count+1]);
				int temp;
				temp = array[count];
				array[count] = array[count+1];
				array[count+1] = temp;
				exchange++;
				continue;							// If the there is swap continue to the loop.
			}
		}
		printf("[");
		for(count=0;count<MAX;count++){
			printf("%d\t", array[count]);
		}
		printf("]");
		printf("\n\n%d\t", exchange);
		phase++;									// This is for the no of phase.
	}
	printf("\n");
	for(count=0;count<MAX;count++){
		printf("%d:", array[count]);
		for(cnt=0;cnt<array[count];cnt++){
			printf("-");
		}
		printf("\n");
	}
	
	printf("\n\nPhase: %d", phase);
}
