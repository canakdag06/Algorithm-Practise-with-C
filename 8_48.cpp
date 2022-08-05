#include<stdio.h>
#include<locale.h>

int main()				// D�ZG�N �ALI�MIYOR
{
	setlocale(LC_ALL,"Turkish");
	printf("Nab�z de�erlendirme program�na ho� geldiniz.\n");
	printf("Sonland�rmak i�in kategoriye b:bitir\nveya nab�z de�erini 0 giriniz.\n");
	printf("---------------------------------------------\n");
	char yas='c';
	int nabiz=999, cocuk_low=999, sayac=0;
	
	while(yas!='b' || nabiz!=0)
	{
		printf("Ya� grubu (y: yeti�kin, c:�ocuk): ");
		scanf("%c",&yas);
		if(yas!='y' && yas!='c' && yas!='b')
		{
			continue;
		}
		printf("Nab�z de�eri: ");
		scanf("%d",&nabiz);
		if(nabiz<0)
		{
			printf("Negatif nab�z de�eri girdiniz.\n");
			continue;
		}
		
		if(yas!='y')
			{
				if(yas!='c')
				{
				printf("Yanl�� kategori veya nab�z de�eri!\n");
				continue;
				}
			}
		
		
			if(yas=='y' && nabiz>0)
			{
				if(nabiz<60)
				{
					printf("Nab�z d���k (Bradikardi)\n"); continue;
				}
				else if(nabiz>=60 && nabiz<=100)
				{
					printf("Nab�z normal.\n"); continue;
				}
				else if(nabiz>100)
				{
					printf("Nab�z y�ksek (Ta�ikardi)\n");
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
					printf("Nab�z d���k (Bradikardi)\n"); continue;
				}
				else if(nabiz>=80 && nabiz<=100)
				{
					printf("Nab�z normal.\n"); continue;
				}
				else if(nabiz>100)
				{
					printf("Nab�z y�ksek (Ta�ikardi)\n"); continue;
				}
			}
	}
	
	
		printf("------------------------------------------\n");
		printf("Program sona erdi.\n");
		if(cocuk_low!=999)
		{
			printf("�ocuklarda en d���k nab�z de�eri: %d\n",cocuk_low);
		}
		printf("Yeti�kinlerde ta�ikardi say�s�: %d",sayac);
return 0;
}
