#include <stdio.h>

int conv(int num, int base){


    
    int rest;
    int i = 0;
    int NumBin[i];

    while(num != 0){
    
    rest = num % base;
    NumBin[i] = rest;
    num = num/base;
    printf("%i ", NumBin[i]);
    i++;
    }

int * pointer = &NumBin[i-1];

printf("\nO termo organizado fica:\n");

while(pointer>= &NumBin[0]){

printf("%i ", *pointer);
pointer--;
}
}

void main(){

int num;
int base;

    printf("Escolha o numero: ");
    scanf("%i", &num);
    printf("Escolha a base: ");
    scanf("%i", &base);

    conv(num, base);


}