#include<stdio.h>

int main()
{
	float a,b,c,max,min,orta;
	printf("Uc adet ondalikli sayi giriniz = ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b && a>c) max=a;
	else if(b>a && b>c) max=b;
	else max=c;
	
	if(a<b && a<c) min=a;
	else if(b<a && b<c) min=b;
	else min=c;
	
	if(a>b && a<c) orta=a;
	else if(a>c && a<b) orta=a;
	else if(b>a && b<c) orta=b;
	else if(b>c && b<a) orta=b;
	else orta=c;
	
	printf("Buyukten kucuge sirali hali : %.2f > %.2f > %.2f",max,orta,min);
}
