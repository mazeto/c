#include <stdlib.h>
#include <inttypes.h>

/* $CC -fpic -shared -o ../bin/libclass.so class.c */

/* typedef struct obj obj; */

typedef struct obj {
  uint8_t * name;
  uint8_t age;
} obj;

static void objInit(obj * this, uint8_t * name, uint8_t age){
  (*this).name = name;
  (*this).age  = age;
};

obj * newObj(uint8_t * name, uint8_t age){
  obj * obj = malloc(sizeof(obj));
  objInit(obj, name, age);
  return obj;
};

void setObjName(obj * this, uint8_t * name){
  (*this).name = name;
};

void setObjAge(obj * this, uint8_t age){
  (*this).age = age;
};

uint8_t * getObjName(obj * this){
  return (*this).name;
};
uint8_t getObjAge(obj * this){
  return (*this).age;
};

void delObj(obj * this){
  free(this);
};
