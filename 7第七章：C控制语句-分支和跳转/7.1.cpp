#include<stdio.h>
int main(void)
{
	char ch;
	int blank=0;      //�ո� 
	int endline=0;    //���з� 
	int others=0;
	while((ch=getchar())!='#')    //getchar()�ķ���ֵ���û�����ĵ�һ���ַ���ASCII��
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
