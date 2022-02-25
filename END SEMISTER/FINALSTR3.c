#include<stdio.h>
int main()
{
    int i;
    struct customer
    {
        char name[15];
        int amount;
        int mobile_number[10];
        
    }c1,c2;

	//printf("enter the name of the customer 1");
	scanf("%s",c1.name);
	//printf("enter the amount of customer 1");
	scanf("%d",&c1.amount);
	//printf("enter the number of the customer 1");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&c1.mobile_number[i]);
	}
	//printf("enter the name of the customer 2");
	scanf("%s",c2.name);
	//printf("enter the amount of customer 2");
	scanf("%d",&c2.amount);
	//printf("enter the number of the customer 2");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&c2.mobile_number[i]);
	}
	if(i!=10)
	{
    	printf("Invalid phone number");
	}
	if(c1.amount<0 || c2.amount<0)
	{
    	printf("Invalid amount");
	}
	else
	{
    	printf("%d",c1.amount);
	}
	if((c1.mobile_number>=97 && c1.mobile_number<=122)||(c1.mobile_number>=65 && c1.mobile_number<=90)){
		printf("Invalid Entry");
	}
	if((c2.mobile_number>=97 && c2.mobile_number<=122)||(c2.mobile_number>=65 && c2.mobile_number<=90)){
		printf("Invalid Entry");
	}
	//c2.amount=c1.amount;
	printf("total amount = %d ",c1.amount+c2.amount);
	return 0;
}
