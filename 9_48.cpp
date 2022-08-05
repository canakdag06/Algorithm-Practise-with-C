#include<stdio.h>
#include<locale.h>
int ciftRakamSay(int);

int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Sayý giriniz: ");
	scanf("%d",&sayi);
	ciftRakamSay(sayi);
return 0;
}

int ciftRakamSay(int sayi)
{
	int basamak,sayac=0;
	
	while(sayi!=0)
	{
		basamak = sayi%10;
		sayi = sayi/10;
			if(basamak%2 == 0)
				sayac++;
	}
	printf("%d adet çift sayý vardýr.",sayac);
}
