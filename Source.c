#include <stdio.h>
#include "smvector.h"
#include "class_gradebook.h"


int main(void)
{	
	Class_gradesbook_t class_A;

	add_subject(&class_A, subject1, "math");
	init_student_vector(&class_A.students, 1);

	char students_names[32][20] = { "Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan",
											  "Judy", "Kevin", "Linda", "Mallory", "Nancy", "Oscar", "Peggy", "Quentin", "Randy",
											  "Sybil", "Trudy", "Victor", "Wendy", "Xavier", "Yvonne", "Zoe", "Alex", "Ben", "Cathy", 
											  "Diana", "Emily", "Fred", "George" };

	int students_max = rand() % 32 -5;
	for (int i = 0; i < students_max; i++)
	{
		add_to_student_vector(&class_A.students, i, students_names[i]);
	}


	for (int i = 0; i < students_max; i++)
	{
		printf("%s\n", class_A.students.array[i].name);
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