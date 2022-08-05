#include<stdio.h>
#include<locale.h>
#include<math.h>
float toplamMesafe(float,int,float);

int main()
{
	int alfa;
	float hiz, sure;
	setlocale(LC_ALL, "Turkish");
	printf("�lk h�z� giriniz (m/s) : ");
	scanf("%f",&hiz);
	printf("A��y� giriniz (derece) : ");
	scanf("%d",&alfa);
	printf("Havada kalma s�resini giriniz (s) : ");
	scanf("%f",&sure);
	printf("------------------------\n");
	printf("Cisim %.2f m uza�a d��er",toplamMesafe(hiz,alfa,sure));
return 0;
}

float toplamMesafe(float hiz, int alfa, float sure)
{
	return hiz*cos(alfa*M_PI/180)*sure;
}
