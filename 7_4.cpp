#include<stdio.h>

int main()
{
	int trafik_y, motor_y, ilk_y;
	float trafik=100.0 , motor=100.0, ilk=100.0;
	printf("Trafik yanlis sayisini giriniz: ");
	scanf("%d",&trafik_y);
	printf("Motor yanlis sayisini giriniz: ");
	scanf("%d",&motor_y);
	printf("Ilk yardim yanlis sayisini giriniz: ");
	scanf("%d",&ilk_y);
	printf("---------------------------------------");
	trafik = trafik - trafik_y*2.0;
	motor = motor - motor_y*2.5;
	ilk = ilk - ilk_y*3.0;
	if(trafik<=70)
		printf("\nUzgunuz...Trafik sinavina katilamazsiniz.");
	if(motor<=70)
		printf("\nUzgunuz...Motor sinavina katilamazsiniz.");
	if(ilk<=70)
		printf("\nUzgunuz...Ilk yardim sinavina katilamazsiniz.");
	return 0;
}
