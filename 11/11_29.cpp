#include<stdio.h>
#include<locale.h>

void tekCiftDuzenle(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int num[15];
	printf("Dizinin elemanlarýný giriniz (15 adet) = ");
	for(int i=0; i<15; i++)
	{
		scanf("%d",&num[i]);
	}
	printf("----------------------------------------\n");
	tekCiftDuzenle(num, 15);
	return 0;
}

void tekCiftDuzenle(int dizi[], int boyut)
{
	int tek[boyut],cift[boyut];
	int tek_index = 0, cift_index = 0, index = 0;
	
	for(int i=0; i<boyut; i++)
	{
		if(dizi[i]%2==1)
		{
			tek[tek_index] = dizi[i];
			tek_index++;
		}
		else
		{
			cift[cift_index] = dizi[i];
			cift_index++;
		}
	}
	
	printf("Dizinin düzenlenmiþ hali :\n");
	int i=0;
		while(tek_index != 0)
		{
        	dizi[index] = tek[i];
        	printf("%d ",dizi[index]);
        	i++;
        	index++;
        	tek_index--;
    	}
    	i = 0;
    	while(cift_index != 0)
    	{
        	dizi[index] = cift[i];
        	printf("%d ",dizi[index]);
        	i++;
        	index++;
        	cift_index--;
    	}
}
