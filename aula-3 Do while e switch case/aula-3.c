#include <stdio.h>
int main(){
    float soma=0, valor;
    int opcao;
    do
    {
        printf("Escolha as opções \n:");
        printf("\n 1. Depósito ");
        printf("\n 2. Saque");
        printf("\n 3. saldo");
        printf("\n 4. sair");
        printf("\n Digite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n Valor do depósito: ");
            scanf("%f", &valor);
            soma = soma + valor;
            break;
        case 2: 
            printf("\n Valor do Saque: ");
            scanf("%f", &valor);
            soma = soma - valor;
            break;
        case 3:
            printf("Valor do seu saldo: R$ %.2f\n ", soma);
            break;
    
        
        default:
            if(opcao != 4){
                printf("Opção inválida");
            }
            break;
        }
    } while (opcao != 4);
    return 0;
    
}