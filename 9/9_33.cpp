#include<stdio.h>
#include<locale.h>
void cdenfye(float);
void fdencye(float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float sicaklik;
	printf("Sýcaklýk deðeri giriniz: ");
	scanf("%f",&sicaklik);
	cdenfye(sicaklik);
	fdencye(sicaklik);
return 0;
}

void cdenfye(float sicaklik)
{
	printf("C den F ye: %.2f\n",((sicaklik/100)*180)+32);
}

void fdencye(float sicaklik)
{
	printf("F den C ye: %.2f\n",((sicaklik-32)/180)*100);
}
