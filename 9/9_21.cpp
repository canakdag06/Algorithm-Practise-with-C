#include <stdio.h>
#include<locale.h>
void obeb(int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
    int sayi1, sayi2;

    printf("Ýki sayý girin: ");
    scanf("%d %d",&sayi1,&sayi2);
    obeb(sayi1,sayi2);
    return 0;
}

void obeb(int sayi1,int sayi2)
{
	int obeb;
	for(int i=1; i<=sayi1 && i<=sayi2; i++)
    {
		if(sayi1%i==0 && sayi2%i==0)
            obeb = i;
    }
    printf("%d ve %d OBEB'i : %d",sayi1,sayi2,obeb);
}
