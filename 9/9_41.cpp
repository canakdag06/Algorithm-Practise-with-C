#include<stdlib.h>
#include<time.h>
#include<locale.h>
void paraat(int,char);

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	printf("\n�lk �a�r�l�yor.\n");
	paraat(100,'T');
	printf("\n�kinci �a�r�l�yor.\n");
	paraat(500, 'Y');
return 0;
}

void paraat(int atis,char yuz)
{
	int sayac=0;
	for(int i=0;i<atis;i++)
	{
		int gelen = rand()%2;		// 0 yaz�, 1 tura olsun
		if(yuz == 'T' && gelen == 1)
		{
			sayac++;
		}
		else if(yuz == 'Y' && gelen == 0)
		{
			sayac++;
		}
	}
	printf("Se�ti�iniz y�z %d kez geldi",sayac);
}
