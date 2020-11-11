/*                  Created by Fábio Lira
    github.com/FLira2000
    Use is free.
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/matrix.h"

Matrix* matrix_create(int lines, int columns){
    if(lines== 0 || columns == 0)
        return NULL;
    
    Matrix *mtx = (Matrix*) malloc(sizeof(Matrix));

    if(mtx == NULL) return NULL;

    mtx->columns = columns;
    mtx->lines = lines;

    mtx->elements = (int**) malloc(sizeof(int*) * lines);

    for(int i = 0; i < lines; i++){
        *(mtx->elements + i) = (int*) malloc(sizeof(int) * columns);
    }

    return mtx;
}

void matrix_destroy(Matrix* mtx){
    int *p = *mtx->elements;

    for(int i = 0; i > mtx->lines; i++)
    {
        free(p + i);
    }

    free(mtx->elements);
    free(mtx);
}

void matrix_assign_element(Matrix* mtx, int i, int j, int value){
    if(i > mtx->lines || j > mtx->columns){
        return;
    }

    int *p;
    p = *(mtx->elements + i);
    *(p + j) = value;
}

int matrix_access_element(Matrix* mtx, int i, int j){
    if(i > mtx->lines || j > mtx->columns)
        return 0x0;

    int *p = *(mtx->elements + i);
    return *(p + j);
}

int matrix_get_lines(Matrix* mtx){
    return mtx->lines;
}

int matrix_get_columns(Matrix* mtx){
    return mtx->columns;
}

void matrix_random_fill(Matrix* mtx){
    int *p;
    for(int i = 0; i < mtx->lines; i++){
        p = *(mtx->elements + i);
        for(int j = 0; j < mtx->columns; j++){
            *(p + j) = rand();
        }
    }
}

void matrix_print(Matrix* mtx){
    int *p;
    printf("Showing matrix %d X %d: \n", mtx->lines, mtx->columns);
    for(int i = 0; i < mtx->lines; i++){
        p = mtx->elements[i];
        for(int j = 0; j < mtx->columns; j++){
            printf("[%d]\t", *(p + j));
        }
        printf("\n");
    }
}
