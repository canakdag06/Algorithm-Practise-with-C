#include<stdio.h>
#include<locale.h>

int main()
{
	int adet, i, negatif=0, sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Ka� adet say� gireceksiniz: ");
	scanf("%d",&adet);
	printf("Say�lar (%d tane): ",adet);
	for(i=1;i<=adet;i++)
	{
		scanf("%d",&sayi);
		if(sayi<0)
			negatif++;
	}
	printf("\nGirilen %d say�n�n %d tanesi negatif, %d tanesi pozitiftir.",adet,negatif,adet-negatif);
return 0;
}
