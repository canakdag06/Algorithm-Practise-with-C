#include<stdio.h>
#include<locale.h>

void birKisaBirUzun(float[]);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float dizi[12];
	
	printf("Oyuncularýn boylarýný giriniz:\n");
	for(int i=0; i<12; i++)
		scanf("%f",&dizi[i]);
	
	birKisaBirUzun(dizi);
	return 0;
}

void birKisaBirUzun(float dizi[])
{
	float gecici;		// Öncelikle diziyi küçükten büyüðe sýraladýk.
    for(int i=0; i<11; i++)
	{
    	for(int j=0; j<11-i; j++)
		{
            if (dizi[j] > dizi[j+1])
			{
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
		}
	}
	printf("Bir kýsa ve bir uzun olarak sýralanmýþ hali\n");
	float temp[12];
	int index = 0;
	//En küçük eleman baþta, en büyük eleman sonda olduðundan
	//bir baþtan, bir sondan alabiliriz.
	for (int i=0, j=11; i<=6 || j>6; i++, j--)
	{
        temp[index] = dizi[i];
        index++;
        temp[index] = dizi[j];
        index++;
    }
    
    for (int i=0; i<12; i++)
    {
        dizi[i] = temp[i];
        printf("%.2f ",dizi[i]);
	}
}
