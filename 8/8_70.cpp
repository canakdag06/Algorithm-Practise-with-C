#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int temp,sayi,x,onlar,birler,zincir=1,toplam;
	
	printf("Çýkarma zinciri 6 olan iki basamaklý sayýlar\n");
	
	for(int i=10;i<100;i++)
	{
		zincir = 1;
		temp = i;
		onlar = temp/10;
		birler = temp%10;
		sayi = birler*10 + onlar;

		do
		{
			if(temp>sayi)
			{
				x = temp;
				temp = sayi;
				sayi = x;
			}
			sayi = sayi - temp;
			onlar = sayi/10; 
			birler = sayi%10;
			temp = birler*10 + onlar;
			zincir++;
			if(zincir==6)
			{
				printf("%d ",i);
				toplam++;
			}
		}
		while(sayi>9);
	}
	printf("\nToplam %d adet",toplam);
return 0;
}
