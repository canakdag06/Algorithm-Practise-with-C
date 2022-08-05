#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int kilo,hafif=0,orta=0,agir=0,toplam=0,sporcu=0;
	do
	{
		printf("Kilo giriniz(Ýþlemi tamamlamak için: 0): ");
		scanf("%d",&kilo);
		
		if(kilo<0)
		{
			printf("\nNegatif deðer giremezsiniz...");
			continue;
		}
		else if(kilo>0 && kilo<50)
		{
			hafif++;
			sporcu++;
			toplam += kilo;
		}
		else if(kilo>=50 && kilo<70)
		{
			orta++;
			sporcu++;
			toplam += kilo;
		}
		else if(kilo>=70)
		{
			agir++;
			sporcu++;
			toplam += kilo;
		}
	}
	while(kilo!=0);
	printf("------------------------------------\n");
	printf("Toplam %d adet sporcu girilmiþtir.\n",sporcu);
	printf("%d hafif, %d orta ve %d aðýr siklet vardýr.\n",hafif,orta,agir);
	printf("Genel ortalama %.2f dir.",(float)toplam/(float)sporcu);
return 0;
}
