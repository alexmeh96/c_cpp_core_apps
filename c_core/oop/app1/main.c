#include <stdio.h>

#include "car.h"

int main(void) {
    car_t car;
    car_construct(&car, "BMV");
    
    printf("%s\n", car_get_name(&car)); 
    return 0;
}