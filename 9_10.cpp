#include<stdio.h>
#include<locale.h>
int mukemmelYaz(int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int bas = 10, son = 1000;
	mukemmelYaz( 1, 10 );
	printf("\n");
	mukemmelYaz(bas, son );
return 0;
}

int mukemmelYaz(int bas, int son)
{
	printf("%d-%d arasýndaki mükemmel sayýlar: ",bas,son);
	
	for(int i=bas;i<=son;i++)
	{
		int toplam=0;
		for(int j=1;j<i;j++)
		{
			if(i%j == 0)
				toplam = toplam + j;
		}
		if(toplam == i)
			printf("%d ",i);
	}
}
