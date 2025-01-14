/**
 * Definition: CrafterDefinition
 * Hash: c7bf37d0
 */

#pragma once

#include "../types.h"
#include "t3d289d6c.h"
#include "t7705c56a.h"
#include "tc661a6fd.h"

#pragma push(pack, 1)

struct CrafterDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_ENUM<DT_INT> eCrafterType;
  DT_VARIABLEARRAY<tc661a6fd> arTabs;
  DT_VARIABLEARRAY<t3d289d6c> unk_19e7a72;
  DT_VARIABLEARRAY<t7705c56a> unk_3668490;
  DT_VARIABLEARRAY<t7705c56a> unk_aa9dad7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
