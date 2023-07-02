#include<stdio.h>
#include<locale.h>

int main()
{
	int kenar, i, j;
	setlocale(LC_ALL, "Turkish");
	printf("Bir kenar uzunluðunu giriniz= ");
	scanf("%d",&kenar);
	printf("----------------------------\n");
	
	for(i=kenar;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
