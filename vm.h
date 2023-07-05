//
// Created by David Ensikat on 1/7/2023.
//

#ifndef CLOX__VM_H_
#define CLOX__VM_H_

#include "chunk.h"
#include "value.h"

#define STACK_MAX 256

typedef struct {
  Chunk* chunk;
  uint8_t *ip;
  Value stack[STACK_MAX];
  Value* stackTop;
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(const char* source);
void push(Value value);
Value pop();

#endif //CLOX__VM_H_
