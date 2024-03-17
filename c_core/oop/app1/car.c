#include <string.h>
#include "car.h"

void car_construct(car_t* car, const char* name) {
    strcpy(car->name, name);
    car->age = 2005;
}

char* car_get_name(car_t* car) {
    return car->name;
}