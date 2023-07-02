#include<stdio.h>

int main()
{
	int sayi,birler,onlar,yuzler,binler;
	printf("Dort basamakli sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	binler = sayi/1000;
	yuzler = (sayi%1000)/100;
	onlar = (sayi%100)/10;
	birler = (sayi%10);
	
	if(sayi<1000 || sayi>9999)
	printf("Uygun bir sayi girmediniz");
	else if((binler*10+yuzler)*(onlar*10+birler) == (yuzler*10+binler)*(birler*10+onlar))
	printf("Girilen sayi tersyuz bir sayidir");
	else if((binler*10+yuzler)*(onlar*10+birler) != (yuzler*10+binler)*(birler*10+onlar))
	printf("Girilen sayi tersyuz bir sayi degildir");
	
	return 0;
}
