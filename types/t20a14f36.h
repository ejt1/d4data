/**
 * Definition: t20a14f36
 * Hash: 20a14f36
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t20a14f36 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
