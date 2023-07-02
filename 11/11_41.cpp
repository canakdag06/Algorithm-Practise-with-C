#include<stdio.h>
#include<locale.h>

float varOlmaOrani(char[], int, char[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	char kelime[6]={'i','s','t','i','f','a'};
	char inceUnlu[4]={'e','i','ö','ü'};
	float c;
	
	c = varOlmaOrani(kelime, 6, inceUnlu, 4);
	printf("Var olma oraný = %.2f", c);
	return 0;
}

float varOlmaOrani(char dizi1[], int boyut1, char dizi2[], int boyut2)
{
	int sayac = 0;
	float oran;
	for(int i=0; i<boyut2; i++)
	{
		for(int j=0; j<boyut1; j++)
		{
			if(dizi2[i] == dizi1[j])
			{
				sayac++;
				break;
			}
		}
	}
	oran = (float)sayac/(float)boyut2;
}
