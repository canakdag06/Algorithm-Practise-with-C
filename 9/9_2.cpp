#include<stdio.h>
#include<locale.h>
#include<math.h>
float toplamSure(float,int);

int main()
{
	int alfa;
	float hiz;
	setlocale(LC_ALL, "Turkish");
	printf("Ýlk hýzý giriniz (m/s) : ");
	scanf("%f",&hiz);
	printf("Açýyý giriniz (derece) : ");
	scanf("%d",&alfa);
	printf("------------------------\n");
	printf("Cisim %.3f saniye sonra yere düþer",toplamSure(hiz,alfa));
return 0;
}

float toplamSure(float hiz, int alfa)
{
	return 2*((hiz*sin(alfa*M_PI/180))/9.80);
}
