#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "person_p.h"

typedef struct {
    person_t person;
    char* college;
} student_t;

student_t* create_student() {
    return (student_t*)malloc(sizeof(student_t));
}

void ctor_student(student_t* student, const char* name, int age, const char* college) {
    ctor_person((struct person_t *)student, name, age);
    student->college = (char*)malloc(16 * sizeof(char));
    strcpy(student->college, college);
}

char* student_get_college(student_t* student) {
    return student->college;
}

void student_destroy(student_t* student) {
    free(student->college);
    person_destroy((struct person_t*)student);
}