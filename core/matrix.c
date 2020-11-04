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