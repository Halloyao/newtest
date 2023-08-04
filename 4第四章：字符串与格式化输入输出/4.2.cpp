#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
	char name[MAX];
	int width,width2;
	printf("输入自己的姓名：");
	scanf("%s",name);
	width=printf("\"%s\"\n",name);    //printf的返回值就是输出的字符数量，转义序列\"打印冒号 
	width2=strlen(name);
	printf("%d %d\n",width,width2);     //width多了两个引号，一个换行符 
	printf("\"%20s\"\n",name);          //宽度为20的空格右边打印name 
	printf("\"%-20s\"\n",name);  	    //宽度为20的空格左边打印name 
	printf("\"%*s\"\n",width2+5,name);  //指定宽度参数 
	return 0;
 } 
