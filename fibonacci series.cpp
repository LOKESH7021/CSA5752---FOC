#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,nt,i;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("the fibonnaci series is:");
	printf("%d %d ",n1,n2);
	for(i=2;i<n;i++)
	{
		nt = n1 + n2;
		n1 = n2;
		n2 = nt;
		printf("%d ",nt);
		
	}
}

