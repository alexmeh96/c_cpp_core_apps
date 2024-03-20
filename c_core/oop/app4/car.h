#ifndef CAR_H
#define CAR_H

struct car_t;
struct engine_t;

struct car_t* create_car(char*, struct engine_t*);
char* car_get_name(struct car_t*);
char* car_get_engine_type(struct car_t*);
void car_destroy(struct car_t*);

#endif