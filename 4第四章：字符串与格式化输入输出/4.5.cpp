#include<stdio.h>
int main(void)
{
	float a,b,time;
	printf("���������ٶȣ�Mb/s����");
	scanf("%f",&a);
	printf("�����ļ���С��MB����");
	scanf("%f",&b);
	time=b*8/a;
	printf("����ʱ��Ϊ��%.3f��",time);
	return 0;
}
