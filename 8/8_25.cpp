#include<stdio.h>
#include<locale.h>

int main()
{
	float konuk,talip,toplam=0,n=0,yasli,genc,denk;
	setlocale(LC_ALL,"Turkish");
	printf("Konu�un ya��n� giriniz : ");
	scanf("%f",&konuk);
	while(1)
	{
		printf("Talibin ya��n� giriniz : ");
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
	printf("\nKonuktan daha ya�l� taliplerin say�s� = %.f",yasli);
	printf("\nKonuktan daha gen� taliplerin say�s� = %.f",genc);	
	printf("\nKonu�un ya��na denk taliplerin say�s� = %.f",denk);
	printf("\nTaliplerin ya� ortalamas� = %.2f",toplam/n);
}
