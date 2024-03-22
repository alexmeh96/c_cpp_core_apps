SHELL=/bin/bash
BUILD_DIR=build
BIN_DIR=bin
# заношу в переменную названия всех файлов src/*.c у которых расширением .c, находящихся в src/
SRCS=$(wildcard src/*.c)
TESTS=$(wildcard tests/*.c)
# заношу в переменную названия всех файлов build/*.o, которые соответствуют всем названиям файлов src/*.c
OBJS=$(subst src/,${BUILD_DIR}/,${SRCS:.c=.o})
TOBJS=${subst tests/,${BUILD_DIR}/,${TESTS:.c=.o}}

# обозначаем, что эти цели не будут файлами, а будут выполнять функцию только команд
.PHONY: all clean build build_test run_test

all: build build_test run_test run_lint

build: ${BIN_DIR}/app

build_test: ${BIN_DIR}/test_app

run: ${BIN_DIR}/app | create_${BIN_DIR}
	./${BIN_DIR}/app

run_test: ${BIN_DIR}/test_app | create_${BIN_DIR}
	./${BIN_DIR}/test_app

# создать цeли всех фалов .o в build/, которые зовисят от соответствующих файлов .с
# '| create_${BUILD_DIR}' означает, что если файл создан, то не будет обращать внимание на его обновления, чтобы выполнить эту цель
# $@ представляет текущую цель (имя объектного файла)
# $< представляет первый зависимый файл (исходный файл)
${BUILD_DIR}/%.o: %.c | create_${BUILD_DIR}
	gcc -c -o $@ $<

${BUILD_DIR}/%.o: src/%.c | create_${BUILD_DIR}
	gcc -c -o $@ $<

${BUILD_DIR}/%.o: tests/%.c | create_${BUILD_DIR}
	gcc -c -o $@ $<

# цель bin/app, которая зависит от файлов в переменной OBJS, build/main.o и bin
${BIN_DIR}/app: ${OBJS} ${BUILD_DIR}/main.o | create_${BIN_DIR}
	gcc -o $@ ${OBJS} ${BUILD_DIR}/main.o

${BIN_DIR}/test_app: ${TOBJS} ${OBJS} ${BUILD_DIR}/tests.o | create_${BIN_DIR}
	gcc -o $@ ${TOBJS} ${OBJS} ${BUILD_DIR}/tests.o

run_lint:
	cpplint ${SRCS} ${TESTS}

create_${BUILD_DIR}:
# если файла ${BUILD_DIR} не существует, то создать его
ifeq ("$(wildcard ${BUILD_DIR})","")
	mkdir ${BUILD_DIR}
endif

create_${BIN_DIR}:
ifeq ("$(wildcard ${BIN_DIR})","")
	mkdir ${BIN_DIR}
endif
	
clean:
	rm -rf ${BUILD_DIR}
	rm -rf ${BIN_DIR}

vars:
	echo "srcs=${SRCS}"
	echo "objs=${OBJS}"
	echo "tests=${TESTS}"
	echo "tobjs=${TOBJS}"