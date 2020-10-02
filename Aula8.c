#include <stdio.h>

/* Pegar no valor decimal e transformá-lo em binário
 Etapas: Ler o num;
         Enquanto (num != 0)
         Calcula Resto da Divisão ( num, 2);
         Calcular Novo Quociente;
         Guardar num array o Resto;
         Ordenar inversamente;
         Imprimir valor;

*/

void main(){

    int num;
    printf("Escolha o numero: ");
    scanf("%i", &num);

    
    int rest;
    int i = 0;
    int NumBin[i];

    while(num != 0){
    
    rest = num % 2;
    NumBin[i] = rest;
    num = num/2;
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