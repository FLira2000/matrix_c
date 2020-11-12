/*                  Created by Fábio Lira
    github.com/FLira2000
    Use is free.
*/

//The Matrix Structure. Holds a dual pointer to a two dimensional array, and two integers for the number of lines and columns.
typedef struct _matrix{
    int **elements;
    int lines;
    int columns;
}Matrix;

//Create then returns a pointer to a new Matrix structure. Expects the line and column numbers in arguments.
Matrix* matrix_create(int lines, int columns);

//Destroy every data associated to the pointer. Then frees the memory addresses used.
void matrix_destroy(Matrix* matrix_pointer);

//Assigns a number to a specific line and column of a matrix. Requires the Matrix pointer, the line and column, then the value.
void matrix_assign_element(Matrix* matrix_pointer, int line, int column, int value);

//Get an element from the matrix. Expects the Matrix pointer, and the line and columns' values.
int matrix_access_element(Matrix* matrix_pointer, int line, int column);

//Returns the number of lines of a matrix. Requires the Matrix pointer.
int matrix_get_lines(Matrix* matrix_pointer);

//Returns the number of columns off a matrix. Requires the Matrix pointer.
int matrix_get_columns(Matrix* matrix_pointer);

//Fill a matrix with pseudo-randomic values. Requires the Matrix pointer.
void matrix_random_fill(Matrix* matrix_pointer);

//Prints the matrix values in terminal. Expects a Matrix pointer.
void matrix_print(Matrix* matrix_point);

//Create and return a new Matrix structure pointer, based on an existent Matrix's values. Requires a Matrix pointer.
Matrix* matrix_copy(Matrix* matrix_pointer);

/*Multiplies the elements of a matrix, by another matrix, and creates a new Matrix based on this calculation values. Only works with compatible matrixed, since the 
 linear algebra does rules.*/
Matrix* matrix_multiply(Matrix* matrix_pointer1, Matrix* matrix_pointer2);

/*Fills an matrix with input values from the keyboard, one by one. Procedure. Expects a Matrix pointer by argument. */
void matrix_keyboard_fill(Matrix* matrix_pointer);

//Returns the matrix count of values. 
int matrix_count(Matrix* matrix_pointer);

//Returns a pointer to a new Matrix object, which is the tranpose of a Matrix passed by argument.
Matrix* matrix_transpose(Matrix* matrix_pointer);

//Returns 1 if the matrix is symmetrical or 0 if not.
int matrix_symmetrical(Matrix* matrix_pointer);