//Tower of hanoi
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//recursion is used

void towerOfHanoi(int n, char fromRod, char toRod , char usingRod ){
	/*
	1.First towerOfHanoi(no of disk, from the rod, to the rod, and the refrence rod);
		i. We have to move rods from |fromRod to |toRod using |usingRod. ie First the rod is moved to using rod and after that to 
			 |to rod :towerOfHanoi(n-1, fromRod, usingRod, toRod); 
		ii. Now usingRod acts as base rod ie(fromRod) ie :towerOfHanoi(usingRod, toRod, fromRod);
	*/
	if(n == 1){
		printf("\nMoving 1 from %c to %c",fromRod, toRod);
		return;
	}
	towerOfHanoi(n-1, fromRod, usingRod, toRod);
	printf("\nMoving %d form %c to %c",n, fromRod, toRod);
	towerOfHanoi(n-1, usingRod, toRod, fromRod);
}

int main(){
	int n;
	printf("\nThe number of Disk\n");
	scanf("%d", &n);
	towerOfHanoi(n, 'A', 'C', 'B');
	/*getch(); was missing*/
	getch();
	return 0;
}
