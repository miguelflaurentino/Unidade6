/*
 * Não, não dá para perceber.
 * Vazaram 4000 bytes.
 * */

#include <stdlib.h>

void aloca(void) {
  int *bloco = malloc(1000 * sizeof(int));
  bloco[0] = 1;
  /* falta o free(bloco) */
}

int main(void) {
  aloca();

  return 0;
}
