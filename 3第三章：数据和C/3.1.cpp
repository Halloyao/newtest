#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
	int bigint=2147483647;
	float bigfloat=3.4e38;
	float smallfloat=10.0/3;
	printf("�����������+1=%d\n",bigint+1);       //����Խ�� 
	printf("���float����*10=%f\n",bigfloat*10);  //������Խ�� 
	printf("float������ʧ=%f",smallfloat);        //������ʧ
	return 0;
}
