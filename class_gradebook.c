#include "class_gradebook.h"

void add_student(Class_gradesbook_t* gb, students_ids_et student_id, char name[])
{
	gb->students[student_id].id = student_id;
	for (int i = 0; i < sizeof(name); i++)
	{
		gb->students[student_id].name[i] = name[i];
	}
	
}

void add_subject(Class_gradesbook_t* gb, subjects_ids_et subject_id, char name[])
{
	gb->subjects[subject_id].id = subject_id;
	for (int i = 0; i < sizeof(name); i++)
	{
		gb->subjects[subject_id].name[i] = name[i];
	}
	for (int i = student1; i < max_students; i++)
	{
		init_vector(&gb->subjects[subject_id].grades[i], 1); // C5045 warning how to fix ?
	}
}
void add_evaluation(Class_gradesbook_t* gb, subjects_ids_et subject_id, students_ids_et student_id, int evaluation)
{	
	add_to_vector(&gb->subjects[subject_id].grades[student_id], evaluation);

}

void print_gradebok(Class_gradesbook_t* gb)
{
	for (int subj_id = 0; subj_id < max_subjects; subj_id++)
	{
		printf("%s", &gb->subjects->name);
		for (int stud_id = 0; stud_id < max_students; stud_id++)
		{
			printf("\n  %s: ", &gb->students[stud_id].name);
			for (size_t eval_id = 0; eval_id < gb->subjects[subj_id].grades[stud_id].count; eval_id++)
			{
				printf("%d ", gb->subjects[subj_id].grades[stud_id].array[eval_id]);
			}
		}
	}
}