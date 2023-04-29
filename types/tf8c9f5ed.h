/**
 * Definition: tf8c9f5ed
 * Hash: f8c9f5ed
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tf8c9f5ed : public ComplexRead {
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

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)