#include "MainWindow.h"
#include <glut.h>
#include <iostream>

MainWindow::MainWindow()
	: BaseView()
	, mLogo()
{
	std::cout << "MainWindow cnstr" << std::endl;
};

MainWindow::~MainWindow()
{
};

void MainWindow::init()
{
	std::cout << "MainWindow init" << std::endl;

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Messenger");

	mLogo.init();
}

void MainWindow::display() const
{
	std::cout << "MainWindow draw" << std::endl;
	mLogo.display();
}

void MainWindow::reshape(int w, int h)
{
	std::cout << "MainWindow reshape w = " << w << " h = " << h << std::endl;
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);

	BaseView::reshape(w, h);
	mLogo.reshape(w, h);
}