/**
 * Definition: tc2d73f26
 * Hash: c2d73f26
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tc2d73f26 : public ComplexRead {
  DT_UINT dwType;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT tDuration;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  TriggerCleanup tCleanup;
  DT_INT unk_49e9257;
  DT_INT unk_5490979;
  DT_UINT dwPad;
  DT_RGBACOLOR unk_107a24b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
