#include <stdio.h>
int fact(int n);
int main(){
    int girls,boys,total;
    scanf("%d%d",&girls,&boys);
    if((girls+boys)<=10){
    int n=fact(boys)*fact(10-boys);
    printf("%d",n);
    }
  total=girls+boys;
    else if((girls>boys)||(total>10 && total<0)){
      printf("Invalid ");
    }
}
int fact(int a)
{   int i,factorial=1;
    for(i=1;i<=a;i++){
        factorial=factorial*i;}
    return factorial;
}
