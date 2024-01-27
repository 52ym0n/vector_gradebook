#ifndef student_h
#define student_h
#include "string.h"

#define  student_name_len 31

typedef struct Student
{
	int student_id;
	char name[student_name_len];
}Student_t;

void student_init(Student_t* student, int id, char name[]);

#endif
