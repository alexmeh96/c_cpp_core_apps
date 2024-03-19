#ifndef ENGINE_H
#define ENGINE_H

struct engine_t;

struct engine_t* create_engine(char*);
char* engine_get_type(struct engine_t*);
void engine_destroy(struct engine_t*);

#endif