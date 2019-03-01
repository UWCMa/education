#include "ViewHandler.h"
#include "common/timeserver.h"


int main(int argc, char **argv)
{
	ViewHandler viewHandler;
	viewHandler.init(argc, argv);


	glutTimeserver::setHandler(&viewHandler);
	glutDisplayFunc(glutTimeserver::displayFunc);
	glutReshapeFunc(glutTimeserver::reshapeFunc);
	glutMainLoop();

	return 0;   
}