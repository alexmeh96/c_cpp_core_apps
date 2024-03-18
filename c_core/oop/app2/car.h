#ifndef car_h
#define car_h

struct car_t;

struct car_t* create_car(const char*, int);
char* car_get_name(struct car_t*);

#endif