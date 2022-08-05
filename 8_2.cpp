#include<stdio.h>

int main()
{
	int sayi,i;
	float toplam;
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	toplam = toplam + (float)(i+1)/i;
	printf("%.2f",toplam);
return 0;
}
