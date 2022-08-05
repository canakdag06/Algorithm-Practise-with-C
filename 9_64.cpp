#include<stdio.h>
int isSuperPrime(int);
int main()
{
	printf("%d\n",isSuperPrime( 19001 ));
	printf("%d\n",isSuperPrime( 13 ));
return 0;
}

int isSuperPrime(int sayi)
{
	bool flag = 1;
	do
	{
		int toplam = 0;
		int temp = sayi;
		for(int i=2;i<sayi;i++)
		{
			if(sayi%i == 0)
			{
				flag = 0;
				return 0;
			}
		}
	
		while(temp!=0)
		{
			toplam = toplam + temp%10;
			temp = temp/10;
		}
		sayi = toplam;
			if(sayi==1 || sayi==4 || sayi==6 || sayi==8 || sayi==9)
				return 0;
	}while(sayi/10 != 0);
	
	return 1;
}
