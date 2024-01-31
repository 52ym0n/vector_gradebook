#include "strcpy.h"

void strcpy_copy_string(char* _Destination, const char* _Source, size_t _Size)
{
	#ifdef VSC
	strcpy_s(_Destination, _Size, _Source);
	#else
	strncpy(_Destination, _Source, _Size);
	#endif // VSC
}
