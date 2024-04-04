#include <stdlib.h>
#include <string.h>
#include "person_p.h"

person_t* create_person() {
    return (person_t*)malloc(sizeof(person_t));
}

void ctor_person(person_t* person, const char* name, int age) {
    strcpy(person->name, name);
    person->age = age;
}

char* person_get_name(person_t* person) {
    return person->name;
}

void person_destroy(person_t* person) {
}