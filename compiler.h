//
// Created by David Ensikat on 3/7/2023.
//

#ifndef CLOX__COMPILER_H_
#define CLOX__COMPILER_H_

#include "chunk.h"
#include "object.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif //CLOX__COMPILER_H_
