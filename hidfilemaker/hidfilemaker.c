#include "vmulti.h"
#include <stdio.h>

INT __cdecl main(int argc, PCHAR argv[])
{
	FILE *f;
	f = fopen("vmulti.hid","wb");
	fwrite(&DefaultHidDescriptor, sizeof(DefaultHidDescriptor), 1, f);
	fwrite(&DefaultReportDescriptor, sizeof(DefaultReportDescriptor), 1, f);
	fclose(f);
    return 0;
}