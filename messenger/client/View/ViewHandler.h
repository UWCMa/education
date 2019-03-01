#pragma once

#include "MainWindow.h"
#include <functional>
#include <glut.h>

class ViewHandler
{
public:
	ViewHandler();
	~ViewHandler();

	ViewHandler( const ViewHandler& ) = delete;
	ViewHandler& operator = (const ViewHandler&) = delete;

	void init(int argc, char **argv);
	void execute();
	void reshape(int w, int h);

	//for calling glut
	//static void displayFunc() { execute(); }
	//static void reshapeFunc(int w, int h);
private:

	MainWindow mMainWindow;
};