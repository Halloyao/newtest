#include<stdio.h>
#define MAX 100
int main(void)
{
	char name1[MAX];
	char name2[MAX];
	printf("输入自己的姓：");
	scanf("%s",name1);
	printf("输入自己的名：");
	scanf("%s",name2);
	printf("%s,%s",name1,name2);
	return 0;
 } 
