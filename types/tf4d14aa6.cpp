/**
 * Definition: tf4d14aa6
 * Hash: f4d14aa6
 */

#include "tf4d14aa6.h"

void tf4d14aa6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwID, base, ptr);
}
