#for box64
export BOX64_LOG=1
export LD_LIBRARY_PATH=/home/sunguoyun/box64/x64lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/home/sunguoyun/kzt_java/local:$LD_LIBRARY_PATH

## X86_64: build main
gcc -ldl -rdynamic -o main main.c

## LoongArch64: test kzt_main
gcc -fPIC -shared -lpthread -o local/libadd.so add.c
clear; ~/box64/build/box64 ./main
