#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi, toplam=0, n=0, i;
	printf("Say�lar� giriniz (10 adet): ");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&sayi);
		if(sayi%2==1)
			{
			toplam = toplam + sayi;
			n++;
			}
	}
	printf("\nGirilen %d adet tek say�n�n aritmetik ortalamas� = %.2f",n,(float)toplam/n);
return 0;
}
