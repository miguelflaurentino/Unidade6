/*
 * Por que o ponteiro criado com malloc está na heap, ele só deixa
 * de existir quando o programa libera ele com free(), se retornasse
 * o ponteiro de uma variável local, quando a main fosse acessar o
 * ponteiro ele estaria vazio, pois tinha deixado de existir quando
 * a função encerrou.
 * A responsabilidade do free() é de quem chamou a função.
 * */

#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n);

int main(void){
  int n;
  printf("Quantos inteiros: ");
  scanf("%d", &n);

  int *my_vector = cria_sequencia(n);
  
  printf("Saida esperada: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", my_vector[i]);
  }
  printf("\n");

  free(my_vector);

  return 0;
}

int *cria_sequencia(int n) {
  int *vector = (int *) malloc(sizeof(int) * n);

  if(vector == NULL) {
    printf("Out of memory.\n");
    return NULL;
  }

  for(int i = 0; i < n; i++) {
    vector[i] = i + 1;
  }

  return vector;
}
