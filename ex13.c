#include <stdio.h>

int main()
{
    int num=10;
    printf("inserisci un numero");
    scanf("%d", &num);
    if(num>=5&&num<20)
    { 
    printf("il numero è maggiore di cinque e minore di venti");

    }
    else
    {
    printf("SBAGLIATA");
    }
}