#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
	int n,a,b,c;
	printf("Kaç terim yazýlsýn? ");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("%d ",b);
	for(int i=1;i<n;i++)
	{
		c = a + b;
		printf("%d ",c);
		a = b;
		b = c;
	}
return 0;
}
