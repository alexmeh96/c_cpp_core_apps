пример использования инкапсуляции, где все поля структуры доступны коду, который его использует

```shell
gcc -c main.c -o bin/main.o
gcc -c car.c -o bin/car.o
gcc bin/main.o bin/car.o -o bin/app
./bin/app
```


