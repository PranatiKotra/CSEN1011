#include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter a positive integer:")
    scanf("%d", &n);
    for(int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (n==1)
    {
        printf("1 is neithe prime nor composite.");   
    }
    else
    {
        if(flag==0)
            printf("Prime");
        else
            printf("Composite");
    }
    return 0;
}
/*
Output:
Enter a positive integer: 2
Composite
*/
