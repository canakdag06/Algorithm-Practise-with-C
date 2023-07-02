#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi;
	setlocale(LC_ALL,"Turkish");
	printf("Sekizlik tabanda sayý giriniz: ");
	scanf("%o",&sayi);
	printf("------------------------------");
	if(sayi>=0 && sayi<=77777777)
		printf("\nOnluk tabandaki karþýlýðý : %d",sayi);
	else
		printf("\nUygun bir sayý girmediniz.");

}
