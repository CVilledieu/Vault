#include "file.h"
#include <stdint.h>

// File Signature
static const uint32_t magic = 0x564C5444;
static const uint16_t major = 0;
static const uint16_t minor = 1;

static const uint16_t signatureSize = 64;

// Page
static const uint32_t pageSize = 4096;

