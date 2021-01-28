#include<stdio.h>
#include"iseven.h"
int main()
{
	int n;
	scanf("%d",&n);
	int ans=iseven(n);
	if(ans==1)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
