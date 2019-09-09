#include<stdio.h>
float average(float a[10]);
int main()
{
	float c[10],e;
	int b;
	for(b=0;b<10;b++)
	{
		printf("第%d个学生的成绩为:",b+1);
		scanf("%f",&c[b]);
	}
	e=average(c);
	printf("%f\n",e);
}
float average(float a[10])
{
	float r;
	int d;
	r=0;
	for(d=0;d<10;d++)
	{
		r=r+a[d];
	}
	r=r/10;
	return(r);
}