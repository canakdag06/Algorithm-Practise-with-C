#include<stdio.h>
#include<locale.h>

int main()
{
	int adet, i, negatif=0, sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Kaç adet sayý gireceksiniz: ");
	scanf("%d",&adet);
	printf("Sayýlar (%d tane): ",adet);
	for(i=1;i<=adet;i++)
	{
		scanf("%d",&sayi);
		if(sayi<0)
			negatif++;
	}
	printf("\nGirilen %d sayýnýn %d tanesi negatif, %d tanesi pozitiftir.",adet,negatif,adet-negatif);
return 0;
}
