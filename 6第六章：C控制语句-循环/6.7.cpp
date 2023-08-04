#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
	char a[MAX];
	printf("输入任意单词：");
	scanf("%s",a);
	int b=strlen(a);
	for(int i=b;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
