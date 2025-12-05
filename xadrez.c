#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {
    
  int t, r, b, c1, c2; //Declarando as variaveis que armazenam o número de casas que cada peça irá andar//
  t = 5; 
  b = 5;
  r = 8;
  c1 = 2; //Adicionando a variavel do cavalo 
  c2 = 1; 

  for (int i = 0; i < t; i++){ //Realizando a movimentação da torre com FOR//
    printf("Direita\n");        //A CADA VERIFICAÇÃO DA CONDIÇÃO UMA CASA SERÁ ANDADA PELA TORRE//
  }
  int i = 0;
  while (i<b){               //Realizando a movimentação do bispo com WHILE// O NÚMERO DE MOVIMENTOS FOI DEFINIDO NO INICIO
    printf("Cima, Direita\n");//ENQUANTO i FOR MENOR QUE b O BISPO VAI ANDAR 

    i++;
  }
  
  i = 0;
  do{                 //Realizando a movimentação da rainha com DO - WHILE// 
    printf("Esquerda\n"), i++; //ELA VAI ANDAR PRIMEIRO E DEPOIS O SISTEMA FAZ A VERIFICAÇÃO//
  } while (i<r);
  
  printf("\n");    //Adicionando uma linha em branco para separar os comandos impressos;
  for (int i = 0; i < c2; i++)
  {
    //Realizando o loop dentro do for que vai andar o cavalo para a esquerda
    for(int j = 0; j < c1; j++){
     printf("Baixo\n"); //Esse for serve para andar duas casas pra baixo para representar como o cavalo anda           
    }
   printf("Esquerda\n");
  }
    
    return 0;
}
