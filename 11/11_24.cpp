#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	int sicil[boyut], satis[boyut];
	
	printf("Personel say�s�n� giriniz : ");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>50)
	{
		printf("Yanl��!! En fazla 50 girebilirsiniz\n");
		printf("Personel say�s�n� giriniz : ");
		scanf("%d", &boyut);
	}
	
	int max=0;
	for(int i=0; i<boyut; i++)
	{
		printf("%d. personelin sicili ve sat�� miktar� : ", i+1);
		scanf("%d %d", &sicil[i],&satis[i]);
		if(max < satis[i])
			max = satis[i];
	}
	printf("---------------------------------------\n");
	printf("Personel ne kadar sat�� yapacak\n");
	printf("Sicil   : ");
	for(int i=0; i<boyut; i++)
		printf("%d  ", sicil[i]);
	printf("\n�htiya� : ");
	for(int i=0; i<boyut; i++)
	{
		satis[i] = max - satis[i];
		printf("%d  ", satis[i]);
	}
	return 0;
}
