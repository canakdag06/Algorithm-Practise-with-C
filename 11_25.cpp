#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	int plaka[boyut], destek[boyut];
	
	printf("Ýl sayýsýný giriniz : ");
	scanf("%d", &boyut);
	
	while(boyut<=0 || boyut>50)
	{
		printf("Yanlýþ!! En fazla 50 girebilirsiniz\n");
		printf("Ýl sayýsýný giriniz : ");
		scanf("%d", &boyut);
	}
	
	int min = destek[0];
	for(int i=0; i<boyut; i++)
	{
		printf("%d. ilin plakasý ve destek miktarý : ", i+1);
		scanf("%d %d", &plaka[i],&destek[i]);
		if(min > destek[i])
			min = destek[i];
	}
	printf("---------------------------------------\n");
	printf("En az destek alan ile göre, illerin fazlalarý\n");
	printf("Ýl   : ");
	for(int i=0; i<boyut; i++)
		printf("%d  ", plaka[i]);
	printf("\nFazla  : ");
	for(int i=0; i<boyut; i++)
	{
		destek[i] = destek[i] - min;
		printf("%d  ", destek[i]);
	}
	return 0;
}
