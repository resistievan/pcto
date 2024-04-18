 #include <stdio.h>

int main()
{
    int eta_utente;
    printf("inserisci un eta utente \n");
    scanf("%d", &eta_utente);
    if(eta_utente>=18)
    {
        printf("puo prendere la patente\n");
    }
    else if (eta_utente<18)

    {
        printf("non puo prendere la patente \n");
    }
}
