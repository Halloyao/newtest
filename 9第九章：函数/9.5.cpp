#include<stdio.h>          //改变地址所指向的值，指针 
void large(double *a,double *b); 
int main(void)
{
	double a,b;
	printf("请输入两个数字：");
	scanf("%lf %lf",&a,&b);
	large(&a,&b);          //注意，要带&，因为要改变a，b的值 
	printf("%lf %lf",a,b);
	return 0;
}
void large(double *a,double *b)
{
	if(*a>*b)
		*b=*a;
	else
		*a=*b;
}
