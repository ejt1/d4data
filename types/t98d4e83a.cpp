/**
 * Definition: t98d4e83a
 * Hash: 98d4e83a
 */

#include "t98d4e83a.h"

void t98d4e83a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_582a697, base, ptr);
  readData(&unk_b4f614c, base, ptr);
  readData(&unk_ff11bff, base, ptr);
}