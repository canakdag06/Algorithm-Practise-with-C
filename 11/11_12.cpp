#include<stdio.h>
#include<locale.h>

int ilkTekrarlayan(int[], int boyut);		// Soru yeterince iyi açýklanmamýþ.
										// Dizinin 3 12 7 1 1 7 12 3 olduðunu düþünelim.
										// Bu durumda cevabýmýz ne olur? 3 mü 1 mi ?
										// Bence 1 olmasý gerekir ama internette bu soruyu araþtýrdýðýmda
										// herkesin, cevabý 3 olarak bulan programý yazdýðýný gördüm.
										// Diðer algoritmaya da kafa yordum ama baþka yapýlar kullanmak
										// gerektiði için devam etmedim. 
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int dizi[7] = {3, 12, 1, 12, 7, 7, 12}, c;
	
	c = ilkTekrarlayan(dizi, 7);
	printf("Dizinin ilk tekrarlayaný = %d", c);
}

int ilkTekrarlayan(int dizi[], int boyut)
{
	for(int i=0; i<boyut; i++)
	{
		for(int j= i+1; j<boyut ; j++)
		{
			if(dizi[i] == dizi[j])
			{
				return dizi[i];
			}
		}
	}
	
	return -1;
}
