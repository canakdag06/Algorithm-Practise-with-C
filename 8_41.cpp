#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi;
	setlocale(LC_ALL,"Turkish");
	printf("Say�y� giriniz : ");
	scanf("%d",&sayi);
	printf("--------------------------------");
		int toplam=0;
			for(int i=1;i<sayi;i++)
			{
				if(sayi%i==0)
				toplam = toplam + i;
			}
				if(toplam>sayi)
				printf("\nGirilen say� bol say�d�r");
				else
				printf("\nGirilen say� bol say� de�ildir");
return 0;
}
