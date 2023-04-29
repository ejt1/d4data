/**
 * Definition: te05729ef
 * Hash: e05729ef
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te05729ef : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)