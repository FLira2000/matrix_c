#include "include/matrix.h"
#include <stdio.h>
int main(){
    Matrix* mtx = matrix_create(2, 2);
    //matrix_destroy(mtx);
    matrix_assign_element(mtx, 0, 0, 2);
    int xpto = matrix_access_element(mtx, 0, 0);

    int lines = matrix_get_lines(mtx);
    int cols = matrix_get_columns(mtx);

    matrix_random_fill(mtx);
    matrix_print(mtx);

    Matrix* mtx2 = matrix_copy(mtx);
    matrix_assign_element(mtx2, 1, 1, 1010101);
    matrix_print(mtx2);


    matrix_keyboard_fill(mtx);
    matrix_keyboard_fill(mtx2);

    Matrix* multiplied = matrix_multiply(mtx, mtx2);
    matrix_print(multiplied);

    Matrix* transp = matrix_transpose(multiplied);
    matrix_print(transp);

    Matrix* symm = matrix_create(3, 3);
    matrix_keyboard_fill(symm);
    printf("%d\n", matrix_symmetrical(symm));

    return 0;
}