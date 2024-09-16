#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int d;
    int soma;


    soma = 0;

    printf("Digite um numero inteiro:");
    scanf("%d",&n);

    while(n>0){
        d = n%10;
        soma = d + soma;
        n = n/10;
    }
    printf("A soma dos digitos e: %d\n",soma);

    return 0;


}
