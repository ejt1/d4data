/**
 * Definition: t85c1513c
 * Hash: 85c1513c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t85c1513c : public ComplexRead {
  DT_SNO<SnoGroup::Territory> snoTerritory;
  DT_VARIABLEARRAY<DT_VECTOR2D> arPoints;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
