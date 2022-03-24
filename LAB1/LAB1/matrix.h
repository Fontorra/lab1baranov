#ifndef matrix_h
#define matrix_h

#include <stdio.h>

#include "RingInfo.h"

typedef struct Matrix {
	void** matrix;
	int num_line;
	int num_column;
	RingInfo* ring;
} Matrix;


Matrix* CreateMatrix(int num_line, int num_column, RingInfo* ring);
void* DeleteMatrix(Matrix* matrix);
void* Transposition(Matrix* matrix);
void* MultMatrix(Matrix* matrix1, Matrix* matrix2, Matrix* res);
void* SumMatrix(Matrix* matrix1, Matrix* matrix2, Matrix* res);
#endif