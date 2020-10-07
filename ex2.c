# include <stdio.h>
// Crie um programa da forma mais eficiente possível que converta Celsius para Fahrenheit.

float conversor( float Celsius) {
    return Celsius*1.8+32;
} 
void main(){
    float Celsius;
    printf("Digite o valor que pretende converter:"); scanf("%f", &Celsius);
    printf("\nO resultado é %.2f fahrenheit", conversor(Celsius));
}