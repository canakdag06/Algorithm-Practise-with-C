#include<stdio.h>

float yardMetreCevir(float,char);

int main()
{
	printf("%.4f\n",yardMetreCevir(3,'y'));
	printf("%.4f\n",yardMetreCevir(0.9144,'m'));
return 0;
}

float yardMetreCevir(float deger, char cins)
{
	if(cins == 'y')
		return deger = deger*0.9144;
	else if(cins == 'm')
		return deger = deger/0.9144;
}
