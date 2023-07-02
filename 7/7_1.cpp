#include<stdio.h>

int main()
{
int ara, son, devam;
	printf("Arasinav puanini giriniz: ");
	scanf("%d",&ara);
	printf("Son sinav puanini giriniz: ");
	scanf("%d",&son);
	printf("Devam puanini giriniz: ");
	scanf("%d",&devam);
	printf("------------------------");
	
	if((ara||son||devam>100) || (ara||son||devam<0))
	{
		printf("\nHATA! Not araligi 0-100 arasinda olmalidir.");
		return 0;
	}
	
float ort = ara*0.4 + son*0.5 + devam*0.1;
	printf("\nOrtalama puaniniz : %.2f",ort);
	
	if(ort>=60)
	printf("\nTebrikler! Gectiniz.");
	else
	printf("\nÜzgünüm, kaldiniz...");
	return 0;
}
