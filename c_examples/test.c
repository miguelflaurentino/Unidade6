/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Valor para n: ");
    scanf("%d", &n);
    
    int *v = (int *) malloc(sizeof(int) * n);

    if(v == NULL) {
        printf("Out of memory.\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);
    v = NULL;

    return 0;
}
