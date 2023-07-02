#include<stdio.h>

int main()
{
	float santigrat;
	printf("Sicakligi giriniz (oC) ->");
	scanf("%f",&santigrat);
	float fahrenhayt = (santigrat/100)*180 + 32;
	printf("Girilen %.2f oC, %.2f Fahrenhayt",santigrat,fahrenhayt);
	
}
