#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define CREDITO 100
#define MANI 1
int main()
{
    int credito = CREDITO;
    int scommessa;
    int puntata;
    int mani;
    int flag;
    int n;
    for(mani = 0; mani < MANI && credito > 0; ++mani);
    {
        n = rand() %37 +1;\
        printf("IL TUO CREDITO SAREBBE %d \n", credito);
        do
        {
            printf("PUNTATA: ");
            scanf("%d", &puntata);
        }
        while(puntata <= 0 || puntata > credito);
        printf("SE VUOI PUNTARE SUL ROSSO PREMI '0' \n");
        printf("SE VUOI PUNTARE SUL NERO PREMI '1' \n");
        printf("SE VUOI PUNTARE SU DISPARI PREMI '2' \n");
        printf("SE VUOI PUNTARE SUI PARI PREMI '3' \n");
        do
        {
        printf("SCOMMESSA");
        scanf("%d", &scommessa);
        }
        while(scommessa < 0 || scommessa > 3);
        printf("numero %d\n", n);
        if(scommessa < 2)
        {
            flag = scommessa == n % 2;
        }
        else
        {
            flag = scommessa == 2 && n >= 18 || scommessa == 3 && n < 18;
        }
        if(flag)
        {
            printf("HAI VINTO! \n");
            credito += puntata;
        }
        else
        {   
            printf("HAI PERSO COGLIONE \n");
            credito -= puntata;
        }
        printf("DOPO %d MANI IL TUO CREDITO SAREBBE %d", mani, credito);
        return 0;
        
    }
}
