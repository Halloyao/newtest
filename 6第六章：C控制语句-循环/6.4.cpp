#include<stdio.h>
int main(void)
{
	char a[26];
	char b='A';         //A��ascllֵΪ65 
	int j=0,c=2;
	for(int i=0;i<26;i++)
	{
		a[i]=b+i;
	}
	for(int i=0;i<26;i+=c,c++)           //ͦ�����ף���ӱ�ı��� 
	{
		for(;j<=i;j++)
		{
			printf("%c ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
