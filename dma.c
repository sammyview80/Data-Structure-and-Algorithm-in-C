#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
	int **a , **b , **c, r1, r2, c1, c2, i, j;
	//Input the no of row and colume
	printf("Enter the no of row for matrix A:");
	scanf("%d", &r1);
	printf("Enter the no of colume for matrix A:");
	scanf("%d", &c1);
	printf("Enter the no of row for matrix B:");
	scanf("%d", &r2);
	printf("Enter the no of colume for matrix B:");
	scanf("%d", &c2);
	
	//Dynamic memoryallocation in c 
	a = (int **)malloc(r1 * sizeof(int*));
	for(i=0;i<r1;i++){
		a[i] = (int *)malloc( c1 * sizeof(int));
	}
	b = (int **)malloc(r2 * sizeof(int *));
	for(i=0;i<r2;i++){
		b[i] = (int *)malloc( c2 * sizeof(int));
	}
	c = (int **)malloc( r1 * sizeof(int *));
	for(i=0;i<c2;i++){
		c[i] = (int *)malloc( c2 * sizeof(int));
	}
	printf("For matrix A:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("\ta[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	printf("For matrix B:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("\ta[%d][%d]", i, j);
			scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
	if (r1=r2) {
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				c[i][j] = a[i][j] + b[i][j];
			}
			printf("\n");
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("\t%d", c[i][j]); 
			}
			printf("\n");
		}
	}
	getch();
	return 0;
	}
	
