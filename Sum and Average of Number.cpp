#include<stdio.h>
int main()
{
	int n,i,a[20],sum = 0;;
	float avg;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	avg = (sum / n);
	printf("sum of the %d numbers:%d\n",n,sum);
	printf("average of %d numbers:%f\n",n,avg);
	
	
}
