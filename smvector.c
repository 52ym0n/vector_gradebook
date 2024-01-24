#include "smvector.h"

void vector_init(Vector_t* vector, size_t init_size)
{
	vector->count = 0;
	vector->capacity = init_size;
	vector->array = malloc(init_size * sizeof(void*));
}

void vector_push_back(Vector_t* vector, void* new_data_ptr)
{
	if (vector->count == vector->capacity)
	{
		vector->capacity += 10;
		void** tmp = realloc(vector->array, vector->capacity * sizeof(void*));
		if (tmp != NULL)
		{
			vector->array = tmp;
		}
	}
	vector->array[vector->count] = new_data_ptr;
	vector->count++;
}

void* vector_get(Vector_t* vector, int index)
{
	return vector->array[index];
}

void vector_destroy(Vector_t* vector)
{
	for (int i =  0; i < (int)vector->count; i++)
	{
		void* e_ptr = vector->array[i];
		free(e_ptr);
	}
	free(vector->array);
}

