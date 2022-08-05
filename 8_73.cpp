#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi,adet=1;
	printf("Sayýyý giriniz : ");
	scanf("%d",&sayi);
	
	while(sayi<=0)
	{
		printf("Yanlýþ!! Lütfen pozitif bir sayý giriniz: ");
		scanf("%d",&sayi);
	}
	
	printf("------------\n");
	printf("Collatz serisi : %d ",sayi);
	do
	{
		if(sayi%2 == 0)
			sayi = sayi/2;
		else
			sayi = sayi*3+1;
	printf("%d ",sayi);
	adet++;
	}
	while(sayi!=1);
	
	printf("\nSeri %d adet sayýdan oluþur",adet);
return 0;
}
