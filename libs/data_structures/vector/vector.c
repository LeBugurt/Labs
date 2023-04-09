#include <stdio.h>
#include "vector.h"
#include "malloc.h"

vector createVector(size_t n) {
    int *v = (int*)malloc(sizeof(int) * n);
    if (NULL == v) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }

    return (vector) {(v == 0 ? NULL: v), 0, n};
}

void reserve(vector *v, size_t newCapacity) {
    
}