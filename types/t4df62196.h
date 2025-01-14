/**
 * Definition: t4df62196
 * Hash: 4df62196
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4df62196 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Scene> snoScene;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
