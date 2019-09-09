#include<stdio.h>
int main()
{
	int hHead,lLeg,rResult1,rResult2;
	printf("总头数:\n");
	scanf("%d",&hHead);

	printf("总脚数:\n");
	scanf("%d",&lLeg);

	rResult1=2*hHead-0.5*lLeg;
	rResult2=0.5*lLeg-hHead;
	printf("鸡的数量为:%d\n",rResult1);
	printf("兔的数量为:%d\n",rResult2);
	return 0;
}