/**
 * Definition: WallDefinition
 * Hash: e4a7d659
 */

#pragma once

#include "../types.h"
#include "te25fcbdf.h"

#pragma push(pack, 1)

struct WallDefinition : public ComplexRead {
  te25fcbdf unk_a1f5263;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)