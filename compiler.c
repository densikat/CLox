//
// Created by David Ensikat on 3/7/2023.
//

#include <stdio.h>

#include "common.h"
#include "compiler.h"
#include "scanner.h"

void compile(const char* source) {
  initScanner(source);
  for (;;) {
	Token token = scanToken();
  }
}