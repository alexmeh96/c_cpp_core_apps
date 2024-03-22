#include <stdio.h>

extern int foo();
extern int bar();

int main() {
    printf("%d\n", foo() + bar());
    return 0;
}
