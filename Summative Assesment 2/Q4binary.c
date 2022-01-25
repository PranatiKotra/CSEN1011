#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    int f[a],w=0;
    while(w<a){
        scanf("%d",&f[w]);
        w=w+1;
    }
    int g=0;
    while(g<a){
        b=b+f[g]*pow(2,a-g-1);
        g=g+1;
    }
    printf("%d",b);
}
/*
Output:
5
1
0
1
1
0
22
*/
