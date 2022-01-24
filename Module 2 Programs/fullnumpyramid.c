#include <stdio.h>
int main() {
  int i,j,k,s,n;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    for(s=1;s<=n-i;s++) {
      printf(" ");
    }
    k=i;
    for(j=1;j<=i;j++) {
      printf("%d ",k++);
    }
    k=k-2;
    for(j=1;j<i;j++) {
      printf("%d ",k--);
    }
    printf("\n");
  }
  return 0;
}
/*
output:
Enter the number of rows: 5
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
