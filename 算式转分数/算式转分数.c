#include<stdio.h>
int fac1[10],fac2[10];
void pross(int time,int data)
{
	int times,number,begin,i,j,temp;
	if(time==1)
	{
		temp=0;
		number=data;
		begin=number;
		times=number/2;
		for(i=2;i<=times;i++)
		{
			if(number%i==0)
			{
				fac1[temp]=i;
				temp++;
				number=number/i;
				i=1;
			}
		}
		if(begin==number)
		{
			fac1[0]=number;
			fac1[1]=0;
		}
		else
		{	
			fac1[temp]=number;
			if(number==1)
			{
				temp=temp-1;
			}
			fac1[temp+1]=0;
		}
	}
	else if(time==2)
	{
		temp=0;
		number=data;
		begin=number;
		times=number/2;
		for(i=2;i<=times;i++)
		{
			if(number%i==0)
			{
				fac2[temp]=i;
				temp++;
				number=number/i;
				i=1;
			}
		}
		if(begin==number)
		{
			fac2[0]=number;
			fac2[1]=0;
		}
		else
		{	
			fac2[temp]=number;
			if(number==1)
			{
				temp=temp-1;
			}
			fac2[temp+1]=0;
		}
	}
}
void main()
{
	int a,b,i,j,pos1=0,pos2=0,result1,result2;
	scanf("%d",&a);
	scanf("%d",&b);
	pross(1,a);
	pross(2,b);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(fac1[i]==fac2[j])
			{
				fac1[i]=0;
				fac2[j]=0;
			}		
		}
	}
	i=0;
	while(fac1[i]==0)
	{
		i++;
	}
	result1=fac1[i];
	pos1=i;
	i=0;
	while(fac2[i]==0)
	{
		i++;
	}
	result2=fac2[i];
	pos2=i;
	for(i=pos1+1;i<10;i++)
	{
		if(fac1[i]!=0)
		{
			result1=result1*fac1[i];
		}
	}
	for(i=pos2+1;i<10;i++)
	{
		if(fac2[i]!=0)
		{
			result2=result2*fac2[i];
		}
	}
	j=0;
	for(i=0;i<10;i++)
	{
		if(fac1[i]==0)
		{
			j++;
		}
	}
	if(j==10)
	{
		result1=1;
	}
	j=0;
	for(i=0;i<10;i++)
	{
		if(fac2[i]==0)
		{
			j++;
		}
	}
	if(j==10)
	{
		result2=1;
	}
	if((result1==1)&&(result2==1))
	{
		printf("1");
	}
	else if((result1!=1)&&(result2==1))
	{
		printf("%d",result1);
	}
	else
	{
		printf("%d/%d",result1,result2);
	}
	printf("\n");
}

