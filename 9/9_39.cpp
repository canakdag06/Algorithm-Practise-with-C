#include<stdlib.h>
#include<time.h>
#include<locale.h>
void zarat(int,char);

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	printf("\nÝlk çaðrýlýyor.\n");
	zarat(100,'B');
	printf("\nÝkinci çaðrýlýyor.\n");
	zarat(500, 'A');
return 0;
}

void zarat(int atis,char yuz)
{
	int sayac=0;
	for(int i=0;i<atis;i++)
	{
		int gelen = 1+rand()%6;
		if(yuz == 'B' && gelen == 1)
		{
			sayac++;
		}
		else if(yuz == 'K' && gelen == 2)
		{
			sayac++;
		}
		else if(yuz == 'U' && gelen == 3)
		{
			sayac++;
		}
		else if(yuz == 'D' && gelen == 4)
		{
			sayac++;
		}
		else if(yuz == 'E' && gelen == 5)
		{
			sayac++;
		}
		else if(yuz == 'A' && gelen == 6)
		{
			sayac++;
		}
	}
	printf("Seçtiðiniz sayý %d kez geldi",sayac);
}
