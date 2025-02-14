/**
 * Definition: t999ca9a3
 * Hash: 999ca9a3
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct t999ca9a3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  DT_TAGMAP<DT_INT> unk_4688828;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
