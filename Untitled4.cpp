#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the number n");
	scanf("%d",&n);
	if(n%2==0)
	a=n*n;
	else
	a=n*n*n;
	printf("the value is %d",a);
	return 0;
}
