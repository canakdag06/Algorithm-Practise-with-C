#include<stdio.h>
#include<locale.h>

int main()
{
	int sayi, tek=0, iki=0, n=0;
	setlocale(LC_ALL, "Turkish");
	
	do
	{
		printf("Sayý: ");
		scanf("%d",&sayi);
			if(sayi<10)
			tek++;
			else if(sayi>9 && sayi<100)
			iki++;
		n++;
	}
	while(sayi<100);
	printf("\nGirilen %d sayýnýn %d tanesi tek basamaklý, %d tanesi iki basamaklýdýr.",n,tek,iki);
return 0;
}
