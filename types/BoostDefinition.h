/**
 * Definition: BoostDefinition
 * Hash: 63d745f0
 */

#pragma once

#include "../types.h"
#include "t749eb37e.h"

#pragma push(pack, 1)

struct BoostDefinition : public ComplexRead {
  DT_CSTRING unk_37028d5;
  DT_CSTRING unk_2f44d38;
  DT_CSTRING unk_99de476;
  DT_INT64 nGold;
  DT_VARIABLEARRAY<t749eb37e> unk_19a8c24;
  DT_VARIABLEARRAY<DT_BYTE> unk_fd3ff28;
  DT_UINT unk_6de8d26;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
