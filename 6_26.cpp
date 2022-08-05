#include<stdio.h>

int main()
{
	int on_p,yuz_p,on_k,yirmibes_k;
	printf("Elinizdeki 10 Para miktarini giriniz: ");
	scanf("%d",&on_p);
	printf("Elinizdeki 100 Para miktarini giriniz: ");
	scanf("%d",&yuz_p);
	printf("Elinizdeki 10 Kurus miktarini giriniz: ");
	scanf("%d",&on_k);
	printf("Elinizdeki 25 Kurus miktarini giriniz: ");
	scanf("%d",&yirmibes_k);
	
	float toplam = on_p*0.25 + yuz_p*2.5 + on_k*10.0 + yirmibes_k*25.0;
	 printf("-----------------------------");
	int lira = toplam/100;
	float kurus = toplam- lira*100.0;
	printf("\nBozukluklarin toplam degeri %d lira %.2f kurustur",lira,kurus);
	return 0;
}
