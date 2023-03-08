#pragma once

#ifdef AQ_PLATFORM_WINDOWS
	#ifdef AQ_BUILD_DLL
		#define AQUAMARINE_API _declspec(dllexport)
	#else
		#define AQUAMARINE_API _declspec(dllimport)
	#endif // AQ_BUILD_DLL
#else
	#error Aquamarine only supports Windows!
#endif // AQ_PLATFORM_WINDOWS
