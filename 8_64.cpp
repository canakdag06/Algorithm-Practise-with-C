#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int temp,sayi,x,onlar,birler,zincir=1;
	printf("Say�y� giriniz = ");
	scanf("%d",&temp);
	
	while(temp<10 || temp>99)
	{
		printf("Yanl��!!! L�tfen 2 basamakl� giriniz = ");
		scanf("%d",&temp);
	}
	
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
	}
	while(sayi>9);
	
	printf("��karma zinciri uzunlu�u = %d",zincir);
	
return 0;
}
