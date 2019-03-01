#pragma once
#include "../ViewHandler.h"

namespace glutTimeserver
{
	void setHandler(ViewHandler*);
	void displayFunc();
	void reshapeFunc(int w, int h);

	bool checkInitPtrToHandler();
};
