#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("15000'den büyük ve 3'ün kuvveti olan en küçük tamsayý ");
	int sayi = 3;
	int us = 1;
	while(1)
	{
		sayi = sayi*3;
		us++; 
			if(sayi>15000)
			{
				printf("%d\nBu sayý 3'ün %d. kuvvetidir.",sayi,us);
				return 0;
			}
	}
}
