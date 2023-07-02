#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("Aranýlan sayý : ");
	printf("\n--------------------------------\n");
		int toplam=0;
		
		for(int i=9999;i>=1000;i--)
		{
			for(int j=1;j<i;j++)
			{
				if(i%j==0)
				toplam = toplam + j;
			}
				if(toplam>i && i%2==1)
				{
					printf("%d",i);
					break;
				}
		}
return 0;
}
