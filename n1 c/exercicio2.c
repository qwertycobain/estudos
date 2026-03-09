#include <stdio.h>

void main (){
    int num;
    printf("entre com um inteiro: ");
    scanf("%d", &num);
    num = num + num%3;
    printf("num = %d\n", num);
    
}