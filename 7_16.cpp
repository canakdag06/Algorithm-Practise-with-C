#include<stdio.h>

int main()
{
	int dogru,yanlis;
	printf("Dogru sayinizi giriniz = ");
	scanf("%d",&dogru);
	printf("Yanlis sayinizi giriniz = ");
	scanf("%d",&yanlis);
	
	if(dogru<0 || yanlis<0)
	{
		printf("HATA! Uygun dogru/yanlis sayisi girmediniz.");
		return 0;
	}
	
	printf("---------------------------");
	float net = dogru - yanlis/4;
	printf("\nNet Sayiniz : %.2f",net);
	
	if(net<10)
	printf("\nKurunuz : Beginner");
	else if(net>=10 && net<30)
	printf("\nKurunuz : Elementary");
	else if(net>=30 && net<50)
	printf("\nKurunuz : Preintermediate");
	else if(net>=50 && net<70)
	printf("\nKurunuz : Intermediate");
	else
	printf("\nKurunuz : Upper");
}
