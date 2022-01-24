/*
Algorithm:
1. Start
2. Enter a number, num.
3. num%2==0
4.if true
 print even.
5.if false
 print odd.
6. Stop.
*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter an integer:");
  scanf("%d\n",&num);
  if(num%2==0)
  {
    printf("%d is even.",num);
  }
  else{
    printf("%d is odd.",num);
  }
  return 0;
}
/*
Output:
Enter an integer: 4
4 is even.
*/
