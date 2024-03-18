#include <stdio.h>
#include "car.h"

int main() {
    struct car_t* car = create_car("Audi", 2005);
    printf("%s\n", car_get_name(car));
}