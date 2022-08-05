#include<stdio.h>
#include<locale.h>
long int kombinasyon(int n,int r);

int main()			// Program k���k say�larla do�ru �al���yor.
{					// C(15,11) yapt���mda say�lar �ok b�y�k oldu�u i�in veri tipine s��m�yor.
	int n,r;
	setlocale(LC_ALL, "Turkish");
	printf("n ve r de�erlerini giriniz : ");
	scanf("%d %d",&n,&r);
	printf("--------------------------------\n");
	printf("C(n,r) = %ld",kombinasyon(n,r));
return 0;
}

long int kombinasyon(int n,int r)
{
	// formul = n! / (n-r)!r!
	int pay=1,payda=1;
	for(int i=n;i>=1;i--)
	{
		pay = pay*i;
	}
	for(int i=n-r;i>=1;i--)
	{
		payda = payda*i;
	}
	for(int i=r;i>=1;i--)
	{
		payda = payda*i;
	}
	return pay/payda;
}
