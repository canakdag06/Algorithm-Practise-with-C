#include<stdio.h>
#include<locale.h>
#include<math.h>
void orijineEnYakin(int,int,int,int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	orijineEnYakin(3,3, 7,7, 9,9);
return 0;
}

void orijineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int nokta1 = sqrt(pow(x1,2)+pow(y1,2));
	int nokta2 = sqrt(pow(x2,2)+pow(y2,2));
	int nokta3 = sqrt(pow(x3,2)+pow(y3,2));
	if(nokta1<nokta2 && nokta1<nokta3)
		printf("Yakýn olan= (%d,%d)",x1,y1);
	else if(nokta2<nokta1 && nokta2<nokta3)
		printf("Yakýn olan= (%d,%d)",x2,y2);
	else if(nokta3<nokta1 && nokta3<nokta2)
		printf("Yakýn olan= (%d,%d)",x3,y3);
}
