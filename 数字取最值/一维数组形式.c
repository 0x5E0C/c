#include<stdio.h>
int main()
{
	int a[100];
	int h,i,j,l,max,min;
	printf("要比较几个数字的大小:\n");
	scanf("%d",&i);
	if(i<100)
	{
		for(j=0;j<=i;j++)
		{
			h=j+1;
			if(h<=i)
			{
				printf("第%d个数字为:\n",h);
				scanf("%d",&a[j]);
			}
		}
	}
	else
	{
		printf("超出限制!\n");
	}
	max=a[0];
	for(l=0;l<i;l++)
	{
		if(max<a[l])
		{
			max=a[l];
		}
	}
	printf("最大的数字为:%d\n",max);
	min=a[0];
	for(l=0;l<i;l++)
	{
		if(min>a[l])
		{
			min=a[l];
		}
	}
	printf("最小的数字为:%d\n",min);
	return 0;
}