#include "referenceOrPointer.h"

int main() {

    int num = 5;
    int* ptrNum;
    ptrNum = &num;
    
    multipleByPointer(ptrNum, 10);
    std::cout << "multipleByPointer\n" << num << std::endl;
    std::cout << "-------" << std::endl;
    multipleByReference(num, 10);
    std::cout << "multipleByReference\n" << num << std::endl;
}
