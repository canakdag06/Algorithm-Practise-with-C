#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi1_ilk,sayi2_ilk,zincir=0;
	do
	{
		printf("OKEK bulunacak say�lar� giriniz: ");
		scanf("%d %d",&sayi1,&sayi2);
		sayi1_ilk = sayi1;
		sayi2_ilk = sayi2;
			if(sayi1<0 || sayi2<0)
			{
				printf("Say�lar pozitif olmal�.\n");
				continue;
			}
	}
	while(sayi1<0 || sayi2<0);
	
	while(sayi1 != sayi2)
	{
		if(sayi1 > sayi2)
		{
			sayi1 = sayi1 - sayi2;
		}
		else
		{
			sayi2 = sayi2 - sayi1;
		}
	zincir++;
	}
	printf("--------------------------------------------\n");
	printf("OKEK(%d,%d) = %d",sayi1_ilk,sayi2_ilk,(sayi1_ilk*sayi2_ilk)/sayi1);
return 0;
}
