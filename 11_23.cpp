#include<stdio.h>
#include<locale.h>

int enbEnkArasiUzaklik(float[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	float caplar[boyut];
	
	printf("Kaç adet bilye çapý gireceksiniz:");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>50)
	{
		printf("Yanlýþ!! En fazla 50 girebilirsiniz\n");
		printf("Kaç adet bilye çapý gireceksiniz:");
		scanf("%d", &boyut);
	}
	
	printf("%d adet çap giriniz:\n", boyut);
	for(int i=0; i<boyut; i++)
	{
		scanf("%.2f", &caplar[i]);
	}
	printf("--------------------------------\n");
	printf("En büyük ile en küçük arasýnda %d bilye vardýr", enbEnkArasiUzaklik(caplar,boyut));
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
