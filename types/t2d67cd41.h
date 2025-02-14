/**
 * Definition: t2d67cd41
 * Hash: 2d67cd41
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2d67cd41 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoBuffPower;
  DT_UINT unk_6c4bff7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
