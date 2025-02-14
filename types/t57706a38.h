/**
 * Definition: t57706a38
 * Hash: 57706a38
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t57706a38 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
