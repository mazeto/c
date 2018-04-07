#ifndef __CLASS_H__
#define __CLASS_H__

#include <inttypes.h>

typedef struct obj obj;

/* Constructor */
obj * newObj(uint8_t *, uint8_t);

/* Methods, setters and getters */
void setObjName(obj *, uint8_t *);
void setObjAge(obj *, uint8_t);
uint8_t * getObjName(obj *);
uint8_t   getObjAge(obj *);

/* Destructor */
void delObj(obj *);

#endif
