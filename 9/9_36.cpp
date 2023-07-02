#include<stdio.h>
#include<locale.h>
long int kombinasyon(int n,int r);

int main()			// Program küçük sayılarla doğru çalışıyor.
{					// C(15,11) yaptığımda sayılar çok büyük olduğu için veri tipine sığmıyor.
	int n,r;
	setlocale(LC_ALL, "Turkish");
	printf("n ve r değerlerini giriniz : ");
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
