SHELL=/bin/bash

BUILD_DIR=build
BIN_DIR=bin
# заношу в переменную названия всех файлов src/*.c у которых расширением .c, находящихся в src/
SRCS=$(wildcard src/*.c)
TESTS=$(wildcard tests/*.c)
# заношу в переменную названия всех файлов build/*.o, которые соответствуют всем названиям файлов src/*.c
OBJS=$(subst src/,${BUILD_DIR}/,${SRCS:.c=.o})
TOBJS=${subst tests/,${BUILD_DIR}/,${TESTS:.c=.o}}

# .PHONY: all clean build build_test validate

all: ${BIN_DIR}/app ${BIN_DIR}/test_app validate cpplint

# создать цeли всех фалов .o в build/, которые зовисят от соответствующих файлов .с
# '| build' означает, что перед выполнением этого правила целевой каталог 'build' должен быть создан
# $@ представляет текущую цель (имя объектного файла)
# $< представляет первый зависимый файл (исходный файл)
${BUILD_DIR}/%.o: %.c | ${BUILD_DIR}
	gcc -c -o $@ $<

${BUILD_DIR}/%.o: src/%.c | ${BUILD_DIR}
	gcc -c -o $@ $<

${BUILD_DIR}/%.o: tests/%.c | ${BUILD_DIR}
	gcc -c -o $@ $<

# цель bin/app, которая зависит от файлов в переменной OBJS, build/main.o и bin
${BIN_DIR}/app: ${OBJS} ${BUILD_DIR}/main.o | ${BIN_DIR}
	gcc -o $@ ${OBJS} ${BUILD_DIR}/main.o

${BIN_DIR}/test_app: ${TOBJS} ${OBJS} ${BUILD_DIR}/tests.o | ${BIN_DIR}
	gcc -o $@ ${TOBJS} ${OBJS} ${BUILD_DIR}/tests.o

validate: ${BIN_DIR}/test_app | ${BIN_DIR}
	./${BIN_DIR}/test_app

cpplint:
	cpplint ${SRCS} ${TESTS}

${BUILD_DIR}:
	mkdir ${BUILD_DIR}

${BIN_DIR}:
	mkdir ${BIN_DIR}

clean:
	rm -rf ${BUILD_DIR}
	rm -rf ${BIN_DIR}

vars:
	echo "srcs=${SRCS}"
	echo "objs=${OBJS}"
	echo "tests=${TESTS}"
	echo "tobjs=${TOBJS}"