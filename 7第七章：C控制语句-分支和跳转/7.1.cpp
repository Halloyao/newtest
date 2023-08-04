#include<stdio.h>
int main(void)
{
	char ch;
	int blank=0;      //空格 
	int endline=0;    //换行符 
	int others=0;
	while((ch=getchar())!='#')    //getchar()的返回值：用户输入的第一个字符的ASCII码
	{
		if(ch==' ')
			blank++;
		else if(ch=='\n')
			endline++;
		else
			others++; 
	}
	printf("blank:%d endline:%d others:%d",blank,endline,others);
	return 0; 
 } 
