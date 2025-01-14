/**
 * Definition: t104e4efd
 * Hash: 104e4efd
 */

#pragma once

#include "../types.h"
#include "t6889f334.h"

#pragma push(pack, 1)

struct t104e4efd : public ComplexRead {
  DT_FIXEDARRAY<t6889f334, 4> unk_ede880e;
  DT_SNO<SnoGroup::Quest> unk_92edf50;
  DT_UINT hZoneLabel;
  DT_STARTLOC_NAME uEntranceGUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
