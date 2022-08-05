#include<stdio.h>
#include<math.h>
#include<locale.h>

float ortalamaBul(int[],int);
float standartSapmaBul(int[],int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int notlar[10];
	
	printf("10 adet not giriniz: ");
	for(int i=0; i<10; i++)
		scanf("%d",&notlar[i]);
	
	float ss = standartSapmaBul(notlar,10);
	float ort = ortalamaBul(notlar,10);
	
	for(int i=0; i<10; i++)
	{
		if(notlar[i] >= ort + 1.5*ss)
			printf("%d. öðrencinin harf notu = A\n",i);
		else if(notlar[i] >= ort+0.5*ss && notlar[i] < ort+1.5*ss)
			printf("%d. öðrencinin harf notu = B\n",i);
		else if(notlar[i] >= ort-0.5*ss && notlar[i] < ort+0.5*ss)
			printf("%d. öðrencinin harf notu = C\n",i);
		else if(notlar[i] >= ort-1.5*ss && notlar[i] < ort-0.5*ss)
			printf("%d. öðrencinin harf notu = D\n",i);
		else if(notlar[i] < ort-1.5*ss)
			printf("%d. öðrencinin harf notu = F\n",i);
	}
	return 0;
}

float ortalamaBul(int dizi[],int boyut)
{
	float ort = 0.0;
	for(int i=0; i<boyut; i++)
		ort += dizi[i]*0.1;
	
	return ort;
}

float standartSapmaBul(int dizi[], int boyut)
{
    float ort = 0.0, ss = 0.0;
	int i;
    for(i=0; i<10; i++)
        ort += dizi[i]*0.1;
        
    for(i=0; i<10; i++)
        ss += pow(dizi[i] - ort, 2);
    return sqrt(ss / 10);
}
