/**
 * Definition: t9e2445da
 * Hash: 9e2445da
 */

#include "t9e2445da.h"

void t9e2445da::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_279aa5a, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_a8ee95c, base, ptr);
  readData(&unk_4bec6d2, base, ptr);
  readData(&unk_4c9ec22, base, ptr);
}