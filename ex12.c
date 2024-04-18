#include <stdio.h>

int main()
{
  int num1;
  int num2;
  int num3; 
  printf("inserisci tre numeri\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  if(num2-num1==num3-num2)
  {
    printf("i numeri sono in progressione aritmetica");
  }
  else{
    printf("errore");
  }
}