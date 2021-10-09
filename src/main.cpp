#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "Application.hpp"

int main() {
    Application app;

    try 
    {
        app.run();

    } 
    catch (const std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}