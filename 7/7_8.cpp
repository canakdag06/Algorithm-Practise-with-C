#include<stdio.h>

int main()
{
	int sigorta, onarim, hurda;
	printf("Hasarli aracin sigorta, onarim ve hurda\nbedelini giriniz : ");
	scanf("%d %d %d",&sigorta,&onarim,&hurda);
	printf("---------------------------------------");
	
	if(onarim+hurda > sigorta)
	{
		printf("\nBu araci perte ayirmalisiniz");
		printf("\nPerte ayirarak %d TL kar elde edersiniz",onarim+hurda-sigorta);
	}
	else if(onarim+hurda<=sigorta)
		printf("\nBu araci onarim icin servise gondermelisiniz");
	return 0;
}
