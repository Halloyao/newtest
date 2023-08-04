#include<stdio.h>
int main(void)
{
	int i=0;
	float k=1000000;
	do{
		k=k+k*0.08;
		k-=100000;
		i++;
	}while(k>0);
	printf("第%d年取出",i);
	return 0;
 } 
