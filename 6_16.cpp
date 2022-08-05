#include<stdio.h>

int main()
{
	float a,b;
	printf("Harmonik ortalamasi alinacak degerler -> ");
	scanf("%f %f",&a,&b);
	printf("\n---------------------------------------------");
	printf("\n                      2 * %.0f * %.0f     %.0f",a,b,2*a*b);
	float sonuc = (2*a*b)/(a+b);
	printf("\nHarmonik Ortalama = -------------= ------- = %.2f",sonuc);
	printf("\n                        %.0f + %.0f       %.0f",a,b,a+b);
}
