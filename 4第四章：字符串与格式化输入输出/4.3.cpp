#include<stdio.h>
#include<string.h>
int main(void)
{
	float a;
	printf("�����븡������");
	scanf("%f",&a);
	printf("%.lf %.le\n",a,a);     //.����ɶҲû�У�����ȡ��С����0λ��û��С���㣬�������� 
	printf("%.4lf %.4le\n",a,a);   //.4����ȡ4λ 
	printf("%lf %le\n",a,a);       //���� 
	return 0; 
}
