#include<stdio.h>      //double和float的区别 
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
	printf("%d %d",FLT_DIG,DBL_DIG);    //两种数据类型的有效位数 
	return 0;
 } 
