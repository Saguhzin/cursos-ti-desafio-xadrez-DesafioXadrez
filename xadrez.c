#include <stdio.h>
#include <stdlib.h>

void torre(int n){ //Movimento Torre
   

    printf("Direita\n"); 

    if (n < 5) torre(n + 1); // Trava e incrementa a funcao
  
}
void rainha (int n) { //Movimento Rainha
   
   
     printf("Direita\n"); 
     if (n < 8) rainha(n + 1);

}
void bispo(int n){ //Movimento Bispo
  
   for (int i = 1; i < 2; i++) {

      for (int j = 1; j < 2; j++) {
         printf("Cima, ");
      }  

      printf("Direita\n");
   }
    if (n < 5) bispo(n + 1);
    
}
void cavalo(int n){
  
  for (int i = 1; i < 2; i++) {

      for (int j = 1; j < 3; j++) {
         printf("Cima\n");
      }  

      printf("Direita\n");
   }
    
}

int main(){

//==========================================================
//     Declarando variaveis :
//==========================================================

    int c = 1;  //numero de casas que inicia;

    torre(c);
    rainha(c);
    bispo(c);
    cavalo(c);

   return 0; 
}
