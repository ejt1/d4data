/**
 * Definition: t5f6b1477
 * Hash: 5f6b1477
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "t653f75b6.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct t5f6b1477 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  t653f75b6 tFont;
  DT_TAGMAP<DT_INT> unk_4741819;
  DT_TAGMAP<DT_INT> unk_a4f2ffc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
