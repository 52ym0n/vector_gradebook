#ifndef class_gradebook_h
#define class_gradebook_h

#include "smvector.h"
#include "studentvector.h"
#include <stdio.h>



typedef enum subjects_ids {
	subject1,
	max_subjects

}subjects_ids_et;


typedef struct Supject
{
	subjects_ids_et id;
	char name[20];
	Vector_t grades;

}Stubject_t;
	


typedef struct Class_gradesbook
{
	Vector_student_t students;
	Stubject_t subjects[max_subjects];
	
}Class_gradesbook_t;

void add_subject(Class_gradesbook_t* gb, subjects_ids_et subject_id, char name[]);
void add_evaluation(Class_gradesbook_t* gb, subjects_ids_et subject_id, int evaluation);
void print_gradebok(Class_gradesbook_t* bg);

#endif