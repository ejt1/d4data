/**
 * Definition: t899530f1
 * Hash: 899530f1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t899530f1 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eFilterInequality;
  DT_FLOAT flTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
