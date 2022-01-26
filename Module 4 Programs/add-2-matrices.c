#include<stdio.h>
int main(){
  int a[10][10];
  int b[10][10];
  int c[10][10],i,j,r,col;
  printf("Enter number of rows:");
  scanf("%d",&r);
  printf("Enter number of columns:");
  scanf("%d",&col);
  printf("Enter matix 1 elements:");
  for(i=0;i<r;i++){
    for(j=0;j<col;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Matix 1 elements:\n");
  for(i=0;i<r;i++){
    for(j=0;j<col;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("Enter matix 2 elements:\n");
  for(i=0;i<r;i++){
    for(j=0;j<col;j++){
      scanf("%d",&b[i][j]);
    }
  }
  printf("Matix 2 elements:\n");
  for(i=0;i<r;i++){
    for(j=0;j<col;j++){
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  printf("Sum of matrix is:\n");
  for(i=0;i<r;i++){
    for(j=0;j<col;j++){
      c[i][j]=a[i][j]+b[i][j];
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
/*
Output:
Enter number of rows:2
Enter number of columns:2
Enter matix 1 elements:1
2
3
4
Matix 1 elements:
1 2
3 4
Enter matix 2 elements:4
5
6
7
Matix 2 elements:
4 5 
6 7
Sum of matrix is:
5 7
9 11
*/
