пример использования инкапсуляции, где все поля структуры доступны коду, который его использует

```shell
gcc main.c -o bin/main.o
gcc car.c -o bin/car.o
gcc -c main.o car.o -o bin/app.out
```


