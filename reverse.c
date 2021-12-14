#include<stdio.h>
int main(){
  int n,r=0,rev;
  printf("Enter a number");
  scanf("%d",&n);
  while(n!=0){
    rev=n%10;
    r=(r*10)+rev;
    n=n/10;
  }
  printf("%d",r);
  
  return 0;
}
/*
Output:
Enter a number 123
321
*/
