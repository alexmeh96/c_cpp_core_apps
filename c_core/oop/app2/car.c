#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
} car_t;

car_t* create_car(const char* name, int age){
    car_t* car = (car_t*)malloc(sizeof(car_t));
    strcpy(car->name, name);
    car->age = age;

    return car; 
}

char* car_get_name(car_t* car) {
    return car->name;
}