#include "smvector.h"


void init_vector(Vector_t* vector, size_t init_size)
{
	vector->count = 0;
	vector->capacity = init_size;
	vector->array = malloc(init_size * sizeof(int));
}

void add_to_vector(Vector_t* vector, int new_data)
{
	if (vector->count == vector->capacity)
	{
		vector->capacity *= 2;
		int* tmp = realloc(vector->array, vector->capacity * sizeof(int));
		if (tmp != NULL)
		{
			vector->array = tmp;
		}

	}
	
	vector->array[vector->count] = new_data;
	vector->count++;
}

int get_from_vector(Vector_t* vector, int index)
{
	return vector->array[index];
}

void edit_data_in_vector(Vector_t* vector, int index, int new_data)
{
	vector->array[index] = new_data;
}

void remove_last_from_vector(Vector_t* vector)
{
	vector->count += -1;
}

