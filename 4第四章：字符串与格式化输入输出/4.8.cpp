#include<stdio.h>
const float GALLONtoLITRE=3.785;
const float MILEtoKM=1.609;
int main(void)
{
	float a,b,c,d;
	printf("������ʻ��̺����ĵ�������(����-Ӣ��)��");
	scanf("%f %f",&a,&b);
	printf("�ͺ�Ϊ������/Ӣ���%.1f\n",a/b);
	c=a*GALLONtoLITRE;
	d=b*MILEtoKM;
	printf("�ͺ�Ϊ����/�����%.1f\n",c/d);
	return 0;
 } 
