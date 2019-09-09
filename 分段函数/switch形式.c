#include<stdio.h>
int main()
{
	int xx,yy,zz;
	printf("enter x:\n");
	scanf("%d",&xx);
	zz=xx;
	switch(zz)
	{
	case 0:
		yy=xx;
		printf("y is:\n");
		printf("%d\n",yy);
		break;

	case 1:;
	case 2:;
		case 3:;
		case 4:;
		case 5:;
		case 6:;
		case 7:;
		case 8:;
		case 9:
			yy=2*xx-1;
			printf("y is:\n");
			printf("%d\n",yy);
			break;
default:
			break;

	}
	if(zz<0)
	{
		yy=xx;
		printf("y is:\n");
		printf("%d\n",yy);
	}
	else if(zz>9)
	{
		yy=3*xx-11;
		printf("y is:\n");
		printf("%d\n",yy);
	}
	return 0;
}