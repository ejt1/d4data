/**
 * Definition: QuestSubcondition
 * Hash: eac76de3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct QuestSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eState;
  DT_ENUM<DT_INT> unk_16e7bfc;
  DT_INT nStepUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
