//selection sort 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 8
/*
Core concept:
	Put the corresponding number into a variable:
	Check the vaiable all the element in the list.
	If the number is lest than ok.
	Else: swap the number with it.
*/
void main(){
	int array[MAX], count, iteration=0, minIndex;
	printf("\nEnter the value for the sorting puropose one:\n");
	for(count=0;count<MAX;count++){
		printf("%d:", count+1);
		scanf("%d", &array[count]);
	}
	int temp;
	while(iteration<MAX){
		minIndex = array[iteration];
		for(count=0;count<MAX-2;count++){
			if(array[count+1]<minIndex){
				temp = minIndex;
				minIndex = array[count+1];
				array[count+1] = temp;
			}
		}
		iteration++;
	}
	for(count=0;count<MAX;count++){
		printf("\n%d", array[count]);
	}
	
}
