#include<stdio.h>
int main()
{
    int p,q,r,s=0;
    scanf("%d",&p);
    int m[p];
    int i=0;
    while(i<p){
        scanf("%d",&m[i]);
        i=i+1;
    }
    i=0;
    while(i<p){
        if(m[0]<m[i]){
            s=s+1;
            i=i+1;
    }
    if(s==0){
        printf("0");
    }
    q=r=m[0];
    int n=0;
    while(n<p){
        if(q<m[n])
        q=m[n];
        if(r>m[n])
        r=m[n];
        n=n+1;
    }
    printf("%d",q-r);
    return 0;
    }
}
/*
Output:
6 
10
7
5
8
11
9
*/
