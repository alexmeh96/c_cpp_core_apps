#include <stdio.h>

#include "car.h"
#include "engine.h"

int main() {
    struct engine_t* engine = create_engine("engine_tyrbo");
    struct car_t* car = create_car("BMW", engine);

    printf("%s\n", car_get_name(car));
    printf("%s\n", car_get_engine_type(car));

    car_destroy(car);

    printf("%s\n", engine_get_type(engine));

    engine_destroy(engine);
    return 0;
}