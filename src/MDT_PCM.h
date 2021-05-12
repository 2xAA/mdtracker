#ifndef MDT_PCM_H_INCLUDED
#define MDT_PCM_H_INCLUDED

#define SAMPLE_DATA_SIZE    8   // 3 bytes start, 3 bytes end, 1 byte loop, 1 byte rate
#define DAC_DATA_END        0x00186A00 // see symbols.txt for sgdk_logo_palette_data;
// resulting ROM size must be <= 2MB (2097152 Byte)

static u32 SRAM_ReadSampleRegion(u8 bank, u8 note, u8 byteNum);
void SRAM_WriteSampleRegion(u8 bank, u8 note, u8 byteNum, u8 data);

#endif // MDT_PCM_H_INCLUDED
