struct person_t;

struct person_t* create_person();
void ctor_person(struct person_t*, const char*, int);
char* person_get_name(struct person_t*);
void person_destroy(struct person_t*);