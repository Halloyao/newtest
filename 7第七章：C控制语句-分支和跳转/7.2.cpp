#include<stdio.h>
int main(void)
{
	char ch;
	int counter=0;
	while((ch=getchar())!='#')
	{
		if(counter++%8==0)                //�Ȳ�������++ 
			printf("\n");
		if(ch=='\n')
			printf("'\\n'-%03d  ",ch);    //��Ҫ��ӡ��\n��Ҫ��\ǰ���ټ�һ��\����ת�� 
		else if(ch=='\t')
			printf("'\\n'-%03d  ",ch);    //�Ʊ��\tͬ��
		else
			printf("'%c'-%03d  ",ch,ch);
	}
	return 0;
}


/*
3 ��ʾ��С���3λ���֡�
0 ��ʾ������ֲ���3λ���������0����3λ��
�� printf("%03d", 25); ���ӡ�� 025

��ȻҲ��%-03d
- ����룬�ұ����ո�
*/
