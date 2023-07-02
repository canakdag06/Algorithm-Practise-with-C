#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	int n, x, i;
	setlocale(LC_ALL,"Turkish");
	printf("n ve x deðerlerini giriniz: ");
	scanf("%d %d",&n,&x);
	printf("---------------------------");
	float toplam = 1;
	for(i=1;i<=n;i++)
		{
			if(i%2==1)
			toplam = toplam - pow(x,i)/i;
			if(i%2==0)
			toplam = toplam + pow(x,i)/i;		
		}
	printf("\nT= %.2f",toplam);
return 0;
}
