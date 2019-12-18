#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%5==0&&n%11==0)
	printf("the is divisible by 5 and 11");
	else
	printf("the number is not divisinble by 5 and 11");
	return 0;
}
