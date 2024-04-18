#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("inserisci un numero\n");
    scanf("%d", &num1);
    printf("inserisci un numero\n");
    scanf("%d", &num2);
    if(num1%num2==0)
    {
        printf("il primo numero è multiplo del secondo");
    }
    else 
    {
        printf("il primo numero non è multiplo del secondo");
    }
}