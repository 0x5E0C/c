#include<stdio.h>
int main()
{	
	char cString[1000];
	int x=0;
	printf("ÇëÊäÈë×Ö·û´®:\n");
	gets(cString);
	while(cString[x]!='\0')
	{
		x++;
	}
	printf("×Ö·û´®³¤¶È:\n%d\n",x);
	return 0;
}