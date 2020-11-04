#include "include/matrix.h"

int main(){
    Matrix* mtx = matrix_create(2, 2);
    matrix_destroy(mtx);
    return 0;
}