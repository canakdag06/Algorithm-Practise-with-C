#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

void karistir(int[],int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand( time(NULL) );
	int dizi[10]={1,2,3,4,5,6,7,8,9,10},i;
	
	karistir(dizi,10);
	printf("Sorularýn sýnavdaki düzenleri aþaðýdaki gibi olabilir:\n");
	for(i=0;i<10;i++)
		printf("%d,",dizi[i]);
	return 0;
}

void karistir(int dizi[],int n)		// 11_31 deki fonksiyonu kullanabiliriz.
{
	int temp;
	for (int i=n-1; i>0; i--)
    {
        int j = rand() % (i+1);
        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
    }
}
