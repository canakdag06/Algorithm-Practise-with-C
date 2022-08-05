#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a[5],b[5],c[10];
	
	printf("a dizisinin elemanlarýný giriniz:");
	for(int i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
	
	printf("b dizisinin elemanlarýný giriniz:");
	for(int i=0; i<5; i++)
	{
		scanf("%d", &b[i]);
		c[i+5] = b[i];
	}
	
	
	printf("c dizisinin elemanlarý:");
	for(int i=0; i<10; i++)
	{
		printf("%d ", c[i]);
	}
	
}
