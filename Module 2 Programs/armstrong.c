#include<stdio.h>
int main(){
  int n,n1,s=0,r;
  printf("Enter a three digit number:");
  scanf("%d",&n);
  n1=n;
  while(n1!=0){
    r=n1%10;
    s=s+(r*r*r);
    n1/=10;
  }
  if(n==s){
    printf("%d is an ARMSTRONG number",s);
  }
  else{
    printf("%d is NOT an ARMSTRONG number.",s);
  }
  return 0;
}
/*
Output:
Enter a three digit number:153
153 is an ARMSTRONG number
*/
