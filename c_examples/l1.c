#include <stdio.h>

int proximo_id(void);

int main(void) {
  printf("%d ", proximo_id());
  printf("%d ", proximo_id());
  printf("%d ", proximo_id());
  printf("%d ", proximo_id());
  printf("%d ", proximo_id());

  printf("\n");

  return 0;
}

int proximo_id(void) {
  static int id = 0;
  
  return ++id;
}
