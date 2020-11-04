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
Matrix* matrix_create(int, int);

//Destroy every data associated to the pointer. Then frees the memory addresses used.
void matrix_destroy(Matrix*);

//Assigns a number to a specific line and column of a matrix. Requires the Matrix pointer, the line and column, then the value.
void matrix_assign_element(Matrix*, int, int, int);

//Get an element from the matrix. Expects the Matrix pointer, and the line and columns' values.
int matrix_access_element(Matrix*, int, int);

//Returns the number of lines of a matrix. Requires the Matrix pointer.
int matrix_get_lines(Matrix*);

//Returns the number of columns off a matrix. Requires the Matrix pointer.
int matrix_get_columns(Matrix*);

//Fill a matrix with pseudo-randomic values. Requires the Matrix pointer.
void matrix_random_fill(Matrix*);

//Prints the matrix values in terminal. Expects a Matrix pointer.
void matrix_print(Matrix*);

//Create and return a new Matrix structure pointer, based on an existent Matrix's values. Requires a Matrix pointer.
Matrix* matrix_copy(Matrix*);

/*Multiplies the elements of a matrix, by another matrix, and creates a new Matrix based on this calculation values. Only works with compatible matrixed, since the 
 linear algebra does rules.*/
Matrix* matrix_multiply(Matrix*, Matrix*);

/*Fills an matrix with input values from the keyboard, one by one. */
Matrix* matrix_keyboard_fill(Matrix*);

// Returns the matrix count of values. 
int matrix_count(Matrix*);
