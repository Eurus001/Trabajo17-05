#include <stdio.h>
#include <stdlib.h>


int main(){

   int filas, columnas;

    printf("Programa de matrices\n");
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

   int **matriz1 = (int **)malloc(filas * sizeof(int *));
    if (matriz1 == NULL) {
        printf("No se pudo asignar memoria.");
        return 1;
    }

    for (int i = 0; i < filas; i++) {
        matriz1[i] = (int *)malloc(columnas * sizeof(int));
        if (matriz1[i] == NULL) {
            printf("No se pudo asignar memoria.");
            return 1;
        }
    }

    for (int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            matriz1[i][j] = 0;
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz identidad\n");

    for (int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(i == j){
               matriz1[i][j] = 1;
               printf("%d\t", matriz1[i][j]);
            } else {
               printf("%d\t", matriz1[i][j]);
            }
        }
         printf("\n");
    }

    return 0;
}
