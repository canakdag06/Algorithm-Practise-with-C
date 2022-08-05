#include<stdlib.h>
#include<locale.h>
#include<time.h>
void islemYaz(char,int);

int main()
{
	int basamak;
	char isaret;
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	printf("Ýþlem iþareti giriniz (/ veya *) : ");
	scanf("%s",&isaret);
	printf("Basamak sayýsý giriniz (En fazla 3) : ");
	scanf("%d",&basamak);
	while(isaret != '/' && isaret != '*')
	{
		printf("Yanlýþ iþaret girdiniz : ");
		scanf("%s",&isaret);
	}
	while(basamak<1 || basamak>3)
	{
		printf("Yanlýþ basamak deðeri girdiniz : ");
		scanf("%d",&basamak);
	}
	islemYaz(isaret,basamak);
	printf("\n------------------------------\n");
	islemYaz('/',3);
	printf("\n------------------------------\n");
	islemYaz('*',2);
return 0;
}

void islemYaz(char isaret, int basamak)
{
	if(isaret == '/')
	{
		int bolunen, bolen;
		if(basamak == 3)
		{
			bolunen = 100+rand()%900;
			bolen = 100+rand()%900;
				while(bolunen%bolen != 0)
				{
					bolen = 100+rand()%900;
				}
		}
		else if(basamak == 2)
		{
			bolunen = 10+rand()%90;
			bolen = 10+rand()%90;
				while(bolunen%bolen != 0)
				{
					bolen = 10+rand()%90;
				}
		}
		else if(basamak == 1)
		{
			bolunen = 1+rand()%9;
			bolen = 1+rand()%9;
				while(bolunen%bolen != 0)
				{
					bolen = 1+rand()%9;
				}
		}
		printf("%d|%d",bolunen,bolen);
		printf("\n   ----\n___| ?");
	}
	else if(isaret == '*')
	{
		if(basamak == 3)
			printf("  %d\n  %d\n*____\n  ?",100+rand()%900,100+rand()%900);
		else if(basamak == 2)
			printf("  %d\n  %d\n*____\n  ?",10+rand()%90,10+rand()%90);
		else if(basamak == 1)
			printf("  %d\n  %d\n*____\n  ?",1+rand()%9,1+rand()%9);
	}
}
