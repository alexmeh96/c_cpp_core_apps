// Copyright 2024 Alex

extern int foo();

int foo_test() {
    int v = foo();
    if (v == 55) {
        return 0;
    }
    return -1;
}
