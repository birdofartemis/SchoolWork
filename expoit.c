#include <stdio.h>
#include <stdlib.h>

void main(){
int a = 30;

printf("Valor de a: %i\n", a);

int * pointer = &a;

printf("Segundo valor de a: %i\n", *pointer+30);

*pointer = 70;

printf("Valor de a: %i\n", a);


}