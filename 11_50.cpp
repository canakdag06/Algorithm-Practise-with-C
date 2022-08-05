#include<stdio.h>
#include<locale.h>
#include<float.h>	// bu kütüphane FLT_MIN komutu için

float ikinciEnBuyuk(float[],int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float dizi[6] = {3.4, 12.5, 1, 5.6, 7.8, 9.7};
	float c;
	
	c = ikinciEnBuyuk( dizi, 6 );
	printf("Dizinin ikinci en büyüðü = %f", c);
	return 0;
}

float ikinciEnBuyuk(float dizi[], int boyut)
{
	float max1 = FLT_MIN; // en küçük ondalýklý sayýyý atadýk.
	float max2 = max1;
	for(int i=0; i<boyut; i++)
    {
        if(dizi[i] > max1)
    	{
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i] > max2 && dizi[i] < max1)
            max2 = dizi[i];
    }
    
    return max2;
}
