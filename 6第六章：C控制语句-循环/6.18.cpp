#include<stdio.h>
#define Dun 150
int main(void)
{
	int a=5,i=1;
	do{
		a-=i;
		a*=2;
		printf("第%d周朋友数为%d个\n",i,a);
		i++;
	}while(a<=Dun);
	printf("---第%d周，朋友数达到最大，为%d个---",i-1,a);
	return 0;
 } 
