#include "student.h"

void student_init(Student_t* student, int id, char name[])
{
	student->student_id = id;
	#ifdef VSC
	strcpy_s(student->name, student_name_len, name);
	#else
	strncpy(student->name, name, student_name_len);
	#endif // VSC
}

