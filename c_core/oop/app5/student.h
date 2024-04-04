struct student_t;

struct student_t* create_student();
void ctor_student(struct student_t*, const char*, int, const char*);
char* student_get_college(struct student_t*);
void student_destroy(struct student_t*);