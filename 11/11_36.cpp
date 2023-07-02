#include<stdio.h>

int main()
{
	int a[10],i;
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);
	
	int temp;
	
	for(i=0; i<5; i++)
	{
		temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}
	
	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	return 0;
}
