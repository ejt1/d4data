/**
 * Definition: tbc7b93f7
 * Hash: bc7b93f7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t6867c9cc.h"

#pragma push(pack, 1)

struct tbc7b93f7 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_FIXEDARRAY<t6867c9cc, 75> unk_3eb1d34;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
