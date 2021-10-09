#ifndef APPLICATION_H
#define APPLICATION_H

#include <vulkan/vulkan.hpp>
#include <GLFW/glfw3.h>

class Application {

public:
    const int HEIGHT = 600;
    const int WIDTH = 800;

    Application()=default;
    void run();

private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

    GLFWwindow* window;
};

#endif