#include<stdio.h>
int main()
{
	int hHead,lLeg,rResult1,rResult2;
	printf("��ͷ��:\n");
	scanf("%d",&hHead);

	printf("�ܽ���:\n");
	scanf("%d",&lLeg);

	rResult1=2*hHead-0.5*lLeg;
	rResult2=0.5*lLeg-hHead;
	printf("��������Ϊ:%d\n",rResult1);
	printf("�õ�����Ϊ:%d\n",rResult2);
	return 0;
}