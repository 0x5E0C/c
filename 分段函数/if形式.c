#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x:\n");
	scanf("%d",&x);
	if(x<1)
	{
		y=x;
		printf("y is:\n");
		printf("%d\n",y);
	}
	else if(x>=10)
	{
		y=3*x-11;
		printf("y is:\n");
		printf("%d\n",y);
	}
	else
	{
		y=2*x-1;
		printf("y is:\n");
		printf("%d\n",y);
	}	
	return 0;
}
