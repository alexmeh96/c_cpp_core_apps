пример использования инкапсуляции, где все поля структуры недоступны коду, который его использует(приватные поля)

```shell
gcc -c main.c -o bin/main.o
gcc -c car.c -o bin/car.o
gcc bin/main.o bin/car.o -o bin/app
./bin/app
```


