#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	int n=0,yuzler,onlar,birler;
	setlocale(LC_ALL,"Turkish");
	printf("Aran�lan say�lar : ");
	for(int i=100;i<=999;i++)
	{
		yuzler= i/100;
		onlar= (i%100)/10;
		birler= i%10;
			if(i == pow(yuzler,3)+pow(onlar,3)+pow(birler,3))
			{
				printf("%d ",i);
				n++;
			}
	}
	printf("\nBu �zelli�e sahip %d adet �� basamakl� say� vard�r.",n);
}
