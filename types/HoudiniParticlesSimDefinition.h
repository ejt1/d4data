/**
 * Definition: HoudiniParticlesSimDefinition
 * Hash: 5bc6f209
 */

#pragma once

#include "../types.h"
#include "t82e4d816.h"
#include "tcec695fb.h"

#pragma push(pack, 1)

struct HoudiniParticlesSimDefinition : public ComplexRead {
  DT_UINT unk_ce1c03c;
  DT_UINT unk_5b87e5;
  DT_FLOAT unk_82df211;
  DT_UINT unk_728cb31;
  DT_FLOAT flRadius;
  DT_INT unk_e6e1d4e;
  DT_FLOAT unk_77234fb;
  DT_FLOAT flCompression;
  DT_VARIABLEARRAY<t82e4d816> unk_ab79e60;
  DT_VARIABLEARRAY<tcec695fb> unk_e9be652;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
