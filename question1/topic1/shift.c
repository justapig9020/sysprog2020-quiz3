#include <stdint.h>
#include <stdio.h>

#define MAX 0xFFFFFFFF

int main(void) {
    int32_t sar = MAX;
    uint32_t shr = MAX;

    printf("SAR: %x -> %x\n", sar, sar >> 1);
    printf("SHR: %x -> %x\n", shr, shr >> 1);

    return 0;
}
