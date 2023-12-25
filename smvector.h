#ifndef smvector_h
#define smvector_h

#include <stdlib.h>

typedef struct Vector
{
	size_t count;
	size_t capacity;
	int* array;
}Vector_t;

void init_vector(Vector_t* vector, size_t init_size);
void add_to_vector(Vector_t* vector, int new_data);
int get_from_vector(Vector_t* vector, int index);
void edit_data_in_vector(Vector_t* vector, int index, int new_data);
void remove_last_from_vector(Vector_t* vector);

#endif