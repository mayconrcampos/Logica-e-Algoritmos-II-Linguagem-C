#include <stdio.h>

int main(){
    int num;
    printf("Digite um número qualquer: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O Número %d é par!\n", num);
    }else{
        printf("O Número %d é ímpar\n", num);
    }

    return 0;
}
