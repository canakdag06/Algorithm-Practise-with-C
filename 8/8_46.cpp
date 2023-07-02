#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	float toplam=0;
	int a=0,b=0,c=0,f=0;
	
	while(1)
	{
		char giris;
		printf("Harf notunu giriniz (Çýkýþ için H ya da h giriniz):");
		giris = getche(); printf("\n");
			if(giris=='A' || giris=='a')
			{
				a++;
				toplam= toplam+4.0;
			}
			else if(giris=='B' || giris=='b')
			{
				b++;
				toplam= toplam+3.0;
			}
			else if(giris=='C' || giris=='c')
			{
				c++;
				toplam= toplam+2.0;
			}
			else if(giris=='F' || giris=='f')
			{
				f++;
				toplam= toplam+0;
			}
			else if(giris=='H' || giris=='h')
			break;
			else
			{
			printf("Geçersiz not!\n");
			}
	}
	printf("------------------------------------------------");
	printf("\nGirilen A larýn sayýsý:	%d",a);
	printf("\nGirilen B lerin sayýsý:	%d",b);
	printf("\nGirilen C lerin sayýsý:	%d",c);
	printf("\nGirilen F lerin sayýsý:	%d",f);
	printf("\nToplam harf sayýsý:	%d",a+b+c+f);
	printf("\nOrtalama:		%.2f",toplam/(a+b+c+f));
return 0;
}
