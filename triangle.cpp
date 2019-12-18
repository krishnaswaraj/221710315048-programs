#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the values");
	scanf("%d %d %d",&x,&y,&z);
	if(x+y+z==180)
	{
		printf("it is triangle");
	}
	else
	{
		printf("it is not triangle");
	}
	return 0;
}
