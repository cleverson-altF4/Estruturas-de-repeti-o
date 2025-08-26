#include <stdio.h>
int main(){
    float soma=0, valor;
    int opcao;
    do
    {
        printf("\n\n #######Sua Conta bancária");
        printf("\n !. Depósito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n Selecione uma opção:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n Qual o valor do depósito:");
            scanf("%f", &valor);
            if(valor > 0){
                soma += valor;
                printf("\n Depósito concluído");
            }else{
                printf("\n Seu depósito está insuficiente, corrija o valor depositado");
            }
            break;
        case 2:
            printf("\n Qual seria o valor do saque:");
            scanf("%f", &valor);
            if(valor >= 0 && valor <= soma){
                soma -= valor;
                printf("\n O saque está concluído");
            }else{
                printf("\n Saldo insuficiente, corrija o valor do saque");
            }
            break;
        case 3:
            printf("\n O valor do saldo é de %.2f", soma);
            break;

        case 4:
            printf("\n######Obrigado por usar o nosso banco######");
            break;

        
        default:
            printf("\n Opção inválida, tente novamente");
            break;
        }

    } while (opcao != 4);
    return 0;
    
}