#include<stdio.h>
int main()
{
	int a[100];
	int h,i,j,l,max,min;
	printf("Ҫ�Ƚϼ������ֵĴ�С:\n");
	scanf("%d",&i);
	if(i<100)
	{
		for(j=0;j<=i;j++)
		{
			h=j+1;
			if(h<=i)
			{
				printf("��%d������Ϊ:\n",h);
				scanf("%d",&a[j]);
			}
		}
	}
	else
	{
		printf("��������!\n");
	}
	max=a[0];
	for(l=0;l<i;l++)
	{
		if(max<a[l])
		{
			max=a[l];
		}
	}
	printf("��������Ϊ:%d\n",max);
	min=a[0];
	for(l=0;l<i;l++)
	{
		if(min>a[l])
		{
			min=a[l];
		}
	}
	printf("��С������Ϊ:%d\n",min);
	return 0;
}