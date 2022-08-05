#include<stdio.h>
#include<locale.h>
#include<math.h>
void kenar3(int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	kenar3(3,4,90);
return 0;
}

void kenar3(int b,int c,int aci)
{
	int a = sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(aci*M_PI/180));
	printf("\nÜçüncü kenar = %d",a);
}
