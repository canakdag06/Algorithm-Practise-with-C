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
		printf("Harf notunu giriniz (��k�� i�in H ya da h giriniz):");
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
			printf("Ge�ersiz not!\n");
			}
	}
	printf("------------------------------------------------");
	printf("\nGirilen A lar�n say�s�:	%d",a);
	printf("\nGirilen B lerin say�s�:	%d",b);
	printf("\nGirilen C lerin say�s�:	%d",c);
	printf("\nGirilen F lerin say�s�:	%d",f);
	printf("\nToplam harf say�s�:	%d",a+b+c+f);
	printf("\nOrtalama:		%.2f",toplam/(a+b+c+f));
return 0;
}
