#include<stdio.h>
#include<locale.h>
#include<math.h>
float cevirKG(float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float para;
	printf("Para miktarýnýz nedir? (TL) : ");
	scanf("%f",&para);
	printf("-----------------------------\n");
	printf("Bozukluklarýn toplam kg ederi = %.5f KG",cevirKG(para));
return 0;
}

float cevirKG(float para)
{
	int kurus50=0, kurus25=0, kurus10=0;
	float kg = (para/1.0)*8.2/1000.0;
	float kurus = para - para/1.0;
	
	while(kurus>=0.50)
	{
		kg += 6.8/1000.0;	// kg = kg + 6.8/1000.0
		kurus -= 0.50;
	}
	
	while(kurus>=0.25)
	{
		kg += 4.0/1000.0;
		kurus -= 0.25;
	}
	
	while(kurus>=0.10)
	{
		kg += 3.15/1000.0;
		kurus -= 0.10;
	}
	return kg;
}
