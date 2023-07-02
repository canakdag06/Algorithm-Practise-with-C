#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void karistir(int[],int);

int main()
{
	srand( time(NULL) );
	int dizi[5]={12,11,10,8,9},i;
	
	for(i=0;i<5;i++)
		printf("%d,",dizi[i]);
	
	printf("\n");
	karistir(dizi,5);
	
	for(i=0;i<5;i++)
		printf("%d,",dizi[i]);
	return 0;
}

void karistir(int dizi[],int n)
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
