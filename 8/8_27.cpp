#include<stdio.h>
#include<locale.h>

int main()
{
	int x=0,y=0;
	float alis,satis,oran;
	setlocale(LC_ALL,"Turkish");
	printf("\t\t\t\tWM Software Ýthalat-Ýhracat Þirketi Kar/Zarar Programý");
	printf("\n\t\t\t\t------------------------------------------------------");
	
	do
	{
	printf("\nAlýþ ve satýþ deðerlerini giriniz : ");
	scanf("%f %f",&alis,&satis);
	oran = (satis-alis)/alis;
		if(oran>=0)
		{
		printf("(Kar oraný %.2f)",oran);
		x++;
		}
		else if(oran<0)
		{
		printf("(Zarar oraný %.2f)",oran*-1);
		y++;
		}
	}
	while(alis!=0 && satis!=0);
	printf("-----------------------------------");
	printf("\nprogram sona erdi");
	printf("\nToplamda %d iþlemden kar, %d iþlemden zarar edilmiþtir.",x,y);
}
