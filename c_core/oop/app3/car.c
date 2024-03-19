#include <stdlib.h>
#include <string.h>
#include "engine.h"

typedef struct {
    char name[32];
    int age;
    struct engine_t* engine;
} car_t;

car_t* create_car(char* name, int age, char* type) {
    car_t* car = (car_t*)malloc(sizeof(car_t));
    strcpy(car->name, name);
    car->age = age;
    car->engine = create_engine(type);
    return car;
}

char* car_get_name(car_t* car) {
    return car->name;
}

char* car_get_engine_type(car_t* car) {
    return engine_get_type(car->engine);
}

void car_destroy(car_t* car) {
    engine_destroy(car->engine);
    free(car);
}