#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Quantas notas? ");
  scanf("%d", &n);
  
  double *grades = (double *) malloc(n * sizeof(double));
  if(grades == NULL) {
    printf("Out of memory.\n");
    return 1;
  }

  printf("Digite as notas separadas por espaços: ");
  for(int i = 0; i < n; i++) {
    scanf("%lf", &grades[i]);
  }

  double soma;
  for(int i = 0; i < n; i++) {
    soma += grades[i];
  }

  free(grades);

  printf("Média: %.2lf\n", soma / n);

  return 0;
}
