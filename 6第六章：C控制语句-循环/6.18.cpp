#include<stdio.h>
#define Dun 150
int main(void)
{
	int a=5,i=1;
	do{
		a-=i;
		a*=2;
		printf("��%d��������Ϊ%d��\n",i,a);
		i++;
	}while(a<=Dun);
	printf("---��%d�ܣ��������ﵽ���Ϊ%d��---",i-1,a);
	return 0;
 } 
