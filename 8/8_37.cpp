#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	int yuzler,onlar,birler,n=0;
	printf("Aran�lan say�lar : ");
	
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
	printf("\nBu �zelli�e sahip %d adet �� basamakl� say� vard�r.",n);
}
