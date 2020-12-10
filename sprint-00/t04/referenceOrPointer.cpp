#include "referenceOrPointer.h"

void multipleByPointer(int* ptr, int mult) {
    *ptr = *ptr * mult;
};
void multipleByReference(int& ref, int mult) {
    ref = ref * mult;
};
