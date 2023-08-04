#include<stdio.h>
#define MAX 100
int main(void)
{
	float h;
	char name[MAX];
	printf("Input your name:");
	scanf("%s",name);       //×¢Òâ£¬×Ö·û´®ÊÇ²»¼Ó&µÄ
	printf("Input your height(Ó¢´ç):");
	scanf("%f",&h);
	printf("%s %.3f£¨Ó¢³ß£©",name,h/12.0);    //1Ó¢³ß=12Ó¢´ç
	return 0; 
 } 
