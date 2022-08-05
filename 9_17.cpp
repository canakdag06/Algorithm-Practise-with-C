#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
void zamanUret(char);

int main()
{
	char harf;
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	printf("Zaman dilimi girin.\n");
	printf("Sabah için 's', öðle için 'o', akþam için 'a' : ");
	scanf("%s",&harf);
	zamanUret(harf);
return 0;
}

void zamanUret(char harf)
{
	if(harf == 's')
	{
		printf("%d:%d:%d",(8+rand()%3),rand()%60,rand()%60);
	}
	else if(harf == 'o')
	{
		printf("%d:%d:%d",(11+rand()%5),rand()%60,rand()%60);
	}
	else if(harf == 'a')
	{
		printf("%d:%d:%d",(16+rand()%7),rand()%60,rand()%60);
	}
}
