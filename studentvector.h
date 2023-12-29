#ifndef studentvector_h
#define studentvector_h

#include <stdlib.h>

typedef struct Student
{
	int id;
	char name[24];

}Student_t;

typedef struct Vector_student
{
	size_t count;
	size_t capacity;
	Student_t* array;
}Vector_student_t;

void init_student_vector(Vector_student_t* vector, size_t init_size);
void add_to_student_vector(Vector_student_t* vector, int student_id, char student_name[]);
//int get_from_student_vector(Vector_student_t* vector, int index);
//void edit_data_in_student_vector(Vector_student_t* vector, int index, int new_data);
//void remove_last_from_student_vector(Vector_student_t* vector);

#endif