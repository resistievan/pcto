#include <stdio.h>

void somma(int n1, int n2)
{
printf("la somma tra i due numeri è: %d\n", n1+n2);

}
void sottrazione(int n1, int n2)
{
printf("la sottrazione è: %d\n", n1-n2);

}
void moltiplicazione(int n1, int n2)
{
printf("la moltiplicazione è: %d\n", n1*n2);

}
void divisione (float n1, float n2)
{
printf("la divisione tra i due numeri è: %f\n", n1 / n2);

}





int main()
{
    int a;
    int b;
    printf("inserisci due numeri");
    scanf("%d %d", &a, &b);
    somma(a, b);
    divisione(a, b);
    moltiplicazione(a, b);
    sottrazione(a, b);


    
    
       
}