/*Algorithm:
1. Start.
2. Enter a number 'num'.
3. Initiate f=1.
4. f=f*i.
5. print f.
6. if num>=0 and num<10
    repeat steps 3,4,5.
 7. if num>=10
    print Too big a number.
 8. else
    print negative number.
 9. Stop.
 */

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
/*
Output:
4
24
*/
