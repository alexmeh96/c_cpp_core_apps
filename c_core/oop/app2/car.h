#ifndef CAR_H
#define CAR_H

struct car_t;

struct car_t* create_car(const char*, int);
char* car_get_name(struct car_t*);
void car_destroy(struct car_t*);

#endif