//
// Created by zhanghandan on 2019/4/1.
//

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "glContextInit.h"

using namespace std;

int main()
{
	GLFWwindow * window;
	if (init(&window) != 0)
	{
		std::cout << "init gl context wrong";
		return -1;
	}
	while (!glfwWindowShouldClose(window))
	{
		processInput(window);

		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

    return 0;
}