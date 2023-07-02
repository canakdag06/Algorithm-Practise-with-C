#include<stdio.h>
int zincir(int);

int main()		// 8_64 ile aynı.
{
	printf(" %d \n", zincir(19) );
	printf(" %d \n", zincir(32) );
return 0;
}

int zincir(int temp)
{
	int sayi,x,onlar,birler,zincir=1;
	
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
	
return zincir;
}
