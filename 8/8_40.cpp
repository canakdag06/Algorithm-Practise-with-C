#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi;
	setlocale(LC_ALL,"Turkish");
	printf("Sayýyý giriniz : ");
	scanf("%d",&sayi);
	printf("--------------------------------");
	
		int toplam=0;
			for(int i=1;i<sayi;i++)
			{
				if(sayi%i==0)
				toplam = toplam + i;
			}
				if(toplam<sayi)
				printf("\nGirilen sayý noksan sayýdýr");
				else
				printf("\nGirilen sayý noksan sayý deðildir");
return 0;
}
