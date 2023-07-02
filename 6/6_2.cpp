#include<stdio.h>

int main()
{
	int cap;
	printf("Capi giriniz(cm) ->");
	scanf("%d",&cap);
	printf("Girdi Degerleri: yaricap = %d\n",cap/2);
	printf("Kurenin hacmi: %.2f cm kuptur",(4*(3.1419)*(cap/2)*(cap/2)*(cap/2))/3);
	return 0;
}
