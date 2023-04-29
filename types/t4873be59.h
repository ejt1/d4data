/**
 * Definition: t4873be59
 * Hash: 4873be59
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct t4873be59 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  DT_TAGMAP<DT_INT> unk_725129e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)