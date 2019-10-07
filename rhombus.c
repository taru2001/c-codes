#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=(6-2*a)/2;b++)
		{
		
		printf(" ");
	    }
	    for(c=1;c<=(2*a-1);c++)
	   {
		 printf("*");
	   }
	printf("\n");
}
        for(d=2;d>=1;d--)
        {
        
        		for(f=1;f<=(6-2*d)/2;f++)
        		{
        			printf(" ");
				}
				for(g=1;g<=2*d-1;g++)
				{
					printf("*");
				
			}
			printf("\n");
		}
return 0;
	
	
}
