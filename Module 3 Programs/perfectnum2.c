//perfect number using functions.
#include<stdio.h>
char perfect(a){
	int b,i,r;
	b=0;
	for (i=1;i<=(a-1);i++){
		r=a%i;
		if(r==0)
		{
			b=b+i;
		}
	}
	if (a==b){
		printf("It is a perfect no.");
	}
	else{
		printf("It is not a perfect no.");
	}
}
main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	perfect(a);
}
/*
Output:
Enter a number: 6
It is a perfect no.
*/
