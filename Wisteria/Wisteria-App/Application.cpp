#include <cstdlib>
#include <iostream>
#include "Application.h"
#include <glad/include/glad/glad.h>
#include "glfw/include/GLFW/glfw3.h"

namespace Wisteria{


// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
    Application::Application()
    {
        std::cout << "Start of App" << std::endl;

    }
    Application::~Application(){}
    void Application::Run() {
        std::cout << "Running App" << std::endl;
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Wisteria", NULL, NULL);
        if (window == NULL)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            exit(EXIT_FAILURE);
        }
        glfwMakeContextCurrent(window);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Failed to initialize GLAD" << std::endl;
            exit(EXIT_FAILURE);
        }    

        while (!glfwWindowShouldClose(window))
        {

            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glfwSwapBuffers(window);
            glfwPollEvents();
        }
        glfwTerminate();
    }
};
