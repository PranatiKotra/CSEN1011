/*
Algorithm:
1.Start.
2.Accept two numbers num1 and devisor.
3.Reminder can be calculated num1-divisor(num1/divisor)
4.stop.
*/
#include<stdio.h>
int main()
{
  int num1,divisor;
  printf("Enter an integer:");
  scanf("%d", &num1);
  printf("Enter an divisor:");
  scanf("%d", &divisor);
  printf("Reminder=%d\n",num1-divisor*(num1/divisor));
  return 0;
}
/*
Output:
Enter an integer:100
Enter divisor:7
Reminder=2
Learnings:
1. Took advantage of integer division.
*/
