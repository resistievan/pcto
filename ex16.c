#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("inserisci un numero");
    scanf("%d",&num);
    i=num-1;
    while(i>1)
    {
        if(num%i == 0)
        {
            printf("%d non è un numero primo", num);
            return 0;
        }
        i--;
    }
    printf("%d è un numero primo", num);
}