// C program to convert upper case char to lower case char
#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a<=90 && a>=65){
		printf("%c",(a+32));
	}
	else if(a<=122 && a>=97){
		printf("%c",(a-32));
	}
	else{
		printf("Incorrect data");
	}
	return 0;
}

// C program to find factorial of a number
#include<stdio.h>
int main(){
	int num,i,f=1;
	scanf("%d",&num);
	if(num>=0 && num<10){
		for(i=1;i<=num;i++){
			f=f*i;
		}
		printf("%d",f);
	}
	else if(num>=10){
		printf("Too big a number");
	}
	else{
		printf("Negative Number");
	}
	return 0;
}

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

// C program to display nth term in fibonacci series
#include<stdio.h>
int main(){
	int n,t1=0,t2=1,nextterm=0,i;
	scanf("%d",&n);
	if(n==0){
		printf("%d",n);
	}
	else if(n==1){
		printf("%d",n-1);
	}
	else{
		nextterm=t1+t2;
		for(i=3;i<=n;i++){
			t1=t2;
			t2=nextterm;
			nextterm=t1+t2;
		}
		printf("%d",t2);
	}
	return 0;
}
