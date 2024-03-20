#include <stdlib.h>
#include <string.h>
#include "engine.h"

typedef struct {
    char name[32];
    struct engine_t* engine;
} car_t;

car_t* create_car(char* name, struct engine_t * engine) {
    car_t* car = (car_t*)malloc(sizeof(car_t));
    strcpy(car->name, name);
    car->engine = engine;
    return car;
}

char* car_get_name(car_t* car) {
    return car->name;
}

char* car_get_engine_type(car_t* car) {
    return engine_get_type(car->engine);
}

void car_destroy(car_t* car) {
    free(car);
}