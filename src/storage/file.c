#include "file.h"
#include <stdint.h>
#include <stdio.h>

// Header 
static const uint32_t magic = 0x564C5444;
static const uint16_t vMajor = 0;
static const uint16_t vMinor = 1;
static const uint32_t headerSize = 256;
static const uint32_t pageSize = 4096;
static uint32_t pageCount = 1;
static uint32_t fileSize = headerSize + pageSize;

static const char* tempFileName = "TEMP.tmpdb";
 
FILE* create_temp_file(){
    FILE *fp;
    fp = fopen(tempFileName, "w");

    fwrite(magic, sizeof(uint32_t), 1, fp);
    fwrite(vMajor, sizeof(uint16_t), 1, fp);
    fwrite(vMinor, sizeof(uint16_t), 1, fp);
    fwrite(headerSize, 32, 1, fp);
    fwrite(pageSize, sizeof(uint32_t), 1, fp);
    fwrite(pageCount, sizeof(uint32_t), 1, fp);
    fwrite(fileSize, sizeof(uint32_t), 1, fp);

    return fp;
}

void open_file(FILE* fp){
    
}