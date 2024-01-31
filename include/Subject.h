#ifndef subject_h
#define subject_h

#include "smvector.h"
#include "Eval.h"
#include "strcpy.h"

#define subject_name_len 31

typedef struct Subject
{
	int subject_id;
	char name[subject_name_len];
	Vector_t evaluations;

}Subject_t;

void subject_init(Subject_t* subject, int subject_id, char name[], int init_vector_size);
void subject_add_evaluation(Subject_t* subject, int student_id, char date[], int new_evaluation);

#endif