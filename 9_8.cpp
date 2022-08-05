#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void dikdortgenCiz();

int main()
{
	dikdortgenCiz();
return 0;
}

void dikdortgenCiz()
{
	srand(time(NULL));
	int satir = 1 + rand()%5;
	int sutun = 1 + rand()%10;
	
	for(int i=1;i<=satir;i++)
	{
		for(int j=1;j<=sutun;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
