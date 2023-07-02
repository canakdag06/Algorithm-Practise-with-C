#include <stdio.h>
int main()
{
    int n1, n2, i, ebob;
    printf("Iki tamsayi girin: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            ebob = i;
    }
    printf("%d ve %d EBOB'u : %d", n1, n2, ebob);
    return 0;
}
