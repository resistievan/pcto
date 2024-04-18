#include <stdio.h>

int main()
{
    char nome[20];
    printf("inserisci il tuo nome\n");
    scanf("%[^\n]s", nome);
    printf("ciao %s\n", nome);
}