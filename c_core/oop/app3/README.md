пример использования композиции, когда внешний объект(car_t) полностью контролирует время жизни внутреннего объекта(engin_t)

```shell
gcc -c main.c -o bin/main.o
gcc -c car.c -o bin/car.o
gcc -c engine.c -o bin/engine.o
gcc bin/main.o bin/car.o bin/engine.o -o bin/app
./bin/app
```
