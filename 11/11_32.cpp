#include<stdio.h>
#include<math.h>
#include<locale.h>

int onlukYap(int[],int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[10];
		
	printf("Sekizlik say�n�n rakamlar�n� giriniz: ");
	for(int i=0; i<10; i++)
		scanf("%d",&dizi[i]);
	
	printf("---------------------------------------\n");
	printf("Onluk kar��l��� = %d", onlukYap(dizi,10));
	return 0;
}

int onlukYap(int dizi[], int boyut)
{
	int onluk = 0;
	for(int i=9; i>=0; i--)
		onluk += dizi[i]*pow(8,9-i);
	
	return onluk;
}
