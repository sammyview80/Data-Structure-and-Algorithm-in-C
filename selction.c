#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
//selection sorting

void main(){
	int i, min_value, j, array[MAX];
	printf("Please Enter the array of number :");
	for(i=0;i<MAX;i++){
		scanf("%d", &array[i]);
	}
	for(i=0;i<MAX-1;i++){							//To iterate over the last-1 value
		min_value = i;								// Initilize the value to be the initital index
		for(j=i+1;j<MAX;j++){						
			if(array[j] < array[min_value]){		// To check the value if the min_value is smaller then min_value
				min_value = j;						// If yes new min value is j
			}
			if(min_value!=i){						// To check the index is min_value is still in first or not
				printf("\nThe swap number %d - %d", array[i], array[min_value]);	//If true we will swap the number
				//Swap the value
				int temp; 
				temp = array[min_value];
				array[min_value] = array[i];
				array[i] = temp;
			}
		}
	}
	for(i=0;i<MAX;i++){
		printf("\n %d", array[i]);
	}
}
