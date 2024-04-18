#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    double x1;
    double x2;
    double d;
    
    printf("coefficiente a:\t");
    scanf("%f", &a);
    printf("coefficiente b:\t");
    scanf("%f", &b);
    printf("coefficiente c:\t");
    scanf("%f", &c);

    if(a==0){
        if(b==0 && c==0)
        printf("equazione indeterminata");
        else if(b==0)
        printf("equazione impossibile");
        else{
        printf("l'equazione è di primo grado\n");
        x1=-c/b;
        printf("\nx=%lf", x1);
        }
        }
        else{

            d=b*b-4*a*c;
            printf("\nil determinante è %5.3lf", d);
            if(d>0) {
                x1=(-b-sqrt(d))/(2*a);
                x2=(-b+sqrt(d))/(2*a);
                printf("\nle due soluzioni reali distinte x1= %5.3lf e x2= %5.3lf", x1, x2);
            }
            else if(d==0) {
                x1=(-b)/(2*a);
                printf("\ndue soluzioni reali coincidenti x1 e x2 uguali a %5.3lf", x1);
                }
                else printf("\nnon esistono soluzioni reali\n");
                }
                
                return 0;

        }

        
        
  
