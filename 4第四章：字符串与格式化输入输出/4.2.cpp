#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
	char name[MAX];
	int width,width2;
	printf("�����Լ���������");
	scanf("%s",name);
	width=printf("\"%s\"\n",name);    //printf�ķ���ֵ����������ַ�������ת������\"��ӡð�� 
	width2=strlen(name);
	printf("%d %d\n",width,width2);     //width�����������ţ�һ�����з� 
	printf("\"%20s\"\n",name);          //���Ϊ20�Ŀո��ұߴ�ӡname 
	printf("\"%-20s\"\n",name);  	    //���Ϊ20�Ŀո���ߴ�ӡname 
	printf("\"%*s\"\n",width2+5,name);  //ָ����Ȳ��� 
	return 0;
 } 
