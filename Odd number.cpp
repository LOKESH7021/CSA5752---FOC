#include<stdio.h>
int main()
{
	int n,a[20],i;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("the number value is:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2 != 0)
	printf("%d ", a[i]);
}
}

