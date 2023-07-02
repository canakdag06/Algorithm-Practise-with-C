#include<stdio.h>
#include<locale.h>

void eleme(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[10];
	
	printf("Dizinin elemanlarýný giriniz:\n");
	for(int i=0; i<10; i++)
		scanf("%d", &dizi[i]);
	printf("------------------------------------------\n");
	eleme(dizi, 10);
	printf("Dizinin son hali = ");
	for(int i=0; i<10; i++)
		printf("%d ",dizi[i]);
	return 0;
}

void eleme(int dizi[], int boyut)
{
	int check[10] = {0,0,0,0,0,0,0,0,0,0};
	for(int i=0; i<boyut; i++)
	{
		for(int j=0; j<boyut; j++)
		{
			if (dizi[i] == dizi[j])
				check[i]++;
		}
	}
	for(int i=0; i<boyut; i++)
	{
		if(check[i] != 1)
			dizi[i] = -1;
	}
}

