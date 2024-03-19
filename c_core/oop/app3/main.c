#include <stdio.h>
#include "car.h"

int main() {

    struct car_t* car = create_car("BMW", 2005, "engine-turbo");

    printf("%s\n", car_get_name(car));
    printf("%s\n", car_get_engine_type(car));

    car_destroy(car);

    return 0;
}