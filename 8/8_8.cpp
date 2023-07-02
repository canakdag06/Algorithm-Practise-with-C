#include<stdio.h>
#include<locale.h>

int main()
{
	int x, n=0;
	setlocale(LC_ALL, "Turkish");
	printf("Halley yýldýzýnýn görülebileceði yýllar : ");

	for(x=1986;x<=(1986+75*19);x=x+75)
	{
		printf("%d ",x);
		if(x>=2000 && x<3000)
		n++;
	}
	printf("\nHalley yýldýzý 2000'li yýllarda %d kez görülebilir",n);
return 0;
}
