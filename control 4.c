//sum of first n natural nos
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\t",sum);
return 0;
}
