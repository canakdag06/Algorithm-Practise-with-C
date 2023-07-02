#include<stdio.h>
#include<locale.h>

int main()
{
	int kod;
	float toplam;
	setlocale(LC_ALL,"Turkish");
	printf("Kalemlerin ürün kodlarýný girin (Durdurmak için 111): ");
	do
	{
		scanf("%d",&kod);
		if(kod == 11)
		toplam = toplam+1.5;
		else if(kod == 12)
		toplam = toplam+2.5;
		else if(kod == 13)
		toplam = toplam+3.0;
		else if(kod == 14)
		toplam = toplam+4.5;
		else if(kod == 15)
		toplam = toplam+5.0;
	}
	while(kod != 111);
	
	printf("Gün Sonu Satýþ Kazancý: %.2f TL dir.",toplam);
}
