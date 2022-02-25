#include<stdio.h>
int main(){
	struct customer {

	char name[15];

	int amount;

	char mobile_number[10];

	}a[2];
	for(int i=0;i<2;i++){
	scanf("%s",a[i].name);
	scanf("%d",&a[i].amount);
	if(n[i].amount<0){
		printf("Invalid amount");
	return 0;
	}
	scanf("%s",a[i].mobile_number);
	if(strlen(a[i].mobile_number)!=10){
		printf("Invalid mobile number");
	return 0;
	}
	int j=0;
	while(a[i].mobile_number[j]!='\0'){
		if(a[i].mobile_number[j]>='0' && a[i].mobile_number[j]<='9')
		j+=1;
	}
	else{
		printf("Invalid entry");
		return 0;
	}
	int total;
	total=a[0].amount+a[1].amount;
	printf("%d",total);
	return 0;
}
