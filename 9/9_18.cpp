#include<stdlib.h>
#include<locale.h>
#include<time.h>
void tarihUret(int,char);

int main()
{
	char mevsim;
	int adet;
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	printf("Mevsim girin.\n");
	printf("Sonbahar için 's', ilkbahar için 'i' : ");
	scanf("%s",&mevsim);
	printf("Tarih sayýsý girin : ");
	scanf("%d",&adet);
	tarihUret(adet,mevsim);
	printf("----------------------------------------\n");
	tarihUret(5,'s');
return 0;
}

void tarihUret(int adet, char mevsim)
{
	if(mevsim == 's')
	{
		for(int i=0;i<adet;i++)
		{
			printf("%d/%d/%d\n",(1+rand()%30),(9+rand()%3),(2021+rand()%51));
		}
	}
	else if(mevsim == 'i')
	{
		for(int i=0;i<adet;i++)
		{
			printf("%d/%d/%d\n",(1+rand()%30),(3+rand()%3),(2021+rand()%51));
		}
	}
}
