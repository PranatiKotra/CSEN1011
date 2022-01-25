#include<stdio.h>
int main(){
  int max,min,i,a[20],n;
  printf("Enter number of elements in the array:");
  scanf("%d",&n);
   printf("Enter %d numbers",n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++){
    if(a[i]<min){
      min=a[i];
    }
    else if(a[i]>max){
      max=a[i];
    }
  }
  printf("Max= %d\nMin= %d\n",max,min);
}
/*
Output:
Enter number of elements in the array:5
Enter 5 numbers
6
5
4
3
2
Max=6
Min=2
*/
