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
	printf("Ýþlem iþareti giriniz (+ veya -) : ");
	scanf("%s",&isaret);
	printf("Basamak sayýsý giriniz (En fazla 3) : ");
	scanf("%d",&basamak);
	while(isaret != '+' && isaret != '-')
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
return 0;
}

void islemYaz(char isaret, int basamak)
{
	if(isaret == '+')
	{
		if(basamak == 3)
		{
			printf("   %d\n   %d\n+_____\n   ?",100+rand()%900,100+rand()%900);
		}
		else if(basamak == 2)
		{
			printf("   %d\n   %d\n+_____\n   ?",10+rand()%90,10+rand()%90);
		}
		else if(basamak == 1)
		{
			printf("   %d\n   %d\n+_____\n   ?",1+rand()%9,1+rand()%9);
		}
	}
	else if(isaret == '-')
	{
		int eksilen,cikan;
		if(basamak == 3)
		{
			eksilen = 100+rand()%900;
			cikan = 100+rand()%900;
			while(cikan>eksilen)
			{
				cikan = 100+rand()%900;
			}
		}
		else if(basamak == 2)
		{
			eksilen = 10+rand()%90;
			cikan = 10+rand()%90;
			while(cikan>eksilen)
			{
				cikan = 10+rand()%90;
			}
		}
		else if(basamak == 1)
		{
			eksilen = 1+rand()%9;
			cikan = 1+rand()%9;
			while(cikan>eksilen)
			{
				cikan = 1+rand()%9;
			}
		}
		printf("   %d\n   %d\n-_____\n   ?",eksilen,cikan);
	}
}
