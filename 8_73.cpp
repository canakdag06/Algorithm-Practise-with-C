#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi,adet=1;
	printf("Say�y� giriniz : ");
	scanf("%d",&sayi);
	
	while(sayi<=0)
	{
		printf("Yanl��!! L�tfen pozitif bir say� giriniz: ");
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
	
	printf("\nSeri %d adet say�dan olu�ur",adet);
return 0;
}
