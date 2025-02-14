/**
 * Definition: MonsterSubcondition
 * Hash: 97437e99
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MonsterSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Actor> snoMonsterActor;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
