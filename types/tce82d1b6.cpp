/**
 * Definition: tce82d1b6
 * Hash: ce82d1b6
 */

#include "tce82d1b6.h"

void tce82d1b6::read(const char* base, char* &ptr) {
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
  readData(&snoMusic, base, ptr);
  readData(&unk_e1829be, base, ptr);
}