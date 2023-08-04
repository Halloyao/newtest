#include<stdio.h>
int main(void)
{
	char ch;
	int counter=0;
	while((ch=getchar())!='#')
	{
		if(counter++%8==0)                //先操作，后++ 
			printf("\n");
		if(ch=='\n')
			printf("'\\n'-%03d  ",ch);    //想要打印出\n，要在\前面再加一个\用来转义 
		else if(ch=='\t')
			printf("'\\n'-%03d  ",ch);    //制表符\t同理
		else
			printf("'%c'-%03d  ",ch,ch);
	}
	return 0;
}


/*
3 表示最小输出3位数字。
0 表示如果数字不足3位，在左边用0补成3位。
如 printf("%03d", 25); 会打印出 025

当然也有%-03d
- 左对齐，右边填充空格
*/
