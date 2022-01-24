Algorithm:
1. Start

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

/*
Output:
5
3
*/
