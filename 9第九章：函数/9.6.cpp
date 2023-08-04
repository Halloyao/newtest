#include<stdio.h>
void ordering(double *a,double *b,double *c); 
int main(void)
{
	double a,b,c;
	printf("ÇëÊäÈëa£¬b£¬cµÄÖµ£º");
	scanf("%lf %lf %lf",&a,&b,&c);
	ordering(&a,&b,&c);
	printf("%lf %lf %lf",a,b,c);
	return 0;
}
void ordering(double *a,double *b,double *c)
{
	double temp;
	if(*a>*b)
	{
		temp=*a;
		*a=*b;
		*b=temp;
	}
	if(*b>*c)
	{
		temp=*b;
		*b=*c;
		*c=temp;
	}
	if(*a>*b)
	{
		temp=*a;
		*a=*b;
		*b=temp;
	}
}

