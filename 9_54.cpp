#include<stdio.h>
#include<locale.h>
#include<math.h>

float alan(int,int);

int main()
{
	int w,h;
	setlocale(LC_ALL, "Turkish");
	printf("Boyunuzu giriniz (cm): ");
	scanf("%d",&w);
	printf("Kilonuzu giriniz (kg): ");
	scanf("%d",&h);
	printf("%.2f",alan(w,h));
return 0;
}

float alan(int w,int h)
{
	float bsa = pow(h,0.725)*pow(w,0.425)*71.84*pow(10,-4);
	return bsa;
}
