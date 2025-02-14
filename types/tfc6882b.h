/**
 * Definition: tfc6882b
 * Hash: fc6882b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfc6882b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT uProfileAwardId;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
