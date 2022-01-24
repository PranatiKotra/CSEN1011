#include<stdio.h>
int main(){
  int a[20],n;
  printf("Enter number of elements in the array:");
  scanf("%d",&n);
  printf("Enter %d numbers",n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("The array elements are\n");
  for(int i=0;i<n;i++){ 
    printf("%d \t",a[i]);
  }
}
/*
Output:
Enter number of elements in the array: 5
Enter 5 numbers 1
2
3
4
5
The array elements are
1 2 3 4 5
*/
