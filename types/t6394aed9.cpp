/**
 * Definition: t6394aed9
 * Hash: 6394aed9
 */

#include "t6394aed9.h"

void t6394aed9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tHardpointLink, base, ptr);
}