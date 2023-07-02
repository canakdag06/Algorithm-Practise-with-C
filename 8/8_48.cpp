#include<stdio.h>
#include<locale.h>

int main()				// DÜZGÜN ÇALIÞMIYOR
{
	setlocale(LC_ALL,"Turkish");
	printf("Nabýz deðerlendirme programýna hoþ geldiniz.\n");
	printf("Sonlandýrmak için kategoriye b:bitir\nveya nabýz deðerini 0 giriniz.\n");
	printf("---------------------------------------------\n");
	char yas='c';
	int nabiz=999, cocuk_low=999, sayac=0;
	
	while(yas!='b' || nabiz!=0)
	{
		printf("Yaþ grubu (y: yetiþkin, c:çocuk): ");
		scanf("%c",&yas);
		if(yas!='y' && yas!='c' && yas!='b')
		{
			continue;
		}
		printf("Nabýz deðeri: ");
		scanf("%d",&nabiz);
		if(nabiz<0)
		{
			printf("Negatif nabýz deðeri girdiniz.\n");
			continue;
		}
		
		if(yas!='y')
			{
				if(yas!='c')
				{
				printf("Yanlýþ kategori veya nabýz deðeri!\n");
				continue;
				}
			}
		
		
			if(yas=='y' && nabiz>0)
			{
				if(nabiz<60)
				{
					printf("Nabýz düþük (Bradikardi)\n"); continue;
				}
				else if(nabiz>=60 && nabiz<=100)
				{
					printf("Nabýz normal.\n"); continue;
				}
				else if(nabiz>100)
				{
					printf("Nabýz yüksek (Taþikardi)\n");
					sayac++; continue;
				}
			}
			else if(yas=='c' && nabiz>0)
			{
				if(nabiz<cocuk_low)
				{
					cocuk_low = nabiz; continue;	
				}
				
				if(nabiz<80)
				{
					printf("Nabýz düþük (Bradikardi)\n"); continue;
				}
				else if(nabiz>=80 && nabiz<=100)
				{
					printf("Nabýz normal.\n"); continue;
				}
				else if(nabiz>100)
				{
					printf("Nabýz yüksek (Taþikardi)\n"); continue;
				}
			}
	}
	
	
		printf("------------------------------------------\n");
		printf("Program sona erdi.\n");
		if(cocuk_low!=999)
		{
			printf("Çocuklarda en düþük nabýz deðeri: %d\n",cocuk_low);
		}
		printf("Yetiþkinlerde taþikardi sayýsý: %d",sayac);
return 0;
}
