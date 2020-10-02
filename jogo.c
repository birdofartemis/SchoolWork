# include <stdio.h>
# include <time.h>
# include <stdlib.h>

/*
Jogo para o jogador advinhar o número;
O programa inicia perguntando o range da amostra;
Após isso pergunta os números a que o utlizador deverá incluir na amostra;
Pergunta o número de tentativas;
incia o jogo;
Acaba o jogo perdendo ou ganhando;
*/
void main(){

int range;

printf("Digite o range da sua amostra: ");
scanf("%i", &range);

int amostra [range];
int i;

for(i = 0; i < range; i++){
    printf("\nDigite aqui o numero que pretende colocar na amostra: ");
    printf("%i -", i);
    scanf("%i", &amostra[i]);
}

int tentativas;

printf("Digite aqui o numero de tentativas: ");
scanf("%i", &tentativas);

srand(time(0));

int num;

num = amostra[rand()%(range - 1+1)+1];

printf("%i\n", num);

int numEsc;

while( numEsc != num && tentativas >= 0){
    if(tentativas > 0) {
        printf("Acerte o numero: ");
        scanf("%i", &numEsc);
        tentativas--;
    }
    else{
        printf("Perdeu o jogo!!!");
        break;
    }
    
    }

if(tentativas>0){
printf("Ganhou o jogo!!!");
}


}