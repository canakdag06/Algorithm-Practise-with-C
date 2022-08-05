#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("1 ile 1000 arasýndaki mükemmel sayýlar");
	printf("\n--------------------------------------\n");
		
		for(int i=1;i<=1000;i++)
		{
		int toplam=0;
			for(int j=1;j<i;j++)
			{
				if(i%j==0)
				toplam = toplam + j;
			}
				if(toplam == i)
				printf("%d ",i);
		}
		return 0;
}
