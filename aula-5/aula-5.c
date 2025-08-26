//Exemplo de código estrutura condicional composta.

//Alguns valores de variáveis podem ser modificados com base em seus valores anteriores. Para simplificar esse processo, você pode utilizar o que é conhecido como atribuição composta, indicando qual operação deve ser realizada. Nesse caso, o operador é colocado à esquerda do sinal de atribuição. 

//Por exemplo, y *= x + 1 tem o mesmo efeito que y = y * (x + 1), o que evita colocar a variável do lado direito da atribuição. A atribuição composta foi utilizada no algoritmo do Quadro 4, linha 9, simplificando num = num / 2 por num /= 2 (Atenção na atribuição composta, pois não pode haver espaço entre o operador e o sinal de =).

#include <stdio.h>
int main(){
    int x, y;

    printf("\n Digite o valor de X");
    scanf("%d", &x);

    printf("\n Digite o valor de Y");
    scanf("%d", &y);

    if(x > y){
        printf("\n O valor de X > y. então vamos aumentar Y");
        y += x;
    }else{
        printf("\n O valor de y diminui então vamos diminuir X");
        x -= y;
    }
    printf("\n O valor de X = %d", x);
    printf("\n O valor de Y = %d", y);
    return 0;
}