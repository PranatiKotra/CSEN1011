/*
Algorithm:
1. Start.
2. Enter two angles of triangle a and b.
3. third angle=180-(a+b).
4. Print third angle.
5. Stop.
*/
#include<stdio.h>
int main()
{
	int a1,a2,a3;
  printf("Enter two angles:\n");
	scanf("%d %d\n",&a1,&a2);
	a3=180-a1-a2;
	printf("%d",a3);
	return 0;
}
/*
Output:
Enter two angles
30 60
90

Learnings:
1.Finding the third angle of a triangle.
*/
