#include<stdio.h>
#include<string.h>
int main()
{
	char cint[1000],cChar[1000];
	char cYes[1000]={"y"};
	char cNo[1000]={"n"};
	char cBack[1000]={"b"};
	char cQuit[1000]={"q"};
	int a,b,c,d;
	int e=1;
	while(e=1)
	{
		printf("Yes(y) or No(n)?\n");
		gets(cint);
		a=strcmp(cint,cYes);
		b=strcmp(cint,cNo);
		if(a==0)
		{
			e=0;
			while(e==0)
			{
				printf("good\n");
				printf("Back(b) or Quit(q)?\n");
				gets(cChar);
				c=strcmp(cChar,cBack);
				d=strcmp(cChar,cQuit);
				if(c==0)
				{
					e=1;				
				}
				else if(d==0)
				{
					return 0;
				}
				else
				{
					goto show1;
				}
			}
		}
		else if(b==0)
		{
			e=0;
			while(e==0)
			{
				printf("bad\n");
				printf("Back(b) or Quit(q)?\n");
				gets(cChar);
				c=strcmp(cChar,cBack);
				d=strcmp(cChar,cQuit);
				if(c==0)
				{
					e=1;
				}
				else if(d==0)
				{
					return 0;
				}
				else
				{
					goto show1;
				}
			}
		}
		else
		{   
			e=0;
			while(e==0)
			{
				printf("error\n");
				printf("Back(b) or Quit(q)?\n");
				gets(cChar);
				c=strcmp(cChar,cBack);
				d=strcmp(cChar,cQuit);
				if(c==0)
				{
					e=1;
				}
				else if(d==0)
				{
					return 0;
				}
				else
				{
					e=0;
				}
			}
		}
	}
	return 0;
show1:
	e=0;
	while(e==0)
	{
		printf("error\n");
		printf("Back(b) or Quit(q)?\n");
		gets(cChar);
		c=strcmp(cChar,cBack);
		d=strcmp(cChar,cQuit);
		if(c==0)
		{
			e=1;
		}
		else if(d==0)
		{
			return 0;
		}
		else
		{
			e=0;
		}
	}
}