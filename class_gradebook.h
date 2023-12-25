#ifndef class_gradebook_h
#define class_gradebook_h

#include "smvector.h"
#include <stdio.h>

typedef enum students_ids{
	student1, student2, student3, student4, student5, student6, student7, student8, student9, student10,
	student11, student12, student13, student14, student15, student16, student17, student18, student19,
	student20, student21, student22, student23, student24, student25, student26, student27, student28, student29,
	student30, student31, student32, 
	max_students
}students_ids_et;

typedef enum subjects_ids {
	subject1,
	max_subjects

}subjects_ids_et;


typedef struct Student
{
	students_ids_et id;
	char name[24];

}Student_t;

typedef struct Supject
{
	subjects_ids_et id;
	char name[20];
	Vector_t grades[max_students];

}Stubject_t;
	


typedef struct Class_gradesbook
{
	Student_t students[max_students];
	Stubject_t subjects[max_subjects];
	
}Class_gradesbook_t;


void add_student(Class_gradesbook_t* gb, students_ids_et student_id, char name[]);
void add_subject(Class_gradesbook_t* gb, subjects_ids_et subject_id, char name[]);
void add_evaluation(Class_gradesbook_t* gb, subjects_ids_et subject_id, students_ids_et student_id, int evaluation);
void print_gradebok(Class_gradesbook_t* bg);

#endif