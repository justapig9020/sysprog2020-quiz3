#include <stdint.h>
#include <stdio.h>

#define MAX 0xFFFFFFFF

int main(void) {
    int32_t sar = MAX;
    uint32_t shr = MAX;
    printf("SAR: %x -> %x\n", sar, sar >> 3);
    printf("SHR: %x -> %x\n", shr, shr >> 3);

    sar &= ~(0x80000000);
    shr &= ~(0x80000000);
    printf("SAR: %x -> %x\n", sar, sar >> 3);
    printf("SHR: %x -> %x\n", shr, shr >> 3);

    return 0;
}
