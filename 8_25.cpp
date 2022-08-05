#include<stdio.h>
#include<locale.h>

int main()
{
	float konuk,talip,toplam=0,n=0,yasli,genc,denk;
	setlocale(LC_ALL,"Turkish");
	printf("Konuðun yaþýný giriniz : ");
	scanf("%f",&konuk);
	while(1)
	{
		printf("Talibin yaþýný giriniz : ");
		scanf("%f",&talip);
		
		if(talip == 0)
		break;
		
			if(talip>konuk)
			yasli++;
			else if(talip<konuk)
			genc++;
			else if(talip==konuk)
			denk++;
		n++;
		toplam = toplam+talip;
	}
	printf("-----------------------------");
	printf("\nKonuktan daha yaþlý taliplerin sayýsý = %.f",yasli);
	printf("\nKonuktan daha genç taliplerin sayýsý = %.f",genc);	
	printf("\nKonuðun yaþýna denk taliplerin sayýsý = %.f",denk);
	printf("\nTaliplerin yaþ ortalamasý = %.2f",toplam/n);
}
