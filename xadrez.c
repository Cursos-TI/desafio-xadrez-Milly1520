#include <stdio.h>


int main(){

// Simulação da movimentação de peças do xadrez

   // Torre: Move-se 5 casas para a direita

   int torre = 1;   

   while (torre  <=5)
   {
     printf("Direita\n");  // Imprime a movimentação enquanto torre for menor ou igual a 5.
        torre++;
   }

   // Bispo: Move-se 5 casas na diagonal para cima e à direita

   int bispo = 1;

   do{     
      printf("Cima, Direita\n");  // Imprime a movimentação enquanto bispo for menor ou igual a 5.
      bispo++;

   } while (bispo <= 5);

    // Rainha: Move-se 8 casas para a esquerda 

   for (int rainha = 1; rainha <= 8; rainha++)
   { 
      printf("Esquerda\n");  // Imprime a movimentação enquanto rainha for menor ou igual a 8.
   }
   
   printf("\n");

    // Cavalo: Move-se 2 casas para baixo e uma para esquerda

   for (int cavalo = 1; cavalo <= 1; cavalo++)
   {
    for(int movimentovertical = 1; movimentovertical <= 2; movimentovertical++){
       printf("Baixo\n");
    }
    printf("Esquerda\n");
   }
   

   return 0;
}