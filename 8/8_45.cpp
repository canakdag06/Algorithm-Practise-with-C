#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("15000'den b�y�k ve 3'�n kuvveti olan en k���k tamsay� ");
	int sayi = 3;
	int us = 1;
	while(1)
	{
		sayi = sayi*3;
		us++; 
			if(sayi>15000)
			{
				printf("%d\nBu say� 3'�n %d. kuvvetidir.",sayi,us);
				return 0;
			}
	}
}
