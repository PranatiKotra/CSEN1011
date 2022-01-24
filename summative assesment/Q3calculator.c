Algorithm:
1. Start.
  
// C program to act as a calculator
#include<stdio.h>
int main(){
	char op;
	int num1,num2,result;
	scanf("%d %d %c",&num1,&num2,&op);
	switch(op){
		case '+': 
			result=num1+num2;
			printf("%d",result);
			break;
		case '-':
			result=num1-num2;
			printf("%d",result);
			break;
		case '*':
			result=num1*num2;
			printf("%d",result);
			break;
		case '/':
			result=num1/num2;
			printf("%d",result);
			break;
		case '%':
			result=num1%num2;
			printf("%d",result);
			break;
		default:
			printf("Invalid operator");
	}
	return 0;
}
/*
Output:
5 6 +
11
*/
