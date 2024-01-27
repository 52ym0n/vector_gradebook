#include <stdio.h>
#include "class.h"

int main(void)
{	
	char students_names[32][30] = { "Alice jones", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan",
											  "Judy", "Kevin", "Linda", "Mallory", "Nancy", "Oscar", "Peggy", "Quentin", "Randy",
											  "Sybil", "Trudy", "Victor", "Wendy", "Xavier", "Yvonne", "Zoe", "Alex", "Ben", "Cathy",
											  "Diana", "Emily", "Fred", "George" };

	Class_t AT1;

	class_init(&AT1, 0, "MATH", 10);

	for (int i = 0; i < 32; i++)
	{
		class_add_student(&AT1, i, students_names[i]);
	}

	for (int i = 0; i < 32; i++)
	{
		subject_add_evaluation(&AT1.subject1, i, "24-01-2024", 1);
	}
	
	class_print_class_info(&AT1);


	vector_destroy(&AT1.students);
	vector_destroy(&AT1.subject1.evaluations);


	return 0;
}

// cleanup interface, one file one struct
// every srtruct must have <struct_name>_init()
//	<struct_name>_init()
//		define name len
//		darray <struct_name>_init() <struct_name>_pushback() <struct_name>_destroy() <struct_name>_getter()
//		1 przediot, dodawaæ studentów dodawaæ oceny na tablicach dynamicznych 
