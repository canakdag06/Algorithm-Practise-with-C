#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi,min,max,orta;
	printf("Sayýyý giriniz (en fazla 3 basamak)= ");
	scanf("%d",&sayi);
	printf("------------------------------------");
		
		if(sayi<100 || sayi>999)
		{
		printf("\nHATA! 3 basamakli bir sayi girmelisiniz.");
		return 0;
		}
	
	int yuzler = sayi/100;
	int onlar = (sayi%100)/10;
	int birler = sayi%10;
	
	if(yuzler>=onlar && yuzler>=birler) max=yuzler;
	else if(onlar>=birler && onlar>=birler) max=onlar;
	else max=birler;
	
	if(yuzler<=onlar && yuzler<=birler) min=yuzler;
	else if(onlar<=yuzler && onlar<=birler) min=onlar;
	else min=birler;
	
	if(yuzler>=onlar && yuzler<=birler) orta=yuzler;
	else if(yuzler>=birler && yuzler<=onlar) orta=yuzler;
	else if(onlar>=yuzler && onlar<=birler) orta=onlar;
	else if(onlar>=birler && onlar<=yuzler) orta=onlar;
	else orta=birler;
	
	if(min == 0)
	{
	min = orta;
	orta = 0;
	}
	if(orta==0 && min==0)
	{
	min = max;
	max = 0;
	}
	printf("\nBu sayýdan elde edilebilecek en küçük sayý = %d%d%d",min,orta,max);
return 0;
}
