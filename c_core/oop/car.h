#ifndef CAR_H
#define CAR_H

typedef struct {
    char name[32];
    int age; 
} car_t;

void car_construct(car_t*, const char*);
void car_destructor(car_t*);
int car_get_name(car_t*);

#endif