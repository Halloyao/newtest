#include<stdio.h>
#define MAX 100
int main(void)
{
	float h;
	char name[MAX];
	printf("Input your name:");
	scanf("%s",name);       //ע�⣬�ַ����ǲ���&��
	printf("Input your height(Ӣ��):");
	scanf("%f",&h);
	printf("%s %.3f��Ӣ�ߣ�",name,h/12.0);    //1Ӣ��=12Ӣ��
	return 0; 
 } 
