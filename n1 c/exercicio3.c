#include <stdio.h>

int main (){
    char letra;
    printf("entre com uma letra minuscula :");
    scanf("%c", &letra);
    letra = letra + ('A' - 'a');
    printf("Caractere = %c  \n", letra);
    return 0;

};