/**
 * Definition: t8a6875b4
 * Hash: 8a6875b4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8a6875b4 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_FIXEDARRAY<DT_INT, 5> fPlayerClass;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
