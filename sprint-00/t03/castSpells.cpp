#include "castSpells.h"

int castFloatToInt(float number) {
    return number = int (number);
};
int* castToNonConstIntPtr(const int* ptr) {
    return const_cast<int *>(ptr);
};