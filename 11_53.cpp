#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a[3][3];
	
	for(int i=0; i<3; i++)
	{
		printf("a dizisinin %d. satýrý: ",i+1);
		for(int j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------------------------\n");
	int satir;
	for(int i=0; i<3; i++)
	{
		satir = 0;
		for(int j=0; j<3; j++)
		{
			printf("%d  ",a[i][j]);
			satir += a[i][j];
		}
		printf("%d\n", satir);
	}
	printf("-------\n");
	int sutun;
	for(int i=0; i<3; i++)
	{
		sutun = 0;
		for(int j=0; j<3; j++)
			sutun += a[j][i];
		printf("%d  ",sutun);
	}
	return 0;
}
