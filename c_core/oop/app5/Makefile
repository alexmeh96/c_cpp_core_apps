
build/app: build/student.o build/person.o build/main.o | build
	gcc build/main.o build/person.o build/student.o -o build/app

run: build/app | build
	./build/app

build:
	mkdir build

build/person.o: person.c | build
	gcc -c -o build/person.o person.c

build/student.o: student.c | build
	gcc -c -o build/student.o student.c

build/main.o: main.c | build
	gcc -c -o build/main.o main.c


clean:
	rm -rf build