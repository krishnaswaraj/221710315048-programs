// print 1 to n even nos using dowhile loop
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
		printf("%d\t",i);
		i=i+2;
	}
      return 0;
  }
