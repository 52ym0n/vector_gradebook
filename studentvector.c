#include "studentvector.h"
#include <string.h>

void init_student_vector(Vector_student_t* vector, size_t init_size)
{
	vector->count = 0;
	vector->capacity = init_size;
	vector->array = malloc(init_size * sizeof(Student_t*));
}

void student_vector_add(Vector_student_t* vector, Student_t s)
{
	if (vector->count == vector->capacity)
	{
		vector->capacity *= 2;
		Student_t** tmp = realloc(vector->array, vector->capacity * sizeof(Student_t*));
		if (tmp != NULL)
		{
			vector->array = tmp;
		}

	}


	vector->array[vector->count] = malloc(sizeof(Student_t*));
	if (vector->array[vector->count] == NULL) return;
		

	strcpy_s(vector->array[vector->count]->name, 24, s.name);

	vector->array[vector->count]->id = s.id;

	vector->count++;
}

