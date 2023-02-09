#include<stdio.h>
int main()
{
	int n,i,rem,rev=0,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem  = n % 10;
		rev = rev + (rem * rem * rem);
		n = n / 10;
	}
	if(temp == rev)
	printf("%d is armstrong number",temp);
	else
	printf("%d is not an armstrong number",temp);
	
}

