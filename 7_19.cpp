#include<stdio.h>

int main()
{
	int sure,maas;
	printf("Toplam calisma surenizi giriniz (ay) : ");
	scanf("%d",&sure);
	printf("Aylik ucretinizi giriniz (TL) : ");
	scanf("%d",&maas);
	printf("---------------------------------------");
	if(sure<=0 || maas<=0)
	{
		printf("\nHATA! Uygun degerler girmelisiniz.");
		return 0;
	}
	if(sure<=6)
	{
		printf("\nIhbar suresi : 14 gun");
		printf("\nIhbar tazminati : %d",(maas/30)*14);
	}
	else if(sure>6 && sure<=18)
	{
		printf("\nIhbar suresi : 28 gun");
		printf("\nIhbar tazminati : %d",(maas/30)*28);
	}
	else if(sure>18 && sure<=36)
	{
		printf("\nIhbar suresi : 42 gun");
		printf("\nIhbar tazminati : %d",(maas/30)*42);		
	}
	else
	{
		printf("\nIhbar suresi : 56 gun");
		printf("\nIhbar tazminati : %d",(maas/30)*56);
	}
	return 0;
}
