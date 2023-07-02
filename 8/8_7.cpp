#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi_1, sayi_2, i, n=0;
	setlocale(LC_ALL,"Turkish");
	printf("Birinciyi giriniz : ");
	scanf("%d",&sayi_1);
	printf("Ýkinciyi giriniz : ");
	scanf("%d",&sayi_2);
	printf("-------------------\n");
	
	if(sayi_1<sayi_2)
	{
		for(i=sayi_1;i<=sayi_2;i++)
		{
			if(i%4==0 && i%7==0)
			{
				printf("%d ",i);
				n++;
			}
		}
	}
	else if(sayi_2<sayi_1)
	{
		for(i=sayi_2;i<=sayi_1;i++)
		{
			if(i%4==0 && i%7==0)
			{
				printf("%d ",i);
				n++;
			}
		}
	}
	printf("\nToplam %d adet",n);
return 0;
}
