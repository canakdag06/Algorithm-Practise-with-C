#include<stdio.h>
float fact(int);
float kombinasyon(int, int);
int main()
{
	int n, r;
	float p;
	printf("n ve r deðerleri :");
	scanf("%d%d", &n, &r );
	printf("-----------------\n");
	float sonuc = kombinasyon( n , r );
	printf("P(n,r) = %.2f ",sonuc);
	return 0;
}
float fact(int sayi)
{
	float sonuc;
	while( sayi == 1 ){
		sonuc*sayi;
		--sayi;
	}
	return sayi;
}
float kombinasyon(int n, int r)
{
	float sonuc;
	sonuc = fact(n) / (fact(n-r)*fact(r));
	return sonuc;
}
