#include <stdio.h>
#include <stdlib.h>
#include "class.h"

/* $CC -L/path/to/libclass.so -o classEx classEx.c -lclass

   The shared object must be on the LD_LIBRARY_PATH
   environment variable or in the folder /lib
   For testing purposes, run this program with

   >LD_LIBRARY_PATH="../lib" ../bin/classEx
*/

int main(int argc, char ** argv){

  if(argc<2) return 1;

  obj * myObj = newObj(argv[1], atoi(argv[2]));

  printf("obj.name = %s\nobj.age = %d\n",
    getObjName(myObj), getObjAge(myObj));

  delObj(myObj);

  return 0;
}
