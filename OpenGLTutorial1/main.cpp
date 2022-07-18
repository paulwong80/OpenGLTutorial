// This code is to create a window for opengl using glfw3. The main purpose is to make sure you have 
// the right glew and glfw builds and settings for the project. If you can see the white windows with
// no error, you are on the track.
// Copyright by Rui @njupt.
// 2022.7

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // for mac

	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGLTutorial1", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	if (GLEW_OK != glewInit())
	{
		std::cout << "Failed to init glew" << std::endl;
		glfwTerminate();
		return -1;
	}
	std::cout << "Hello World" << std::endl;
	std::cin.get();
	return 1;
}