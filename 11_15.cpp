#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a[5],b[5],c[5];
	printf("1. dizinin elemanlar�n� giriniz:");
	for(int i=0; i<5; i++)
		scanf("%d",&a[i]);
		
	printf("2. dizinin elemanlar�n� giriniz:");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&b[i]);
		c[i] = a[i]+b[i];
	}
	
	printf("Elemanlar�n toplam� olan dizi: ");
	for(int i=0; i<5; i++)
		printf("%d ",c[i]);
	return 0;
}
