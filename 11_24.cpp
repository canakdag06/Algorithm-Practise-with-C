#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	int sicil[boyut], satis[boyut];
	
	printf("Personel sayýsýný giriniz : ");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>50)
	{
		printf("Yanlýþ!! En fazla 50 girebilirsiniz\n");
		printf("Personel sayýsýný giriniz : ");
		scanf("%d", &boyut);
	}
	
	int max=0;
	for(int i=0; i<boyut; i++)
	{
		printf("%d. personelin sicili ve satýþ miktarý : ", i+1);
		scanf("%d %d", &sicil[i],&satis[i]);
		if(max < satis[i])
			max = satis[i];
	}
	printf("---------------------------------------\n");
	printf("Personel ne kadar satýþ yapacak\n");
	printf("Sicil   : ");
	for(int i=0; i<boyut; i++)
		printf("%d  ", sicil[i]);
	printf("\nÝhtiyaç : ");
	for(int i=0; i<boyut; i++)
	{
		satis[i] = max - satis[i];
		printf("%d  ", satis[i]);
	}
	return 0;
}
