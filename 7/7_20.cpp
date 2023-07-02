#include<stdio.h>

int main()
{
	int evet_1 = 'E';
	int evet_2 = 'e';
	int hayir_1 = 'H';
	int hayir_2 = 'h';
	int check,gun;
	float maas,odenek;
	printf("Son 3 ay kesintisiz calistiniz mi? (E,e H,h) : ");
	scanf("%c",&check);
	printf("Prim gun sayinizi giriniz: ");
	scanf("%d",&gun);
	if(check==evet_1 || check==evet_2)
	{
		printf("Calisirkenki son aylik maasiniz : ");
		scanf("%f",&maas);
		printf("-----------------------------------------");
		if(gun>=600 && gun<=899)
			{
			printf("\nGunluk issizlik odenegi : %.2f",(maas/30)*0.4);
			printf("\nIssizlik aylik maasiniz : %.2f",maas*0.4);
			printf("\nIssizlik odenegini alabileceginiz sure : 180 gun");
			}
		else if(gun>=900 && gun<=1079)
			{
			printf("\nGunluk issizlik odenegi : %.2f",(maas/30)*0.4);
			printf("\nIssizlik aylik maasiniz : %.2f",maas*0.4);
			printf("\nIssizlik odenegini alabileceginiz sure : 240 gun");
			}
		else if(gun>=1080)
			{
			printf("\nGunluk issizlik odenegi : %.2f",(maas/30)*0.4);
			printf("\nIssizlik aylik maasiniz : %.2f",maas*0.4);
			printf("\nIssizlik odenegini alabileceginiz sure : 300 gun");
			}
		else
		printf("\nMaalesef issizlik maasi odemesi alamazsiniz.");
	}
		else
		printf("\nMaalesef issizlik maasi odemesi alamazsiniz.");
	return 0;
}
