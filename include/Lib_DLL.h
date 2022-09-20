#pragma once

#ifdef LIB_EXPORTS
	#define _LIB_API __declspec(dllexport)
#else
	#define _LIB_API __declspec(dllimport)
#endif
