#include <stdio.h>

int main()
{
    int num2;
    printf("Inserisci un num2 \n");
    
    scanf("%d",&num2);

    if(num2<10)
    {
        printf("il numero minore è %d\n",num2);
    }
    else if (10==num2)
    {
        printf("il numero 10 è uguale a %d\n", num2);
    }
    else
    {
        printf("il numero maggiore è %d\n",num2);
    }
}