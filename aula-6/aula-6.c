#include <stdio.h>
#include <stdlib.h>
int main(){
   int nota;              // Para guardar a nota digitada
    int quantidade = 0;    // Conta quantas notas foram digitadas
    int soma = 0;          // Soma de todas as notas
    char resposta;         // Guarda a resposta do usuário (s ou outra letra)
    float media;           // Média das notas

    do
    {
       printf("\nDigite uma nota: ");
       scanf("%d", &nota);

       soma += nota;
       quantidade++;

       while(getchar() != '\n');
       printf("\nAperte  C continuar ou 'S' para sair!");
       resposta = getchar();

       while(getchar() != '\n');

       

    } while (resposta != 'S' && resposta != 's');
        media=(float)soma / quantidade;

        printf("\nO valor da avaliação %d\n", quantidade);
        printf("\nO valor das notas %d", soma);
        printf("\nA média das notas %.2f\n", media);
        printf("Aperte Enter para sair");
        getchar();
        
        return 0;


}