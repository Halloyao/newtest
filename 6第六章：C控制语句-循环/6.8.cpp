#include<stdio.h>
int main(void)
{
	float a,b;
	while(printf("����������������")&&scanf("%f %f",&a,&b)==2)      //scanf�ķ���ֵ�ǳɹ���ȡ���ݵĸ��� 
	{
		float c=(a-b)/(a*b);
		printf("%.6lf\n",c); 
	}
	return 0;
}
