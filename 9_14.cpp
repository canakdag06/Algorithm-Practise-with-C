#include<stdio.h>
int okekBul(int,int);

int main()
{
	printf("%d",okekBul(120,150));
return 0;
}

int okekBul(int sayi1,int sayi2)
{
	int kucukSayi;
    int obeb = 1;
    
    if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;
 
    for (int i = 2; i <= kucukSayi; i++)
	{
        if (sayi1 % i == 0 && sayi2 % i == 0)
            obeb = i;
    }
    return (sayi1 * sayi2) / obeb;
}
