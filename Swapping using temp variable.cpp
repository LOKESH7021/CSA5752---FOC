#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a & b values:");
	scanf("%d %d",&a,&b);
	printf("before swapping:\n");
	printf("a = %d , b = %d\n",a,b);
	printf("after swapping:\n");
	temp = a;
	a = b;
	b = temp;
	printf("a = %d , b = %d",a,b);
	}
