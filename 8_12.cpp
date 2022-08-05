#include<stdio.h>
#include<locale.h>

int i=1,a,kenar;
int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("Bir kenar uzunluðunu giriniz= ");
	scanf("%d",&kenar);
	
	for(i=1;i<=kenar;++i)
	{
		printf("* ");
	}
			for(a=1;a<kenar;++a)
		{
			printf("\n* ");
			for(i=1;i<kenar;i++)
			{
				printf("* ");
			}
		}
	return 0;
}
