#include <stdio.h>
#include "smvector.h"
#include "class_gradebook.h"
#include <string.h>


int main(void)
{	
	Class_gradesbook_t class_A;

	add_subject(&class_A, subject1, "math");
	init_student_vector(&class_A.students, 1);

	char students_names[32][24] = { "Alice jones", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan",
											  "Judy", "Kevin", "Linda", "Mallory", "Nancy", "Oscar", "Peggy", "Quentin", "Randy",
											  "Sybil", "Trudy", "Victor", "Wendy", "Xavier", "Yvonne", "Zoe", "Alex", "Ben", "Cathy", 
											  "Diana", "Emily", "Fred", "George" };

	int students_max = rand() % 32 -5;
	

	Student_t stud1;

	for (int i = 0; i < students_max; i++)
	{

		stud1.id = i;
		strcpy_s(stud1.name,24, students_names[i]);
		student_vector_add(&class_A.students, stud1);
	}


	for (int i = 0; i < students_max; i++)
	{
		printf("%s\n", class_A.students.array[i]->name);
	}

	

	//for (int i = 0; i < 32; i++)
	//{
	//	for (int j = 0; j < rand() % 5 + 1; j++)
	//	{
	//		add_evaluation(&class_A, subject1, rand() % 6 + 1);
	//	}
	//}

	//print_gradebok(&class_A);


	return 0;
}

// cleanup interface, one file one struct
// every srtruct must have <struct_name>_init()
//	<struct_name>_init()
//		define name len
//		darray <struct_name>_init() <struct_name>_pushback() <struct_name>_destroy() <struct_name>_getter()
//		1 przediot, dodawaæ studentów dodawaæ oceny na tablicach dynamicznych 
