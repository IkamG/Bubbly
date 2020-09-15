#pragma once
#include "Core.h"

namespace bbly {
	class BBLY_API Appl {
	public:
		Appl();
		virtual ~Appl();
		void run();
	};
	Appl* createAppl();
}


