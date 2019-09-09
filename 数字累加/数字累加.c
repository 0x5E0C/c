#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("起始数字为:");
	scanf("%d",&a);
	printf("终止数字为:");
	scanf("%d",&b);
	d=a;
	for(c=a+1;c<=b;c++)
	{
		d=c+d;
	}
	printf("结果:%d\n",d);
	return 0;
}
