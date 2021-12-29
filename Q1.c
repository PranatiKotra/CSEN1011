/*Algorithm:
1. Start.
2. Enter a character "a".
3. if num<=90 and num>=65
      print (a+32) value.
4. if num<=122 and num>=97
      print (a-32) value.
5. else
      print Incorrect data.
6.Stop.
*/

// C program to convert upper case char to lower case char
#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a<=90 && a>=65){
		printf("%c",(a+32));
	}
	else if(a<=122 && a>=97){
		printf("%c",(a-32));
	}
	else{
		printf("Incorrect data");
	}
	return 0;
}
/*
Output:
a
A
*/
