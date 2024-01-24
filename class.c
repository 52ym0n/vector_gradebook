#include "class.h"

void class_init(Class_t* class, int subject_id, char subject_name[], int init_vector_size)
{
	vector_init(&class->students, init_vector_size);
	subject_init(&class->subject1, subject_id, subject_name, init_vector_size);
}

void class_add_student(Class_t* class, int student_id, char student_name[])
{
	Student_t* s_ptr = malloc(sizeof(Student_t));
	if (s_ptr == NULL) return;

	student_init(s_ptr, student_id, student_name);

	vector_push_back(&class->students, s_ptr);
}

void class_print_class_info(Class_t* class)
{
	for (int i = 0; i < (int)class->students.count; i++)
	{
		Student_t* s_ptr = vector_get(&class->students, i);
		printf("Student ID: %d\n", s_ptr->student_id);
		printf("Name: %s\n", s_ptr->name);
		printf("%s evaluations:\n", class->subject1.name);
		for (int j = 0; j < (int) class->subject1.evaluations.count; j++)
		{
			Eval_t* e_ptr = vector_get(&class->subject1.evaluations, j);
			if (e_ptr->student_id == s_ptr->student_id)
			{
				printf("\tDate: %s Evaluation: %d\n", e_ptr->date, e_ptr->evaluation);
			}
			
		}
		printf("\n");
	}
}