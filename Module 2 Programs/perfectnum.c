#include<stdio.h>
int main(){
  int n,n1,s,i;
  printf("Enter a number:");
  scanf("%d",&n);
  n1=n;
  s=0;
  for(i=1;i<n;i++){
    if((n%i)==0){
      s=s+i;
    }
  }
  if(n==s){
    printf("%d is a perfect number",n);
  }
  else{
    printf("%d is not a perfect number",n);
  }
  return 0;
}
/*
output:
Enter a number:6
6 is a perfect number
*/
