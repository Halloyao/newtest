#include<stdio.h>
const float INCH_TO_CM=2.54; 
int main(int argc, char *argv[])   //argc���ⲿ����Ĳ���������argv[ ]�ǲ������ַ������飬�ο�������ַ 
{                                  //https://blog.csdn.net/zhaozhiyuan111/article/details/104050729
	float a,b;
	printf("������ߣ����ף���");
	scanf("%f",&a);
	while(a>0)
	{
		b=a/INCH_TO_CM;
		printf("���Ϊ��%.3f��Ӣ�磩\n",b);
		printf("---------------------\n");
		printf("������ߣ����ף���");
		scanf("%f",&a);
	}
	printf("�����������");
	return 0;
}
