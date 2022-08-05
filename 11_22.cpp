#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

void sirala(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int boyut; int dizi[50];
	for(int i=0; i<50; i++)
		dizi[i] = rand()%1000+1;
	
	sirala(dizi, 50);
	return 0;
}

void sirala(int dizi[], int boyut)
{
	//bubble sort
	int gecici;
    for(int i=0; i<(boyut-1); i++)
	{
    	for(int j=0; j<boyut-i-1; j++)
		{
            if (dizi[j] > dizi[j+1])
			{
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
		}
	}
	
	for(int i=0; i<boyut; i++)
		printf("\n%d",dizi[i]);
}
