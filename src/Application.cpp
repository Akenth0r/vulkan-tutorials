#include "Application.hpp"

void Application::initWindow() 
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    this->window = glfwCreateWindow(this->WIDTH, this->HEIGHT, "Vulkan", nullptr, nullptr);
}

void Application::initVulkan()
{

}

void Application::mainLoop() 
{
    while (!glfwWindowShouldClose(this->window)) 
    {
        glfwPollEvents();
    }
}

void Application::cleanup() 
{
    glfwDestroyWindow(this->window);
    glfwTerminate();
}

void Application::run() 
{
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}