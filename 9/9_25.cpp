#include<stdio.h>
#include<locale.h>
#include<math.h>
void birbirineEnYakin(int,int,int,int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	birbirineEnYakin(3,3, 7,7, 9,9);
return 0;
}

void birbirineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int bir_iki = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	int bir_uc = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	int iki_uc = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	if(bir_iki < bir_uc && bir_iki < iki_uc)
		printf("Yakýn olan çift= (%d,%d)-(%d,%d)",x1,y1,x2,y2);
	else if(iki_uc < bir_uc && iki_uc < bir_iki)
		printf("Yakýn olan çift= (%d,%d)-(%d,%d)",x2,y2,x3,y3);
	else if(bir_uc < iki_uc && bir_uc < bir_iki)
		printf("Yakýn olan çift= (%d,%d)-(%d-%d)",x1,y1,x3,y3);
}
