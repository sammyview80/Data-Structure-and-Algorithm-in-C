#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//User-defined Function


int search(int *array, int noInput, int searchItem){
	int low = 0, high = noInput, mid;
	mid = (low+high)/2;
	int count= 0;
	while(low<=high){
		if(searchItem>*(array+count)){
			low = mid+ 1;
		}
		else if(searchItem == *(array+count)){
			printf("\nNumber found at index %d", count+1);
			return searchItem;
		}
		else{
			high = mid -1;
		}
		count++;
	}
	return (-1);
}


void main(){
	int *array, noInput;
	printf("\nEnter the number of items in the array:");
	scanf("%d", &noInput);
	array = (int *)malloc(sizeof(int)*noInput);
	int count;
	printf("Please enter the number:");
	for(count=0;count<noInput;count++){
		printf("\n%d:", count+1);
		scanf("%d", array+count);
	}
	int searchItem;
	printf("\nPlease enter the number to search:");
	scanf("%d", &searchItem);
	int returnValue = search(array, noInput, searchItem);
	printf("\n%d", returnValue);
	getch();
}
