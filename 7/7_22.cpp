#include<stdio.h>

int main()
{
	float a1,a2,a3,b1,b2,b3,c1,c2,c3;
	printf("Birinci jurinin yarismaci puanlari: ");
	scanf("%f %f %f",&a1,&b1,&c1);
	printf("Ikinci jurinin yarismaci puanlari: ");
	scanf("%f %f %f",&a2,&b2,&c2);
	printf("Ucuncu jurinin yarismaci puanlari: ");
	scanf("%f %f %f",&a3,&b3,&c3);
	printf("---------------------------------");
	float a= a1 + a2 + a3;
	float b= b1 + b2 + b3;
	float c= c1 + c2 + c3;
	
	if(a>=b && a>=c)
	printf("\nEn iyi yarismaci 1. yarismacidir. (Ortalama puan: %.2f)",a/3);
	else if(b>=a && b>=c)
	printf("\nEn iyi yarismaci 2. yarismacidir. (Ortalama puan: %.2f)",b/3);
	else
	printf("\nEn iyi yarismaci 3. yarismacidir. (Ortalama puan: %.2f)",c/3);
	return 0;
	
}
