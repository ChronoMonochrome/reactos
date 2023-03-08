#include "config.h"
#include "wine/port.h"

#include "d3d10_private.h"
#include <float.h>

void read_dword(const char **ptr, UINT32 *d)
{
    memcpy(d, *ptr, sizeof(*d));
    *ptr += sizeof(*d);
}

 void read_float(const char **ptr, float *f)
{
   // STATIC_ASSERT(sizeof(float) == sizeof(UINT32));
    read_dword(ptr, (UINT32 *)f);
}

 void skip_dword_unknown(const char **ptr, unsigned int count)
{
    unsigned int i;
    UINT32 d;

   // WARN("Skipping %u unknown DWORDs:\n", count);
    for (i = 0; i < count; ++i)
    {
        read_dword(ptr, &d);
       // WARN("\t0x%08x\n", d);
    }
}

void write_dword(DWORD* location, INT* offset, const DWORD write)
{
    location[*offset] = write;
    (*offset)++;
}

 void write_float(DWORD* location, INT* offset, const FLOAT write)
{
    ((FLOAT*)location)[*offset] = write;
    (*offset)++;
}
