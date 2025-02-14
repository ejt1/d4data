/**
 * Definition: t5536dec
 * Hash: 5536dec
 */

#pragma once

#include "../types.h"
#include "tafbbdb78.h"

#pragma push(pack, 1)

struct t5536dec : public ComplexRead {
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_VARIABLEARRAY<tafbbdb78> unk_8c5a4bb;
  DT_INT unk_822b979;
  DT_FLOAT unk_c848c32;
  tafbbdb78 unk_1794af8;
  DT_FLOAT unk_978714f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
