#include<stdio.h>

int main()
{
	int dogum,simdi;
	printf("Dogum yiliniz -> ");
	scanf("%d",&dogum);
	printf("Su anki y�l ->");
	scanf("%d",&simdi);
	printf("Yasiniz -> %d",simdi-dogum);
	return 0;
}
