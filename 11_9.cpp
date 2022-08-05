#include<stdio.h>
#include<locale.h>

int gunuBul(float[], float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float altin[30];
	float ort = 0.0;
	printf("Alt�n�n son 30 g�nl�k de�erlerini giriniz:\n");
	for(int i=0; i<30; i++)
	{
		scanf("%f",&altin[i]);
		ort += altin[i] / 30.0;
	}
	printf("-------------------------------------\n");
	printf("Alt�n�n de�eri ortalama de�erden en �ok ay�n %d. g�n�nde farkl�l�k g�stermi�tir.", gunuBul(altin, ort));
	
}

int gunuBul(float altin[], float ort)
{
	float temp = 0.0, fark;
	int gun;
	for(int i=0; i<30; i++)
	{
		fark = ort - altin[i];
		if(fark > temp)
		{
			temp = fark;
			gun = i+1;
		}
		else if(fark*(-1) > temp)
		{
			temp = fark*-1;
			gun = i+1;
		}
	}
	return gun;
}
