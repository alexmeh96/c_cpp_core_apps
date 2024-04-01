### Сборка кросс-компилятора gcc 

gcc: https://gcc.gnu.org/git.html

binutils: https://www.gnu.org/software/binutils/

Установка временных переменных окружения:
```shell
# директория, в которой будут размещатся собранные binutils и gcc
export PREFIX="/home/alex/settings/gcc-cross"
export PATH="$PREFIX/bin:$PATH"
# под какую платформу собираем
export TARGET=i686-elf
```

сконфигурировать Makefile для binutils и запустить сборку с установкой его в директорию PREFIX:
```shell
git clone git://sourceware.org/git/binutils-gdb.git
mkdir build-binutils
cd build-binutils
../binutils-gdb/configure --target=$TARGET --prefix="$PREFIX" --with-sysroot --disable-nls --disable-werror
make
make install
```

сконфигурировать Makefile для gcc и запустить сборку с установкой его в директорию PREFIX:
```shell
git clone git://gcc.gnu.org/git/gcc.git
mkdir build-gcc
cd build-gcc
../gcc/configure --target=$TARGET --prefix="$PREFIX" --disable-nls --enable-languages=c,c++ --without-headers
make all-gcc
make all-target-libgcc
make install-gcc
make install-target-libgcc
```

