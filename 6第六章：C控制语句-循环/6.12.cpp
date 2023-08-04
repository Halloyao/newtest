#include<stdio.h>
int main(void)
{
	double a=0,b=0;
	int num;
	while(printf("ÊäÈëÏîÊı£º")&&scanf("%d",&num)==1)
	{
		for (int i=1;i<=num;i++)
		{
			a+=1.0/i;
			if(i%2==0)
			{
				b-=1.0/i;
			}
			else
			{
				b+=1.0/i;
			}
		}
		printf("%lf %lf\n",a,b);
		a=b=0;
	}
	return 0;
}
