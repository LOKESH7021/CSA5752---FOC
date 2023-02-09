#include<stdio.h>
int main()
{
	int n,a[20],i,sum=0;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("sum of the number series:%d",sum);
}

