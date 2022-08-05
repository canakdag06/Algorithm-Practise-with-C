#include<stdio.h>
#include<locale.h>
int mukemmel(int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("Ýki sayý giriniz: ");
	scanf("%d",&sayi);
	printf("%d",mukemmel(sayi));
	
return 0;
}

int mukemmel(int sayi)
{
	int flag = 0;
	int toplam=0;
		for(int i=1;i<sayi;i++)
		{
			if(sayi%i==0)
			toplam = toplam + i;
		}
			if(toplam == sayi)
			flag = 1;
	return flag;
}
