#include<stdio.h>

int main()
{
	int pay1,payda1,pay2,payda2;
	printf("Birinci ifadenin payini ve paydasini giriniz: ");
	scanf("%d %d",&pay1,&payda1);
	printf("Ikinci ifadenin payini ve paydasini giriniz: ");
	scanf("%d %d",&pay2,&payda2);
	printf("--------------------------");
	
	printf("\n %d      %d     %d",pay1,pay2,pay1*pay2);
	printf("\n---- X ----= ---- = %.2f",(float)(pay1*pay2)/(payda1*payda2));
	printf("\n %d      %d     %d",payda1,payda2,payda1*payda2);
	
	printf("\n\n %d      %d     %d",pay1,pay2,(payda2*pay1)+(payda1*pay2));
	printf("\n---- + ----= ---- = %.2f",(float)((payda2*pay1)+(payda1*pay2))/(payda1*payda2));
	printf("\n %d      %d     %d",payda1,payda2,payda1*payda2);
}
