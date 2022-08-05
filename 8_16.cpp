#include<stdio.h>
#include<locale.h>

int main()
{
	int kenar, i, j;
	setlocale(LC_ALL, "Turkish");
	printf("Bir kenar uzunluðu giriniz= ");
	scanf("%d",&kenar);
	printf("---------------------------\n");
	
	for(i=1;i<=kenar;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
