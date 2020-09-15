#pragma once

#ifdef BBLY_PLATFORM_WIDNOWS
	#ifdef BBLY_BUILD_DLL
		#define BBLY_API __declspec(dllexport)
	#else
		#define BBLY_API __declspec(dllimport)
	#endif
#endif