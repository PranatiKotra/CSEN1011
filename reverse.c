#include<stdio.h>
int main(){
  int n,r=0,rev,temp;
  printf("Enter a number");
  scanf("%d",&n);
  temp=n;
  while(n!=0){
    rev=n%10;
    r=(r*10)+rev;
    n=n/10;
  }
  if(temp==r){
    printf("Palindrome number");
  }
  else{
    printf("Not Palindrome");
  }
  printf("%d",r);
  
  return 0;
}
/*
Output:
Enter a number 123
Not palindrome321
Enter a number 101
Palindrome number101
*/
