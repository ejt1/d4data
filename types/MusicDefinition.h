/**
 * Definition: MusicDefinition
 * Hash: 443ccdea
 */

#pragma once

#include "../types.h"
#include "TestDefinitionMusic.h"
#include "t1d0f43e.h"
#include "t5e7b6f8c.h"

#pragma push(pack, 1)

struct MusicDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Sound> unk_1a7272c;
  DT_UINT dwFlags;
  DT_FLOAT unk_d17a11d;
  DT_FLOAT unk_ce3c7b4;
  DT_VARIABLEARRAY<t1d0f43e> unk_91c65f5;
  DT_VARIABLEARRAY<TestDefinitionMusic> unk_6e07592;
  t5e7b6f8c unk_6e07e26;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
