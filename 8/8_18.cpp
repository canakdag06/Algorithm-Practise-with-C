#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi, i, j;
	setlocale(LC_ALL,"Turkish");
	printf("5 adet sayý giriniz= ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&sayi);
		for(j=1;j<=sayi;j++)
		printf("*");
	printf("\n");
	}
return 0;
}
