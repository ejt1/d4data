/**
 * Definition: te31b8ea2
 * Hash: e31b8ea2
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"
#include "t29da0a90.h"

#pragma push(pack, 1)

struct te31b8ea2 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  t29da0a90 unk_733c15d;
  DT_UINT dwActorID;
  DT_INT unk_279aa5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
