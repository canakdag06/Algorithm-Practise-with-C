#include<stdio.h>
#include<math.h>

int main()
{
	float hero,enemy_1,enemy_2,enemy_3;
	printf("Kahramanin gucunu giriniz : ");
	scanf("%f",&hero);
	printf("Dusmanlarin gucunu giriniz (3 adet) : ");
	scanf("%f %f %f",&enemy_1,&enemy_2,&enemy_3);
	printf("----------------------------------");
	
	if(fabs(hero-enemy_1) <= fabs(hero-enemy_2) && fabs(hero-enemy_1) <= fabs(hero-enemy_3))
	printf("\nKahraman 1 nolu dusmana saldýrmalidir. (Guc farki = %.2f)",(float)fabs(hero-enemy_1));
	else if(fabs(hero-enemy_2) <= fabs(hero-enemy_1) && fabs(hero-enemy_2) <= fabs(hero-enemy_3))
	printf("\nKahraman 2 nolu dusmana saldirmalidir. (Guc farki = %.2f)",(float)fabs(hero-enemy_2));
	else
	printf("\nKahraman 3 nolu dusmana saldirmalidir. (Guc farki = %.2f)",(float)fabs(hero-enemy_3));
return 0;
} 
