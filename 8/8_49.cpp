#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi3,artan=0,azalan=0,karisik=0;
	while(1)
	{
		printf("�� say� giriniz:");
		scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	
		if(sayi1<sayi2 && sayi2<sayi3)
		{
			printf("Girilenler artan s�rada dizilmi�\n");
			artan++;
		}
		else if(sayi1>sayi2 && sayi2>sayi3)
		{
			printf("Girilenler azalan s�rada dizilmi�\n");
			azalan++;
		}
		else if(sayi1==sayi2 && sayi2==sayi3)
		{
			break;
		}
		else
		{
			printf("Girilenler kar���k s�rada dizilmi�\n");
			karisik++;
		}
	}
	printf("Program Bitti\n");
	printf("Girilen dizilerden %d tanesi artan, %d tanesi azalan, %d tanesi kar���k s�radad�r",artan,azalan,karisik);
return 0;
}
