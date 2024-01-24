#ifndef smvector_h
#define smvector_h

#include <stdlib.h>

typedef struct Vector
{
	size_t count;
	size_t capacity;
	void** array;
}Vector_t;

void vector_init(Vector_t* vector, size_t init_size);
void vector_push_back(Vector_t* vector, void* new_data_ptr);
void* vector_get(Vector_t* vector, int index);
void vector_destroy(Vector_t* vector);

#endif