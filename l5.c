/*
 * a diferença é que usar antes do free é tentar ler um espaço da
 * memória que havia sido devolvido ao SO.
 * Vazamento de memória é quando o programa encerra sem devolver
 * a memória alocada.
 * */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *v = (int *) malloc(sizeof(int) * 5);

  for(int i = 0; i < 5; i++) {
    v[i] = i;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  
  printf("%d\n", v[2]);

  free(v);

  // printf("%d\n", v[2]);

  return 0;
}
