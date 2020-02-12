//Evaluation of postfix
#include<stdio.h>
#include<conio.h>
#include<math.h>


/*
@Algorithm for the Evalulation of postfix.

1. Scan the string or the character for left to right and perform step 2 and 3 for the character.
2. If operand is found then add to the stack.
3. If operator is found then:
	a. Remove the latest two top element. ie A is the top element where as B is the next-to top element.
	b. Evaluate A and B with the encountered operator.
	c. Place the result back on Stack. 
4. Set the top of the stack as the result.
5. Display the result.
*/




int main(){
	char postFix[20], postRep;
	int vStack[20];
	int i , sVal , operand1, operand2, tos=-1, res;
	printf("\n Enter the valid postFix operation:");
	scanf("%d", postFix);
	for(i=0;postFix[i]!='\0';i++){   //Looping to the end of the expression
		postRep = postFix[i];
		if(isalpha(postRep)){		//isalpha inbuilt function check for the alphabet
			printf("\nEnter the corresponding value:");
			scanf("%d", &sVal);
			vStack[tos++] = sVal;	//injecting the value into the vStack top of stack
		}
		else {
			operand1 = vStack[tos--];	//pop and assigning the value into operand1 and operand2 from vStack
			operand2 = vStack[tos--];
			switch(postFix[i]){
				case '+' : res = (operand1 + operand2); break;
				case '-' : res = (operand1 - operand2); break;
				case '/' : res =  (operand1 / operand2); break;
				case '$' : res = pow(operand1, operand2); break;
				default: printf("\nInvalid");
			}
			vStack[++tos] = res;   		//Getting the last value as the result and showing the result
		}
	}
	printf("\n The evaluated postfix expresstions Value is %d", vStack[tos]);
	getch();
}
