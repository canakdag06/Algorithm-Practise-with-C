#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("Aranýlan sayý : ");
	
		for(int i=10000;i>=1;i--)
		{
		int toplam=0;
			for(int j=1;j<i;j++)
			{
				if(i%j==0)
				toplam = toplam + j;
			}
				if(toplam == i)
				{
				printf("%d ",i);
				return 0;
				}
		}
}
