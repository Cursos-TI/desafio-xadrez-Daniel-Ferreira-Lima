#include <stdio.h>

void movertorre(int casas){    //Recursão do movimento da torre//  
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas-1);
    }
}
void moverbispo(int casas) {
    if (casas > 0){

    //Loop externo vertical//
    for (int i = 0; i < 1; i++) {
        //Loop interno horizontal//
        for (int j = 0; j < 1; j++) {
            printf("Direita ");
        }
        printf("Cima\n");
    }
    
    //Recursão delimita quantos loops faltam//
    moverbispo(casas - 1);
   }
}

void moverrainha(int casas){ //Recursão do movimento da rainha//
    if (casas > 0) {
        printf("Direita\n");
        moverrainha(casas-1);
    }
}

int main() {
    
  int t, r, b, c1, c2; //Declarando as variaveis que armazenam o número de casas que cada peça irá andar//
  t = 5; 
  b = 5;
  r = 8;
  c1 = 2; //Adicionando a variavel do cavalo// 
  c2 = 1; 

  movertorre(t);
  printf("\n");
  moverbispo(b);
  printf("\n");
  moverrainha(r);
  printf("\n");
  for (int i = 1; i <= c1; i++)  //Realizando a movimentação do cavalo com loops aninhados//
  {
    for (int j = 0  ; j < c2; j++)
    {
        if (i < c1 ){
            continue;
        }
        printf("Direita\n"); //Realizando a última movimentação//
        break;
    }
    printf("Cima\n");
  }
return 0;
}