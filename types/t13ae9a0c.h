/**
 * Definition: t13ae9a0c
 * Hash: 13ae9a0c
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t13ae9a0c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_85269a4;
  DT_UINT dwActorID;
  DT_INT unk_54489ef;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)