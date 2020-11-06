#include "include/matrix.h"

int main(){
    Matrix* mtx = matrix_create(2, 2);
    //matrix_destroy(mtx);
    matrix_assign_element(mtx, 0, 0, 2);
    return 0;
}