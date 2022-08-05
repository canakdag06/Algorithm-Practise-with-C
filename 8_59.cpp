#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int tbugun=10000, kbugun=10000, tyarin, kyarin;
	
	for(int i=1;i<=100;i++)
	{
		printf("%d. gün kurt sayýsý: %d\n",i,kbugun);
		printf("%d. gün tavþan sayýsý: %d\n",i,tbugun);
		printf("--------------------------\n");
		tyarin = (1+0.01)*tbugun - 0.00001*tbugun*kbugun;
		kyarin = (1-0.005)*kbugun + 0.00001*0.01*tbugun*kbugun;
		tbugun = tyarin;
		kbugun = kyarin;
	}
return 0;
}
