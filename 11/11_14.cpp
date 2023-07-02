#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a[5],b[5];
	printf("a dizisinin elemanlarýný giriniz:");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("b dizisinin elemanlarýný giriniz:");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&b[i]);
	}
	
	int c[10];
	int flag, k=0;
	for(int i=0; i<5 ; i++)
	{
		for(int j=0; j<5 ; j++)
		{
			if(a[i] == b[j])
			{
				flag = 0;
				for(int x=0 ; x<k ; x++)
				{
					if(a[i] == c[x])
						flag = 1;
				}
				if(flag == 0)
				{
					c[k] = a[i];
					k++;
				}
			}
		}
	}
	
	printf("ortak olan elemanlar: ");
	for(int i=0; i<k ; i++)
		printf("%d ",c[i]);
	return 0;
}
