#include<stdio.h>
int main(void)
{
	int i=0,a;
	printf("������һ��������"); 
	scanf("%d",&a);
	while(i++<11)              //���б𣬺�++ 
		printf(" %d\n",a++);   //���������++ 
	return 0;
 } 
