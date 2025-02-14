/**
 * Definition: tc55bfb36
 * Hash: c55bfb36
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct tc55bfb36 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  MarkerHandle tMarkerHandle;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
