#include<stdio.h>
#include<math.h>

int main()
{
	int yaricap,aci;
	printf("Yaricap degerini(cm) giriniz =");
	scanf("%d",&yaricap);
	printf("Merkez aci degeriniz giriniz =");
	scanf("%d",&aci);
	float alan = ((3.14)*yaricap*yaricap*aci)/360;
	printf("\nAcinin taradigi alan %.2f santimetrekaredir",alan);
}
