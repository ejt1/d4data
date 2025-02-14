/**
 * Definition: t4ddbd01a
 * Hash: 4ddbd01a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4ddbd01a : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Quest> snoQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
