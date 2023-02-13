#include<stdio.h>
int main()
{
	int i,n,a[20],rem,temp;
	printf("enter an integer:");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem = n % 10;
		a[i] = rem;
		i++;
		n = n/10;
	}
	printf("the digits of %d:",temp);
	for(i=i-1;i>-1;i--)
	printf("%d ",a[i]);
	
}
