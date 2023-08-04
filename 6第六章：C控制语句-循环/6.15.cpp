#include<stdio.h>
int main(void)
{
	char a[255];
	int i=0;
	printf("依次输入字符：");
	do{
		scanf("%c",&a[i]);
	}while(a[i]!='\n'&&++i);         //输入单个字符，完成输入字符串的效果，\n结束 
	for(i--;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
 } 
