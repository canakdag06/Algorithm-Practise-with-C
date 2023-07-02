#include<stdio.h>
#include<locale.h>
#include<math.h>
void uzaklik(int,int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	uzaklik(3,2,-2,-1);
return 0;
}

void uzaklik(int x1,int y1, int x2,int y2)
{
	float mesafe = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("%.2f",mesafe);
}
