/**
 * Definition: GameFlagSubcondition
 * Hash: 6bb2bca5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GameFlagSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_CHARARRAY<128> szLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
