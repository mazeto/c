tcc -fpic -shared -o lib/libclass.so src/class.c
tcc -Llib -o bin/classEx src/classEx.c -lclass
LD_LIBRARY_PATH=lib bin/classEx Mazeto 28