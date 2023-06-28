//
// Created by David Ensikat on 28/6/2023.
//

#ifndef CLOX__VALUE_H_
#define CLOX__VALUE_H_

#include "common.h"

typedef double Value;

typedef struct {
  int capacity;
  int count;
  Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif //CLOX__VALUE_H_
