#include<stdio.h> 
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n,i;
	if(argc==1)
		{
			printf("Enter a number");
		}
		else
		{
		
		for(i=1;i<argc;i++)
		{
			n = atoi(argv[i]); 	

			if(n%2==0)
				printf("%d ",n);
		}
		}
	return 0;	
}
