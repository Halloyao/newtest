#include<stdio.h>
void show();
int position(char ch); 
int main(void)
{
	show();
	return 0;
}
void show()
{
	char ch;
	while(ch=getchar()!=EOF)
	{
		if((ch=getchar())=='\n')
			continue;                //����'\n'�����
		if(position(ch)!=-1)
		{
			printf("%d ",position(ch));
		}
		else
			printf("%c��Ϊ��ĸ",ch); 
	}
}
int position(char ch)
{
	if(ch>='A'&&ch<='Z')
		return ch-'A'+1;
	if(ch>='a'&&ch<='z')
		return ch-'a'+1;
	return -1;
}
