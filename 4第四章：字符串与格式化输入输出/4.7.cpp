#include<stdio.h>      //double��float������ 
#include<float.h>
int main(void)
{
	float a;
	double b;
	a=1.0/3.0;
	b=1.0/3.0;
	printf("%.6lf %.6lf\n",a,b);
	printf("%.12lf %.12lf\n",a,b);
	printf("%.16lf %.16lf\n",a,b);
	printf("%d %d",FLT_DIG,DBL_DIG);    //�����������͵���Чλ�� 
	return 0;
 } 
