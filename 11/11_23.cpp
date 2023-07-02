#include<stdio.h>
#include<locale.h>

int enbEnkArasiUzaklik(float[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	float caplar[boyut];
	
	printf("Ka� adet bilye �ap� gireceksiniz:");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>50)
	{
		printf("Yanl��!! En fazla 50 girebilirsiniz\n");
		printf("Ka� adet bilye �ap� gireceksiniz:");
		scanf("%d", &boyut);
	}
	
	printf("%d adet �ap giriniz:\n", boyut);
	for(int i=0; i<boyut; i++)
	{
		scanf("%.2f", &caplar[i]);
	}
	printf("--------------------------------\n");
	printf("En b�y�k ile en k���k aras�nda %d bilye vard�r", enbEnkArasiUzaklik(caplar,boyut));
	return 0;
}

int enbEnkArasiUzaklik(float caplar[], int boyut)
{
	float min = 100.0;
	float max = 0.0;
	int mesafe, min_index, max_index;
	
	for(int i=0; i<boyut; i++)
	{
		if(min > caplar[i])
		{
			min = caplar[i];
			min_index = i;
		}
		if(max < caplar[i])
		{
			max = caplar[i];
			max_index = i;
		}
	}
	
	mesafe = min_index - max_index -2;
	if(mesafe<0)
		mesafe = mesafe* -1;
	return mesafe;
}
