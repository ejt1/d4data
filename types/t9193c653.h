/**
 * Definition: t9193c653
 * Hash: 9193c653
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9193c653 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_STRING_FORMULA tChance;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
