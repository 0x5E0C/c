#include<stdio.h>
int main()
{	
	char cString[1000];
	int x=0;
	printf("�������ַ���:\n");
	gets(cString);
	while(cString[x]!='\0')
	{
		x++;
	}
	printf("�ַ�������:\n%d\n",x);
	return 0;
}