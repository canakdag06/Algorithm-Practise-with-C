#include<stdio.h>
#include<locale.h>
#include<math.h>
int daireselMi(int);

int main()		// Bu sorunun algoritmas�n� internetten ald�m. kaynak: donan�mhaber
{
	setlocale(LC_ALL, "Turkish");
	printf("1. sat�r= %d \n",daireselMi(102564));
	printf("2. sat�r= %d \n",daireselMi(123456));
return 0;
}

int daireselMi(int sayi)
{
	int basamak = 0;
	int birler = sayi%10;	// Say�n�n birler basama��n� bul.
	int temp = sayi;	// Say�n�n de�i�memesi i�in i�lemleri ge�ici bir de�i�ken �zerinde yap.
	while(temp!=0)
	{
		temp = temp/10;	// Say�n�n basamak say�s�n� bul.
		basamak++;
	}
	temp = sayi;
	temp = temp/10; // Say�dan birler basama��n� ��kar.(10'a b�ld���m�zde say� float olmad��� i�in birler basama�� yok olacak)
	temp = temp + birler*pow(10,basamak-1); // Say�ya birler basama�� �arp� 10 �zeri say�n�n basamak say�s�n� ekle.
	if(temp == sayi*birler) // E�er say� �arp� birler basama�� son buldu�umuzla e�itse 1, de�ilse 0 d�nd�r.
		return 1;
	else
		return 0;
}
