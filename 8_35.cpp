#include<stdio.h>

int main()
{
	int n=0;

	for(int i=1000;i<=9999;i++)
	{
	int a=i/1000;
	int b=(i%1000)/100;
	int c=(i%100)/10;
	int d=i%10;
		if((a*10+b)*(c*10+d)==(b*10+a)*(d*10+c))
		{
			n++;
			printf("%d ",i);
		}
	}
			printf("Toplam = %d adet",n);
}
