#include<stdio.h>
#include<locale.h>

int main()
{
	int x=0,y=0;
	float alis,satis,oran;
	setlocale(LC_ALL,"Turkish");
	printf("\t\t\t\tWM Software �thalat-�hracat �irketi Kar/Zarar Program�");
	printf("\n\t\t\t\t------------------------------------------------------");
	
	do
	{
	printf("\nAl�� ve sat�� de�erlerini giriniz : ");
	scanf("%f %f",&alis,&satis);
	oran = (satis-alis)/alis;
		if(oran>=0)
		{
		printf("(Kar oran� %.2f)",oran);
		x++;
		}
		else if(oran<0)
		{
		printf("(Zarar oran� %.2f)",oran*-1);
		y++;
		}
	}
	while(alis!=0 && satis!=0);
	printf("-----------------------------------");
	printf("\nprogram sona erdi");
	printf("\nToplamda %d i�lemden kar, %d i�lemden zarar edilmi�tir.",x,y);
}
