#include <stdio.h>
#include <stdlib.h>

#include "person.h"
#include "student.h"

int main() {
    struct student_t* student = create_student();
    ctor_student(student, "alex", 25, "MIT");

    struct person_t* person = (struct person_t*)student;

    printf("%s\n", person_get_name(person));
    printf("%s\n", student_get_college(student));

    person_destroy(person);
    free(person);

    return 0;
}