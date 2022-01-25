#include<stdio.h>
int main(){
    int number,i,j;
    scanf("%d",&number);
    int a[number];
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(a[i]==a[j]){
            printf("%d\n",a[j]);
            }
        }
    }
}
/*
Output:
5
1
2
3
4
2
2
*/
