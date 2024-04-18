#include <stdio.h>

int main()
{ 
    int num = 1;
    float somma = 0;
    int cont = 0;
    float media;
    
    while(num >= 0)
    {
        printf("inserisci numero\n");
        scanf(" %d", &num);
        cont=cont+1;
        somma = somma + num;
        media = somma / cont; 
        if(num >= 0)
        {
            printf("media: %f\n", media);
        }
    }
    
    
}