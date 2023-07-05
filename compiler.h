//
// Created by David Ensikat on 3/7/2023.
//

#ifndef CLOX__COMPILER_H_
#define CLOX__COMPILER_H_

#include "chunk.h"

bool compile(const char* source, Chunk* chunk);

#endif //CLOX__COMPILER_H_
