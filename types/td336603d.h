/**
 * Definition: td336603d
 * Hash: d336603d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td336603d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwTime;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
