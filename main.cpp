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

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);


		glPushMatrix();

		glScalef( 0.1f, 0.1f, 0.1f );

		glBegin(GL_TRIANGLES);

		glColor3f( 1.f, 0.f, 0.f );
		glVertex3f( 0.f, 0.f, 0.f );

		glColor3f( 0.f, 1.f, 0.f );
		glVertex3f( 10.f, 0.f, 0.f );

		glColor3f( 0.f, 0.f, 1.f );
		glVertex3f( 5.f, 10.f, 0.f );

		glEnd();
		glPopMatrix();


		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
