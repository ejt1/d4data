/**
 * Definition: tb1bdda39
 * Hash: b1bdda39
 */

#pragma once

#include "../types.h"
#include "t80554fed.h"

#pragma push(pack, 1)

struct tb1bdda39 : public ComplexRead {
  DT_UINT dwType;
  t80554fed unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)