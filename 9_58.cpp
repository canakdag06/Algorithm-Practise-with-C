#include<stdio.h>
#include<math.h>
#include<locale.h>
int icindeMi(int,int,int,int,int);

int main()
{
	int x_m,y_m,x,y,r;
	setlocale(LC_ALL, "Turkish");
	printf("Merkez noktasýnýn koordinatlarýný(x_m,y_m) girin: ");
	scanf("%d %d",&x_m,&y_m);
	printf("Noktayý girin(x,y): ");
	scanf("%d %d",&x,&y);
	printf("Yarýçapý girin: ");
	scanf("%d",&r);
	printf("%d",icindeMi(x_m,y_m,x,y,r));
return 0;
}

int icindeMi(int x_m,int y_m,int x,int y,int r)
{
	float mesafe = sqrt(pow(x-x_m,2)+pow(y-y_m,2));
	if(mesafe<=r)
		return 1;
	else
		return 0;
}
