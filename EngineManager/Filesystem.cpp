#include "Filesystem.h"
#include "PS3.h"
#include "PS4.h"
#include "XONE.h"

#define XBOXONE
#define PLAYSTATION3
#define PLAYSTATION4

Filesystem *Filesystem::Instance() {

#ifdef PLAYSTATION3
	static Filesystem* _instance = (Filesystem*)new PS3Filesystem();
//#else
//	#ifdef PLAYSTATION4
//		static Filesystem* _instance = (Filesystem*)new PS4Filesystem();
//	#endif
//#else
//	#ifdef XBOXONE
//		static Filesystem* _instance = (Filesystem*)new XONEFilesystem();
//	#endif
#endif

	return _instance;
}