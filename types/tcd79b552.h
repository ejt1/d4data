/**
 * Definition: tcd79b552
 * Hash: cd79b552
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcd79b552 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwNodeIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
