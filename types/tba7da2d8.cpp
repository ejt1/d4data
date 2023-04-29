/**
 * Definition: tba7da2d8
 * Hash: ba7da2d8
 */

#include "tba7da2d8.h"

void tba7da2d8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_d8b6d76, base, ptr);
}