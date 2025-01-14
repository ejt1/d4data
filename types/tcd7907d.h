/**
 * Definition: tcd7907d
 * Hash: cd7907d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcd7907d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
