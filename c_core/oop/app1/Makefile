
build/app: build/car.o build/main.o | build
	gcc build/main.o build/car.o -o build/app

run: build/app | build
	./build/app

build:
	mkdir build

build/car.o: car.c | build
	gcc -c -o build/car.o car.c

build/main.o: main.c | build
	gcc -c -o build/main.o main.c


clean:
	rm -rf build