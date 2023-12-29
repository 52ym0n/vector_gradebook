#include "class_gradebook.h"


void add_subject(Class_gradesbook_t* gb, subjects_ids_et subject_id, char name[])
{
	gb->subjects[subject_id].id = subject_id;
	int j = 0;
	while ((j < 19) || name[j] == 0)
	{
		gb->subjects[subject_id].name[j] = name[j];
		j++;
	}
	gb->subjects[subject_id].name[j] = 0;
	for (int i = 0; i < 32; i++)
	{
		init_vector(&gb->subjects[subject_id].grades, 1); // C5045 warning how to fix ?
	}
}
void add_evaluation(Class_gradesbook_t* gb, subjects_ids_et subject_id, int evaluation)
{	
	add_to_vector(&gb->subjects[subject_id].grades, evaluation);

}

void print_gradebok(Class_gradesbook_t* gb)
{
	for (int subj_id = 0; subj_id < max_subjects; subj_id++)
	{
		printf("%s", &gb->subjects->name);
		for (int stud_id = 0; stud_id < 32; stud_id++)
		{
			printf("\n  %s: ", &gb->students.array[stud_id].name);
			for (size_t eval_id = 0; eval_id < gb->subjects[subj_id].grades.count; eval_id++)
			{
				printf("%d ", gb->subjects[subj_id].grades.array[eval_id]);
			}
		}
	}
}