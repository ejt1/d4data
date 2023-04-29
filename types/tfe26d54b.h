/**
 * Definition: tfe26d54b
 * Hash: fe26d54b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfe26d54b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;
  DT_UINT tPhaseName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)