#include "pyxelcore/utilities.h"

#include "pyxelcore/constants.h"

#include <string>

#define CHECK_CONSTANT(n)      \
  if (strcmp(name, #n) == 0) { \
    return n;                  \
  }                            \
  while (0)

namespace pyxelcore {

int32_t Utilities::GetConstantNumber(const char* name) {
  CHECK_CONSTANT(DEFAULT_FPS);
  CHECK_CONSTANT(DEFAULT_SCALE);
  CHECK_CONSTANT(DEFAULT_FPS);
  CHECK_CONSTANT(DEFAULT_BORDER_WIDTH);
  CHECK_CONSTANT(DEFAULT_BORDER_COLOR);

  CHECK_CONSTANT(DEFAULT_PALETTE_00);
  CHECK_CONSTANT(DEFAULT_PALETTE_01);
  CHECK_CONSTANT(DEFAULT_PALETTE_02);
  CHECK_CONSTANT(DEFAULT_PALETTE_03);
  CHECK_CONSTANT(DEFAULT_PALETTE_04);
  CHECK_CONSTANT(DEFAULT_PALETTE_05);
  CHECK_CONSTANT(DEFAULT_PALETTE_06);
  CHECK_CONSTANT(DEFAULT_PALETTE_07);
  CHECK_CONSTANT(DEFAULT_PALETTE_08);
  CHECK_CONSTANT(DEFAULT_PALETTE_09);
  CHECK_CONSTANT(DEFAULT_PALETTE_10);
  CHECK_CONSTANT(DEFAULT_PALETTE_11);
  CHECK_CONSTANT(DEFAULT_PALETTE_12);
  CHECK_CONSTANT(DEFAULT_PALETTE_13);
  CHECK_CONSTANT(DEFAULT_PALETTE_14);
  CHECK_CONSTANT(DEFAULT_PALETTE_15);

  // error

  return 0;
}

const char* Utilities::GetConstantString(const char* name) {
  CHECK_CONSTANT(VERSION);

  CHECK_CONSTANT(DEFAULT_CAPTION);

  // error

  return "";
}

void Utilities::RaiseError(const char* message) {
  //
}

}  // namespace pyxelcore