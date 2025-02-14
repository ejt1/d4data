/**
 * Definition: WorldDefinition
 * Hash: a5d8191
 */

#pragma once

#include "../types.h"
#include "Environment.h"
#include "MaterialTexture.h"
#include "WorldServerData.h"
#include "t4825cde.h"
#include "t85c1513c.h"

#pragma push(pack, 1)

struct WorldDefinition : public ComplexRead {
  DT_VARIABLEARRAY<WorldServerData> ptServerData;
  DT_ENUM<DT_INT> unk_8ca2d45;
  DT_FLOAT unk_a952693;
  Environment tEnvironment;
  DT_FLOAT flDeformationScale;
  DT_UINT uFlags;
  DT_SNO<SnoGroup::Observer> unk_4194d72;
  DT_SNO<SnoGroup::SubZone> unk_3ce229b;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> unk_27befa0;
  DT_INT unk_587b37c;
  DT_VARIABLEARRAY<t85c1513c> unk_675bda3;
  DT_UINT unk_678ad38;
  DT_ENUM<DT_INT> unk_720f501;
  MaterialTexture unk_cc56e3e;
  MaterialTexture unk_5733630;
  DT_FLOAT unk_59a2b11;
  t4825cde unk_d9c79d2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
