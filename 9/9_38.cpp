#include<stdio.h>
#include<locale.h>
int icindeVarMi(int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("\n%d", icindeVarMi(54572, 3));
	printf("\n%d", icindeVarMi(646, 4));
return 0;
}

int icindeVarMi(int sayi,int bul)
{
	int ara;
	while(sayi!=0)
	{
	ara = sayi%10;
		if(ara == bul)
			return 1;
	sayi = sayi/10;
	}
	return 0;
}
