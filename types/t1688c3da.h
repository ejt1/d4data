/**
 * Definition: t1688c3da
 * Hash: 1688c3da
 */

#pragma once

#include "../types.h"
#include "t8c51adb6.h"

#pragma push(pack, 1)

struct t1688c3da : public ComplexRead {
  DT_VARIABLEARRAY<t8c51adb6> unk_22f765c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)