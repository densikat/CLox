//
// Created by David Ensikat on 28/6/2023.
//

#ifndef CLOX__DEBUG_H_
#define CLOX__DEBUG_H_

#include "chunk.h"

void disassembleChunk(Chunk* chunk, char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif //CLOX__DEBUG_H_
