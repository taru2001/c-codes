#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=1;a<=4;a++)
	{
		for(b=0;b<=a-1;b++)
		{
			printf(" ");
		}
		for(c=1;c<=9-2*a;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
