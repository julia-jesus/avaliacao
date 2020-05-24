
#include <iostream>
#include <string>

int main()
{

int ultimo, dividendo, divisor, x, quantos, quantidade = 0;

  printf("Digite o ultimo numero do intervalo \n");
  scanf("%d", &ultimo);
  printf("\nNumeros primos entre 1 e %d sao: \n", ultimo);
  printf("2 \n");
  quantos = 1;
  for (dividendo=3; dividendo<=ultimo; dividendo += 2) {
      
      x = 0;
      for (divisor=3; divisor<=dividendo; divisor += 2) {
    
        if (dividendo % divisor == 0)  {
            x = x+1;
            
        }            
      }
      
    if (x == 1) { 
        
        printf("%d\n",dividendo);
        quantidade = quantidade + dividendo; 
        quantos = quantos+1;
      }
      
  }
  
  quantidade = quantidade + 2;
     printf("\nQuantidade de numeros primos no intervalo: %d\n\n", quantos);
     printf("Calculo do valor total dos numeros primos: %d\n", quantidade);
}
