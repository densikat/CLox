//
// Created by David Ensikat on 27/6/2023.
//

#ifndef CLOX__CHUNK_H_
#define CLOX__CHUNK_H_

#include "common.h"

typedef enum {
  OP_RETURN,
} OpCode;

typedef struct {
  uint8_t* code;
} Chunk;

#endif //CLOX__CHUNK_H_
