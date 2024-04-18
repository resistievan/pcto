#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit, kelvin;
    printf("inserisci celsius\n");
    scanf("%f",&celsius);
    kelvin=celsius+273,15;
    fahrenheit=celsius*(9/5)+32;
    if(celsius>=-273,15)
    {
        printf("la temperatura in fahrenheit è di %.0f e in kelvin è di %.0f", fahrenheit, kelvin);
    }
    else {
        printf("errore");
    }
}
   
