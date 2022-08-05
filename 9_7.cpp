#include<stdio.h>
#include<locale.h>
#include<math.h>

float integral(int, int);
static int n= 1000;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int a, b;
	printf("f(x) = 3x^5 + 5x fonksiyonunun a ve b deðerleri arasýndaki\n");
	printf("integralinin hesabý için a ve b deðerlerini giriniz: ");
	scanf("%d %d",&a,&b);
	printf("Ýntegral = %f",integral(a,b));
return 0;
}

float integral(int a, int b)
{
	float seri;
	float integral;
	float h = (b-a)/n;
	integral += h* (3 * pow(a,5) + 5*a)/2;
	for(int k=1;k<n;k++)
	{
		seri += (3*pow((a+k*h),5) + 5*(a+k*h));
	}
	integral += h* seri;
	return integral += h* (3 * pow(b,5) + 5*b)/2;
}
