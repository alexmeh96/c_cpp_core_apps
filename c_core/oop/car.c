#include <string.h>
#include "car.h"

void car_construct(car_t* car, char* name) {
    strcpy(car->name, name);
    car->age = 2005;
}