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
	printf("��%d��ȡ��",i);
	return 0;
 } 
