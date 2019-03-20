#include "ViewHandler.h"
#include <iostream>
#include <glut.h>

ViewHandler::ViewHandler()
	: mMainWindow()
{
	std::cout << "ViewHandler cnstr" << std::endl;
}

ViewHandler::~ViewHandler()
{
}

void ViewHandler::init(int argc, char **argv)
{
	std::cout << "ViewHandler init" << std::endl;
	glutInit(&argc, argv);
	mMainWindow.init();
}


void ViewHandler::execute()
{
	std::cout << "ViewHandler execute" << std::endl;
	glClear(GL_COLOR_BUFFER_BIT);
	mMainWindow.display();
	glFlush();
}

void ViewHandler::reshape(int w, int h)
{
	mMainWindow.reshape(w, h);
}