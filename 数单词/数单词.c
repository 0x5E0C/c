#include<stdio.h>
int main()
{
	char cString[10000];
	int iIndex,iWord=1,a=0,i,x=0,y,z=0;
	char cBlank;
	printf("������С��10000���ַ����ַ���:\n");
	gets(cString);
	while(cString[x]!='\0')
	{
		x++;
	}
	if(x>=10000)
	{
		printf("��ǰ�ַ���Ϊ:%d,��������!\n",x);
	}
	else
	{
		if(cString[0]=='\0')
		{
			printf("0\n");
		}
		else if(cString[0]==' ')
		{
			for(iIndex=0;cString[iIndex]!='\0';iIndex++)
			{
				cBlank=cString[iIndex];
					if(cBlank==' ')
					{
						a++;
						if(a==1)
						{
							iWord++;
						}
					}
					if(cBlank!=' ')
					{
						a=0;
					}
			}
			iWord=iWord-1;
			printf("��������Ϊ:\n");
			printf("%d\n",iWord);
		}
		else
		{
			while(cString[z]!='\0')
			{
				z++;
				y=z-1;
			}
			if(cString[y]==' ')
			{
				for(iIndex=0;cString[iIndex]!='\0';iIndex++)
				{
					cBlank=cString[iIndex];
						if(cBlank==' ')
						{
							a++;
							if(a==1)
							{
								iWord++;
							}
						}
						if(cBlank!=' ')
						{
							a=0;
						}
				}
				iWord=iWord-1;
				printf("��������Ϊ:\n");
				printf("%d\n",iWord);
			}
			else
			{
				for(iIndex=0;cString[iIndex]!='\0';iIndex++)
				{
					cBlank=cString[iIndex];
						if(cBlank==' ')
						{
							a++;
							if(a==1)
							{
								iWord++;
							}
						}
						if(cBlank!=' ')
						{
							a=0;
						}
				}
				printf("��������Ϊ:\n");
				printf("%d\n",iWord);
			}
		}
	}
	return 0;
}