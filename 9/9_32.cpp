#include<stdio.h>
#include<locale.h>
int permutasyon(int,int);

int main()
{
	int n,r;
	setlocale(LC_ALL, "Turkish");
	printf("n ve r değerlerini giriniz : ");
	scanf("%d %d",&n,&r);
	printf("--------------------------------\n");
	printf("P(n,r) = %d",permutasyon(n,r));
return 0;
}

int permutasyon(int n,int r)
{
	// formul = n! / (n-r)!
	int pay=1,payda=1;
	for(int i=n;i>=1;i--)
	{
		pay = pay*i;
	}
	for(int i=n-r;i>=1;i--)
	{
		payda = payda*i;
	}
	return pay/payda;
}
