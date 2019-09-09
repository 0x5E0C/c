#include<stdio.h>
int main()
{
	int x,y,z;
		x=1;
		y=1;
	while(x<=9,y<=9)
	{
		if(x<10)
		{
		if(x<=y)
		{
			z=x*y;
			printf("%d*%d=%d ",x,y,z);
			x++;
		}
		else
		{
			x=1;
			y++;
			z=x*y;
			printf("\n%d*%d=%d ",x,y,z);			
			x++;
		}		
		}
		else
		{
		printf("\n");
		return 0;
		}
	}

}