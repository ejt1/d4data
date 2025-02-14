/**
 * Definition: ta883080
 * Hash: a883080
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta883080 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Recipe> snoRecipe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
