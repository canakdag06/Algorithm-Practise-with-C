#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

int altKume(int[],int,int[],int);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	int a[10], b[5];
	
	
	printf("A dizisinin elemanlarý: ");
	for(int i=0; i<10; i++)
	{
		a[i] = rand()%100 +1;
		printf("%d, ",a[i]);
	}
	
	printf("\nB dizisinin elemanlarýný giriniz: ");
	for(int i=0; i<5; i++)
		scanf("%d", &b[i]);
	printf("-------------------------------------\n");
	int flag = altKume(a,10,b,5);
	if(flag == 1)
		printf("B dizisi, A dizisinin alt kümesidir.");
	else
		printf("B dizisi, A dizisinin alt kümesi deðildir.");
	return 0;
}

int altKume(int a[], int boyuta, int b[], int boyutb)
{
	int sayac = 0;
	for(int i=0; i<boyutb; i++)
	{
		for(int j=0; j<boyuta; j++)
		{
			if(b[i] == a[j])
			{
				sayac++;
				break;
			}
		}
	}
	
	if(sayac == boyutb)
		return 1;
	else
		return 0;
}
