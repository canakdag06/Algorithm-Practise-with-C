#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayilar[6];
	
	printf("Say�lar� giriniz: ");
	
	for(int i=0; i<6; i++)
	{
		scanf("%d",&sayilar[i]);
	}
	
	printf("SAYILAR VE H�STOGRAMLARI\n");
	
	for(int i=0; i<6; i++)
	{
		printf("%d	", sayilar[i]);
		
		for(int j=0; j<sayilar[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
