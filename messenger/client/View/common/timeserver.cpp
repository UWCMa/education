#include "timeserver.h"
#include <iostream>

namespace glutTimeserver
{
	ViewHandler* pViewHandler = nullptr;

	void setHandler(ViewHandler* viewHandler)
	{
		pViewHandler = viewHandler;
	}

	void displayFunc()
	{
		if (checkInitPtrToHandler())
			pViewHandler->execute();
	}

	void reshapeFunc(int w, int h)
	{
		if (checkInitPtrToHandler())
			pViewHandler->reshape(w, h);
	}

	bool checkInitPtrToHandler()
	{
		bool result = true;
		if (nullptr == pViewHandler)
		{
			std::cout << "glutTimeserver displayFunc:"
				"Pointer to drawing handler is nullptr" << std::endl;
			result = false;
		}
		return result;
	}
}