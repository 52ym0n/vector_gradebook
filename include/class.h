#ifndef class_h
#define class_h

#include "smvector.h"
#include "Subject.h"
#include "student.h"
#include "stdio.h"

typedef struct Class
{
	Vector_t students;
	Subject_t subject1;

}Class_t;

void class_init(Class_t* class, int subject_id, char subject_name[], int init_vector_size);
void class_add_student(Class_t* class, int student_id, char student_name[]);
void class_print_class_info(Class_t* class);

#endif