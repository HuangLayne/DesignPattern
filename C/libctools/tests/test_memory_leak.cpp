#include "mem.h"

int main() {
    char *ptr1 = (char *)malloc(10);
    int *ptr2 = (int *)calloc(10, sizeof(int));
    float *ptr3 = (float *)calloc(15, sizeof(float));
    ptr3 = (float *)realloc(ptr3, 100 * sizeof(float));
    (void)ptr1;

    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
