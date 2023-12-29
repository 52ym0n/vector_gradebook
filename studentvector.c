#include "studentvector.h"

void init_student_vector(Vector_student_t* vector, size_t init_size)
{
	vector->count = 0;
	vector->capacity = init_size;
	vector->array = malloc(init_size * sizeof(Student_t));
}

void add_to_student_vector(Vector_student_t* vector, int student_id, char student_name[])
{
	if (vector->count == vector->capacity)
	{
		vector->capacity *= 2;
		Student_t* tmp = realloc(vector->array, vector->capacity * sizeof(Student_t));
		if (tmp != NULL)
		{
			vector->array = tmp;
		}

	}

	vector->array[vector->count].id = student_id;

	int j = 0;
	while ((j < 23) || student_name[j] == 0)
	{
		vector->array[vector->count].name[j] = student_name[j];
		j++;
	}
	vector->array[vector->count].name[j] = 0;

	vector->count++;
}

