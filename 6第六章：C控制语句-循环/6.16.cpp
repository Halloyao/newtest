#include<stdio.h>
const float M=100; 
int main(void)
{
	int i=0,j;
	float sum1=M,sum2=M;
	do
	{
		printf("%f %f\n",sum1,sum2);
		sum1=sum1+M*0.1;
		sum2=sum2+sum2*0.05;
		i++;
	}while((sum1-sum2)>0);
	printf("----第%d次复利超过单利----",i);
	return 0;
}
