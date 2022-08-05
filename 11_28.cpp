#include<stdio.h>
#include<locale.h>

void tekCiftDuzenle(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	int num[boyut];
	printf("��renci say�s�n� giriniz = ");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>100)
	{
		printf("Yanl��!! En fazla 100 girebilirsiniz\n");
		printf("��renci say�s�n� giriniz : ");
		scanf("%d", &boyut);
	}
	
	printf("��renci numaralar�n� giriniz(%d adet) : ", boyut);
	for(int i=0; i<boyut; i++)
	{
		scanf("%d",&num[i]);
	}
	printf("----------------------------------------\n");
	tekCiftDuzenle(num, boyut);
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
	
	printf("Numaralar�n bir tek, bir �ift s�ralanm�� hali :\n");
	for(int i=0; index<boyut; i++)
	{
		if(tek_index != 0)
		{
        	dizi[index] = tek[i];
        	printf("%d ",dizi[index]);
        	index++;
        	tek_index--;
    	}
    	if(cift_index != 0)
    	{
        	dizi[index] = cift[i];
        	printf("%d ",dizi[index]);
        	index++;
        	cift_index--;
    	}
    }
}
