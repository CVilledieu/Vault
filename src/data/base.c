#include "base.h"
#include <stdint.h>


static const struct {
    uint32_t magic;
    uint16_t major;
    uint16_t minor;

    uint32_t headSize;
    uint32_t pageSize;
} HEADER_DATA = {
    0x564C5444, 
    0, 1, // Major, Minor version num 
    256, 512 // Header size, Page Size
};