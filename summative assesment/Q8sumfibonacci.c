/*Develop a C program to display the last digit of sum of n terms of a Fibonacci Series.  (up to 20th term).
Algorithm:-
1.Start.
2.initialize t1=0 , t2=1 , nextterm=0.
3.Input a number n.
4.if n==0 ,then print n.
5. else if n==1,then print n-1.
6. else do nextterm=t1+t2, use for(i=3;i<=n,i++) 
		 t1=t2;
		 t2=nextterm;
		 nextterm=t1+t2;
		 sum+=nextterm;
7.then print sum which is the last digit sum of n terms of a fibonacci series.
*/
#include<stdio.h>
int main(){
	int n,t1=0,t2=1,nextterm=0,i,sum=0;
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
			sum+=t2;
		}
		printf("%d",sum);
	}
	return 0;
}

/*
Output
7
19
*/
