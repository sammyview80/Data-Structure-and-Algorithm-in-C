#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void menu(int *a, int *b, int *c, int *d, int *e);
int main() {
	char data[20], stack[20], tos= -1, operand1, operand2, result, i, operators;
	int a, b, c, d, e;
	menu(&a, &b, &c, &d, &e);
	scanf("%s", &data);
	printf("%d", strlen(data));
	for(i=0;i<=strlen(data);i++){
		if (isalpha(data[i])){
			stack[i] = data[i];
			tos +=1;
			printf("%d", stack[i]);
		}
		else{
			operand1 = stack[i];
			operand2 = stack[i+1];
			operators = data[i];
			printf("%d", operators);
			printf("%d", stack[i]);
			printf("%d", result);
			tos -=2;
		}
	}
}

void menu(int *a, int *b, int *c, int *d, int *e){
	printf("******Menu******\n");
	printf("Enter the value of a, b, c, d, e:");
	scanf("%d%d%d%d%d", a, b, c, d, e);
	printf("Enter the expression:\n");
}
