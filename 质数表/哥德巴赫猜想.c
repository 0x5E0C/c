#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a[100000],b[100000],i,j,k,time,temp,number,pos,ipos,kpos;
	printf("请输入一个大于2的偶数:");
	scanf("%d",&number);
	while(number%2==1||number==2)
	{
		printf("请输入一个大于2的偶数:");
		scanf("%d",&number);	
	}
	for(i=0;i<number;i++)
	{
		if((i+1)%2==0)
		{
			a[i]=0;
		}
		else
		{
			a[i]=i+1;
		}
	}
	for(i=1;i<number;i++)
	{
		temp=a[i]/2;
		if(temp/1!=0)
		{
			for(time=2;time<temp;time++)
			{
				if(a[i]%time==0)
				{
					a[i]=0;
				}
			}
		}
	}
	j=0;
	a[0]=2;
	for(i=0;i<number;i++)
	{
		if(a[i]!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	while(b[i]<number)
	{
		i++;
	}
	i++;
	pos=i;
	for(i=0;i<pos;i++)
	{
		for(k=0;k<pos;k++)
		{
			if(b[i]+b[k]==number)
			{
				ipos=i;
				kpos=k;
				i=pos;
				k=pos;
			}
		}
	}
	printf("%d=%d+%d\n",number,b[ipos],b[kpos]);
	return 0;
}