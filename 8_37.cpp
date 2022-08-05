#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	int yuzler,onlar,birler,n=0;
	printf("Aranýlan sayýlar : ");
	
	for(int i=100;i<=999;i++)
	{
		yuzler= i/100;
		onlar= (i%100)/10;
		birler= i%10;
		
			if(i == (yuzler+onlar+birler)*yuzler*onlar*birler) 
			{
				printf("%d ",i);
				n++;
			}
	}
	printf("\nBu özelliðe sahip %d adet üç basamaklý sayý vardýr.",n);
}
