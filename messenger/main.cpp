//#include "common/timeserver.h"
#include <iostream>
#include <GLEW/glew.h>
//#include <GLFW/glfw3.h>

/*#include <glut.h>
int main(int argc, char **argv)
{
	ViewHandler viewHandler;
	viewHandler.init(argc, argv);
	std::cout << "hello 333333 " << std::endl;

	glutTimeserver::setHandler(&viewHandler);
	glutDisplayFunc(glutTimeserver::displayFunc);
	glutReshapeFunc(glutTimeserver::reshapeFunc);
	glutMainLoop();


	return 0;
}*/
#include <GLFW/glfw3.h>

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	if (GLEW_OK != glewInit())
	{
		std::cout << "Error!" << std::endl;
	}

	std::cout << glGetString(GL_VERSION) << std::endl;
	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

