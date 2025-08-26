
//Conjectura de Collatz
//A conjectura de Collatz coloca que, seguindo essas duas regras simples, todos os números naturais eventualmente chegarão a 1 (e a sequência 1, 4, 2, 1, 4, 2, 1, 4, 2, 1... se repetirá indefinidamente). Matematicamente, as regras são as seguintes:

//se n é par: n = n / 2
//se n é ímpar: n = 3n + 1

#include <stdio.h>
int main(){
    int num, i;
    printf("\n Digite um número:");
    scanf("%d", &num);
    
    while (num > 1)
    {
       if(num %2 == 0){
        num /= 2;
       }else{
        num = 3 * num + 1;
       }
       printf(" O número %d\n", num);
       i++;
    }
    return 0;
}

//📊 Exemplo de execução

//Se o usuário digitar 6:

//6 → par → 6 / 2 = 3

//3 → ímpar → 3 * 3 + 1 = 10

//10 → par → 10 / 2 = 5

//5 → ímpar → 5 * 3 + 1 = 16

//16 → par → 16 / 2 = 8

//8 → par → 8 / 2 = 4

//4 → par → 4 / 2 = 2

//2 → par → 2 / 2 = 1 ✅ (fim)