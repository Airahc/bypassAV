/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, winimConverterBOOLToBoolean_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZutils_5)(NI32 x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(x == ((NI32) 0))) goto LA3_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA3_: ;
	{
		result = NIM_TRUE;
	}
	LA1_: ;
	return result;
}