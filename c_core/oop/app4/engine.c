#include <stdlib.h>
#include <string.h>

typedef struct {
    char type[32];
} engine_t;


engine_t* create_engine(char* type) {
    engine_t* engine = (engine_t*)malloc(sizeof(engine_t));
    strcpy(engine->type, type);
    return engine;
}

char* engine_get_type(engine_t* engine) {
    return engine->type;
}

void engine_destroy(engine_t* engine) {
    free(engine);
}