#include "include/matrix.h"

int main(){
    Matrix* mtx = matrix_create(2, 2);
    //matrix_destroy(mtx);
    matrix_assign_element(mtx, 0, 0, 2);
    int xpto = matrix_access_element(mtx, 0, 0);

    int lines = matrix_get_lines(mtx);
    int cols = matrix_get_columns(mtx);

    matrix_random_fill(mtx);
    return 0;
}