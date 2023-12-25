#include <stdio.h>
#include "smvector.h"
#include "class_gradebook.h"


int main(void)
{	
	Class_gradesbook_t class_A;

	add_subject(&class_A, subject1, "math");

	char students_names[max_students][20] = { "Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan",
											  "Judy", "Kevin", "Linda", "Mallory", "Nancy", "Oscar", "Peggy", "Quentin", "Randy",
											  "Sybil", "Trudy", "Victor", "Wendy", "Xavier", "Yvonne", "Zoe", "Alex", "Ben", "Cathy", 
											  "Diana", "Emily", "Fred", "George" };

	for (int i = student1; i < max_students; i++)
	{
		add_student(&class_A, i, students_names[i]);
	}

	for (int i = student1; i < max_students; i++)
	{
		for (int j = 0; j < rand() % 5 + 1; j++)
		{
			add_evaluation(&class_A, subject1, i, rand() % 6 + 1);
		}
	}

	print_gradebok(&class_A);


	return 0;
}