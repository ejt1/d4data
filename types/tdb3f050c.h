/**
 * Definition: tdb3f050c
 * Hash: db3f050c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdb3f050c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT tPhaseName;
  DT_POLYMORPHIC_VARIABLEARRAY unk_fcb7313;
  DT_INT unk_d0d932b;
  DT_INT unk_9a8200e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
