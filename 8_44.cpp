#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi;
	setlocale(LC_ALL,"Turkish");
	printf("Sekizlik tabanda say� giriniz: ");
	scanf("%o",&sayi);
	printf("------------------------------");
	if(sayi>=0 && sayi<=77777777)
		printf("\nOnluk tabandaki kar��l��� : %d",sayi);
	else
		printf("\nUygun bir say� girmediniz.");

}
