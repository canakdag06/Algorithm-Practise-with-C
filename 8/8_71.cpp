#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int kisi;
	float carpim = 1.0;
	printf("Kiþi sayýsý giriniz: ");
	scanf("%d",&kisi);
	
	for(int i=2;i<=kisi;i++)
	{
		carpim = carpim*((366.0-i+1.0)/366.0);
	}
	printf("Ýki kiþinin doðum günlerinin ayný gün olma ihtimali = %.5f",(float)(1.0-carpim));
return 0;
}
