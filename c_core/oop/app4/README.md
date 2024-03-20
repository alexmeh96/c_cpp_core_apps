пример использования агрегации, когда внешний объект(car_t) не контролтрует время жизни внутреннего объекта(engine_type).
Внутренний объект создаётся снаружи, и передаётся внешнему объекту

```shell
gcc -c main.c -o bin/main.o
gcc -c car.c -o bin/car.o
gcc -c engine.c -o bin/engine.o
gcc bin/main.o bin/car.o bin/engine.o -o bin/app
./bin/app
```
