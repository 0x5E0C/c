#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("��ʼ����Ϊ:");
	scanf("%d",&a);
	printf("��ֹ����Ϊ:");
	scanf("%d",&b);
	d=a;
	for(c=a+1;c<=b;c++)
	{
		d=c+d;
	}
	printf("���:%d\n",d);
	return 0;
}
