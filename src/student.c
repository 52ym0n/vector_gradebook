#include "student.h"

void student_init(Student_t* student, int id, char name[])
{
	student->student_id = id;
	strcpy_copy_string(student->name, name, student_name_len);
	
}

