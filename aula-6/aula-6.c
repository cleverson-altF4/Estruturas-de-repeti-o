#include <stdio.h>
#include <stdlib.h> //system
int main(){
   int soma=0, nota, quantidade=0;
   char resposta;
   float media;

   do
   {
      printf("\n Digite uma nota");
      scanf("%d", &nota);
      soma += nota;
      quantidade++;


      while(getchar() != '\n'); //limpa após o Enter.
      printf("\n Digite uma tecla para continuar ou 'S' para sair");
      resposta = getchar();

      while(getchar() != '\n');

   } while (resposta != 'S' && resposta != 's');
     media = (float) soma / quantidade;

     printf("\n A quantidade seria %d\n", quantidade);
     printf("\n As notas seria %d", soma);
     printf("\n A média é %.2f\n", media);
     printf("Aperte Enter para sair");
     getchar();

     return 0;
   
}