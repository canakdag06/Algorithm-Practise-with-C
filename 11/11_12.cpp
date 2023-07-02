#include<stdio.h>
#include<locale.h>

int ilkTekrarlayan(int[], int boyut);		// Soru yeterince iyi a��klanmam��.
										// Dizinin 3 12 7 1 1 7 12 3 oldu�unu d���nelim.
										// Bu durumda cevab�m�z ne olur? 3 m� 1 mi ?
										// Bence 1 olmas� gerekir ama internette bu soruyu ara�t�rd���mda
										// herkesin, cevab� 3 olarak bulan program� yazd���n� g�rd�m.
										// Di�er algoritmaya da kafa yordum ama ba�ka yap�lar kullanmak
										// gerekti�i i�in devam etmedim. 
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int dizi[7] = {3, 12, 1, 12, 7, 7, 12}, c;
	
	c = ilkTekrarlayan(dizi, 7);
	printf("Dizinin ilk tekrarlayan� = %d", c);
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
