#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#define SIZE_MAX 128

int main() {

    vector v = createVector(10);
    reserve(&v, 0);

    return 0;
}
