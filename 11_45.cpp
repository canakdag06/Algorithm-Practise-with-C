#include<stdio.h>
#include<locale.h>

void sekizlikYap(int, int[]);

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	int dizi[10] = {0,0,0,0,0,0,0,0,0,0};
	printf("Onluk sayýyý giriniz = ");
	scanf("%d",&sayi);
	printf("------------------------\n");
	sekizlikYap(sayi, dizi);
	
	for(int i=0; i<10; i++)
		printf("%d ",dizi[i]);
	return 0;
}

void sekizlikYap(int sayi, int dizi[10])
{
	int i=9;
	while(sayi>=8)
	{
		dizi[i] = sayi%8;
		i--;
		sayi = sayi/8;
	}
	dizi[i] = sayi;
}
