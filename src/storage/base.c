#include "base.h"
#include <stdint.h>


static const struct {
    uint32_t magic;
    uint16_t major;
    uint16_t minor;
    uint32_t pageSize; // Number of pages
    uint32_t pageCount; //Place holder at the moment while deciding, so the header size is 128 b
} HEADER_DATA = {
    0x564C5444, 
    0, 1, // Major, Minor version num 
    4096, 1 // Header size, Page Size
};

static const struct {
    uint32_t indexes;
} HEADER_PAGE_DATA = {


};