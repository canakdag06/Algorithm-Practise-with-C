#include<stdio.h>
#include<locale.h>

void birKisaBirUzun(float[]);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float dizi[12];
	
	printf("Oyuncular�n boylar�n� giriniz:\n");
	for(int i=0; i<12; i++)
		scanf("%f",&dizi[i]);
	
	birKisaBirUzun(dizi);
	return 0;
}

void birKisaBirUzun(float dizi[])
{
	float gecici;		// �ncelikle diziyi k���kten b�y��e s�ralad�k.
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
	printf("Bir k�sa ve bir uzun olarak s�ralanm�� hali\n");
	float temp[12];
	int index = 0;
	//En k���k eleman ba�ta, en b�y�k eleman sonda oldu�undan
	//bir ba�tan, bir sondan alabiliriz.
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
